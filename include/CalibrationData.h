#ifndef CALIBRATIONDATA_H_
#define CALIBRATIONDATA_H_

#pragma option -Xsmall-data=0
#pragma option -Xsmall-const=0

#include "Calibration_Settings.h"

#ifdef CALIBRATION_ENABLED
/* Section data from linker script. */
extern char __CALIB_RAM_START;
extern char __CALIB_RAM_END;
extern char __CALIB_ROM_START;
#endif /* CALIBRATION_ENABLED */
#define ARC_DECLARE_CALIB(type, name) type __attribute__((section (".calibration"))) name
#define ARC_DECLARE_CALIB_SHARED(type, name) type __attribute__((section (".calibration_shared"))) name
#define ARC_DECLARE_CALIB_EXTERN(type, name) extern type name

#endif /* CALIBRATIONDATA_H_ */
