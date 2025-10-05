#ifndef FTM0_H
#define FTM0_H

#include "S32K116.h"

#define DRV8873H_N_FLT    (0x05)
#define DRV8873H_N_SLP    (0x03)
#define DRV8873H_EN_PIN   (0x02)
#define DRV8873H_PWM_PIN  (0x0D)
#define DRV8873H_IN1_PIN  (0x0F)
#define DRV8873H_IN2_PIN  (0x10)

typedef enum
{
    DRV8873h_ENABLE     = (0x00),
    DRV8873h_DISABLE    = (0x01),

    DRV8873h_SLEEP     = (0x00),
    DRV8873h_DISLEEP   = (0x01),

    DRV8873h_ENABLE     = (0x00),
    DRV8873h_DISABLE    = (0x01),

    DRV8873h_ENCTRLENABLE  = (0x00),
    DRV8873h_ENCTRLDISABLE = (0x01),

    DRV8873h_PHCTRLENABLE  = (0x00),
    DRV8873h_PHCTRLDISABLE = (0x01),
}DRV8873H_CTRLType;

void FTM0_Init(void);

#endif