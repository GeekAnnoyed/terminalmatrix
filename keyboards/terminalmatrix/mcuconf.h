#pragma once

#define HAL_USE_PWM                 TRUE

#include_next <mcuconf.h>

#undef RP_SERIAL_USE_USARTn
#define RP_SERIAL_USE_USARTn TRUE
