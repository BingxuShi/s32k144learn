#include "FlexCAN_Ip.h"
#include "IntCtrl_Ip.h"

extern void CAN0_ORED_0_15_MB_IRQHandler(void);

void FLEXCAN_INIT(void)
{
	IntCtrl_Ip_EnableIrq(CAN0_ORed_0_15_MB_IRQn);
	IntCtrl_Ip_InstallHandler(CAN0_ORed_0_15_MB_IRQn, CAN0_ORED_0_15_MB_IRQHandler, NULL_PTR);

	Flexcan_Ip_DataInfoType rx_info = {
										.msg_id_type = FLEXCAN_MSG_ID_STD,
										.data_length = 8u,
										.is_polling = TRUE,
										.is_remote = FALSE
	    								};
	FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);
}




void FlexCan_Callback(uint8 instance, Flexcan_Ip_EventType eventType,
        uint32 buffIdx, const Flexcan_Ip_StateType * flexcanState)

{
	while(1);
}
