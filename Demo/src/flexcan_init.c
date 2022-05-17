#include "FlexCAN_Ip.h"
#include "IntCtrl_Ip.h"
#include "FlexCAN_Ip_Types.h"

#define MSG_ID 20u
#define RX_MB_IDX 1U
#define TX_MB_IDX 0U


Flexcan_Ip_MsgBuffType rxData;

void FLEXCAN0_INIT(void)
{
	Flexcan_Ip_StatusType state;
	state = FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);
	while(state != FLEXCAN_STATUS_SUCCESS)
	{
		state = FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);
	}
	FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);
}
void FLEXCAN0_RX_INIT(void)
{
	Flexcan_Ip_DataInfoType rx_info = {
										.msg_id_type = FLEXCAN_MSG_ID_STD,
										.data_length = 8u,
										.is_polling = TRUE,
										.is_remote = FALSE
									};
	Flexcan_Ip_MsgBuffType rxData;
	FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_0, RX_MB_IDX, &rx_info, MSG_ID);
	FlexCAN_Ip_Receive(INST_FLEXCAN_0, RX_MB_IDX, &rxData, FALSE);

}
void FLEXCAN0_SEND(void)
{
	Flexcan_Ip_DataInfoType rx_info = {
										.msg_id_type = FLEXCAN_MSG_ID_STD,
										.data_length = 8u,
										.is_polling = TRUE,
										.is_remote = FALSE
									};
	uint8 TXData[8] = {1,2,3,4,5,6,7};
	FlexCAN_Ip_Send(INST_FLEXCAN_0, TX_MB_IDX, &rx_info, 20u, (uint8 *)&TXData);

}




void Flexcan0_callback(uint8 instance, Flexcan_Ip_EventType eventType,uint32 buffIdx, const Flexcan_Ip_StateType * flexcanState)
{
	int a = rxData.msgId;

	int b = rxData.dataLen;
	FLEXCAN0_SEND();
	//while(1);
		FlexCAN_Ip_Receive(INST_FLEXCAN_0, RX_MB_IDX, &rxData, FALSE);

}



