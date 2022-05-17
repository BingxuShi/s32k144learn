
#include "Ftm_Pwm_Ip.h"
#include "PlatformTypes.h"
#include "ftm_pwm_init.h"


#define FTM_INSTANCE_0    (uint8)0U /* FTM_0 */
#define FTM_CH_0          (uint8)0U /* Channel_0*/

void FTM0_PWM_INIT(void)
{
	Ftm_Pwm_Ip_Init(FTM_INSTANCE_0, &Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0);
	Ftm_Pwm_Ip_UpdatePwmPeriod(FTM_INSTANCE_0, 0x5000, true);//2.5k hz
	Ftm_Pwm_Ip_UpdatePwmChannel(FTM_INSTANCE_0, FTM_CH_0, 0x5000, 0x000, true);//0%
	Ftm_Pwm_Ip_UpdatePwmChannel(FTM_INSTANCE_0, FTM_CH_0, 0x0000, 0x000, true);//100%
}

void FTM0_PWM_DEINIT(void)
{
	Ftm_Pwm_Ip_DeInit(FTM_INSTANCE_0);
}
