#include "mos.h"
#include "msched.h"
#include "transport.h"
#include <string.h>
#include "net.h"
#include "node_id.h"
#include "ctp_plus.h"


void appRecv() {
	char recvdDataBuf[12];
	
	// avoid signal interference with default channel (26) and wi-fi 
	// cc2420_set_channel(26);

	while (1) {
		memset(recvdDataBuf, 0, sizeof(recvdDataBuf));
		
		receiveData(TRANSPORT_LISTENING_PORT, recvdDataBuf, 
				sizeof(recvdDataBuf), 1);
		printf("In appRecv(), received data: %s \n", recvdDataBuf);
	}
}


void start(void) {
	uint16_t power = 30; // Transmit power
	
	mos_node_id_set(0);
	
	transportInit(true);
	// net_ioctl(CTP_PROTO_ID, CTP_SET_TESTBED);
	net_ioctl(CTP_PROTO_ID, CTP_SET_POWER, power);
	
	mos_thread_new(appRecv, 384, PRIORITY_NORMAL);
}

