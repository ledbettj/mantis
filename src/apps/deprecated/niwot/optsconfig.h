// build configuration options
// uncomment/comment to enable/disable support for a device,
// radio, or interface

#include "build_opts.h"

/* By default all devices and interfaces are defined in
   src/lib/include/build_opts.h. You can check this file for
   the list of possible build options.

   To disable a build option, use #undef

   Example:
   #undef MICA2_ACCEL
   #undef CC2420
   #undef MAXSTREAM

   will disable the accelerometer, the cc2420 radio, and the maxstream
   radio drivers.

   An exception is changing CC1000 from CSMA to another protocol, where
   another must be defined. Ex:

   #undef CC1000_CSMA
   #define CC1000_TDMA

*/

//#undef MICA2_ACCEL
//#undef MICA2_BATTERY
#undef MICA2_HUMIDITY
#undef MICA2_ID
#undef MICA2_LIGHT_TEMP
#undef MICA2_MAGNET
#undef MICA2_MIC
#undef MICA2_SOUNDER
#undef MICA2_ULTRASOUND
#define GET_RSSI

