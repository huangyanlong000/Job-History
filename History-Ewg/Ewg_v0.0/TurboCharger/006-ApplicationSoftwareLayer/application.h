#ifndef APPLICATION_H
#define APPLICATION_H

#include "can0.h"
#include "drv8873h.h"
#include "cdd_can0.h"
#include "cdd_drv8873.h"
#include "hal3900service.h"

#define TARGET_IN (0x00)

typedef enum
{
    APP_INIT       = (0x00),
    APP_DETECTION  = (0x01),
    APP_CALIBRATED = (0x02),
    APP_CONTRAL    = (0x03),
    
    APP_NUM,
}APP_RUNType;

void Application_Run(void);

#endif
