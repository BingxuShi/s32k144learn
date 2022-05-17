
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_Ip_Send/12:
  Jump functions of caller  FlexCAN_Ip_Receive/11:
  Jump functions of caller  FlexCAN_Ip_ConfigRxMb/10:
  Jump functions of caller  FlexCAN_Ip_SetStartMode_Privileged/9:
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/6:
  Jump functions of caller  Flexcan0_callback/5:
    callsite  Flexcan0_callback/5 -> FLEXCAN0_SEND/4 : 
  Jump functions of caller  FLEXCAN0_SEND/4:
  Jump functions of caller  FLEXCAN0_RX_INIT/3:
  Jump functions of caller  FLEXCAN0_INIT/2:

 Propagating constants:

Not considering Flexcan0_callback for cloning; -fipa-cp-clone disabled.
Not considering FLEXCAN0_SEND for cloning; -fipa-cp-clone disabled.
Not considering FLEXCAN0_RX_INIT for cloning; -fipa-cp-clone disabled.
Not considering FLEXCAN0_INIT for cloning; -fipa-cp-clone disabled.

overall_size: 62, max_new_size: 11001
 - context independent values, size: 9, time_benefit: 4.000000

IPA lattices after all propagation:

Lattices:
  Node: Flexcan0_callback/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FLEXCAN0_SEND/4:
  Node: FLEXCAN0_RX_INIT/3:
  Node: FLEXCAN0_INIT/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCAN_Ip_Send/12 (FlexCAN_Ip_Send) @06f5ab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FLEXCAN0_SEND/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_Receive/11 (FlexCAN_Ip_Receive) @06f5a9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexcan0_callback/5 (1073741824 (estimated locally),1.00 per call) FLEXCAN0_RX_INIT/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_ConfigRxMb/10 (FlexCAN_Ip_ConfigRxMb) @06f5a8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FLEXCAN0_RX_INIT/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_SetStartMode_Privileged/9 (FlexCAN_Ip_SetStartMode_Privileged) @06f5a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FLEXCAN0_INIT/2 (118111601 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Config0/8 (FlexCAN_Config0) @06f57948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: FLEXCAN0_INIT/2 (addr)FLEXCAN0_INIT/2 (addr)
  Availability: not_available
  Varpool flags: read-only
FlexCAN_State0/7 (FlexCAN_State0) @06f57900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: FLEXCAN0_INIT/2 (addr)FLEXCAN0_INIT/2 (addr)
  Availability: not_available
  Varpool flags:
FlexCAN_Ip_Init_Privileged/6 (FlexCAN_Ip_Init_Privileged) @06f5a620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FLEXCAN0_INIT/2 (955630223 (estimated locally),8.09 per call) FLEXCAN0_INIT/2 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Flexcan0_callback/5 (Flexcan0_callback) @06f5a1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: rxData/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Ip_Receive/11 (1073741824 (estimated locally),1.00 per call) FLEXCAN0_SEND/4 (1073741824 (estimated locally),1.00 per call) 
FLEXCAN0_SEND/4 (FLEXCAN0_SEND) @06f55ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Flexcan0_callback/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: FlexCAN_Ip_Send/12 (1073741824 (estimated locally),1.00 per call) 
FLEXCAN0_RX_INIT/3 (FLEXCAN0_RX_INIT) @06f55c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Ip_Receive/11 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxMb/10 (1073741824 (estimated locally),1.00 per call) 
FLEXCAN0_INIT/2 (FLEXCAN0_INIT) @06f559a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: FlexCAN_State0/7 (addr)FlexCAN_Config0/8 (addr)FlexCAN_State0/7 (addr)FlexCAN_Config0/8 (addr)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Ip_SetStartMode_Privileged/9 (118111601 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/6 (955630223 (estimated locally),8.09 per call) FlexCAN_Ip_Init_Privileged/6 (118111600 (estimated locally),1.00 per call) 
rxData/1 (rxData) @06f571f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Flexcan0_callback/5 (addr)
  Availability: available
  Varpool flags:

;; Function FLEXCAN0_INIT (FLEXCAN0_INIT, funcdef_no=1, decl_uid=6581, cgraph_uid=2, symbol_order=2)

Modification phase of node FLEXCAN0_INIT/2
FLEXCAN0_INIT ()
{
  Flexcan_Ip_StatusType state;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  state_5 = FlexCAN_Ip_Init_Privileged (0, &FlexCAN_State0, &FlexCAN_Config0);
  # DEBUG state => state_5
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  state_8 = FlexCAN_Ip_Init_Privileged (0, &FlexCAN_State0, &FlexCAN_Config0);
  # DEBUG state => state_8

  <bb 4> [local count: 1073741824]:
  # state_1 = PHI <state_5(2), state_8(3)>
  # DEBUG state => state_1
  # DEBUG BEGIN_STMT
  if (state_1 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_SetStartMode_Privileged (0);
  return;

}



;; Function FLEXCAN0_RX_INIT (FLEXCAN0_RX_INIT, funcdef_no=2, decl_uid=6588, cgraph_uid=3, symbol_order=3)

Modification phase of node FLEXCAN0_RX_INIT/3
FLEXCAN0_RX_INIT ()
{
  struct Flexcan_Ip_MsgBuffType rxData;
  struct Flexcan_Ip_DataInfoType rx_info;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  rx_info = {};
  rx_info.data_length = 8;
  rx_info.is_polling = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_ConfigRxMb (0, 1, &rx_info, 20);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Receive (0, 1, &rxData, 0);
  rx_info ={v} {CLOBBER};
  rxData ={v} {CLOBBER};
  return;

}



;; Function FLEXCAN0_SEND (FLEXCAN0_SEND, funcdef_no=3, decl_uid=6593, cgraph_uid=4, symbol_order=4)

Modification phase of node FLEXCAN0_SEND/4
FLEXCAN0_SEND ()
{
  uint8 TXData[8];
  struct Flexcan_Ip_DataInfoType rx_info;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  rx_info = {};
  rx_info.data_length = 8;
  rx_info.is_polling = 1;
  # DEBUG BEGIN_STMT
  TXData = "\x01\x02\x03\x04\x05\x06\x07";
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Send (0, 0, &rx_info, 20, &TXData);
  rx_info ={v} {CLOBBER};
  TXData ={v} {CLOBBER};
  return;

}



;; Function Flexcan0_callback (Flexcan0_callback, funcdef_no=4, decl_uid=6601, cgraph_uid=5, symbol_order=5)

Modification phase of node Flexcan0_callback/5
Flexcan0_callback (uint8 instance, Flexcan_Ip_EventType eventType, uint32 buffIdx, const struct Flexcan_Ip_StateType * flexcanState)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => rxData.msgId
  # DEBUG a => (int) D#2
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => rxData.dataLen
  # DEBUG b => (int) D#1
  # DEBUG BEGIN_STMT
  FLEXCAN0_SEND ();
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Receive (0, 1, &rxData, 0);
  return;

}


