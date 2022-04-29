
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/6:
  Jump functions of caller  CAN0_ORED_0_15_MB_IRQHandler/5:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/4:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/3:
  Jump functions of caller  FlexCan_Callback/2:
  Jump functions of caller  FLEXCAN_INIT/1:

 Propagating constants:

Not considering FlexCan_Callback for cloning; -fipa-cp-clone disabled.
Not considering FLEXCAN_INIT for cloning; -fipa-cp-clone disabled.

overall_size: 15, max_new_size: 11001
 - context independent values, size: 2, time_benefit: 4.000000

IPA lattices after all propagation:

Lattices:
  Node: FlexCan_Callback/2:
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
  Node: FLEXCAN_INIT/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCAN_Config0/8 (FlexCAN_Config0) @06ede5e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: FLEXCAN_INIT/1 (addr)
  Availability: not_available
  Varpool flags: read-only
FlexCAN_State0/7 (FlexCAN_State0) @06ede5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: FLEXCAN_INIT/1 (addr)
  Availability: not_available
  Varpool flags:
FlexCAN_Ip_Init_Privileged/6 (FlexCAN_Ip_Init_Privileged) @06ee12a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FLEXCAN_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CAN0_ORED_0_15_MB_IRQHandler/5 (CAN0_ORED_0_15_MB_IRQHandler) @06ee11c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: FLEXCAN_INIT/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/4 (IntCtrl_Ip_InstallHandler) @06ee10e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FLEXCAN_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/3 (IntCtrl_Ip_EnableIrq) @06ee1000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FLEXCAN_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCan_Callback/2 (FlexCan_Callback) @06edcb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 
FLEXCAN_INIT/1 (FLEXCAN_INIT) @06edc8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CAN0_ORED_0_15_MB_IRQHandler/5 (addr)FlexCAN_State0/7 (addr)FlexCAN_Config0/8 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Ip_Init_Privileged/6 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/4 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/3 (1073741824 (estimated locally),1.00 per call) 

;; Function FLEXCAN_INIT (FLEXCAN_INIT, funcdef_no=1, decl_uid=6582, cgraph_uid=2, symbol_order=1)

Modification phase of node FLEXCAN_INIT/1
FLEXCAN_INIT ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrq (81);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (81, CAN0_ORED_0_15_MB_IRQHandler, 0B);
  # DEBUG BEGIN_STMT
  # DEBUG rx_info$data_length => 8
  # DEBUG rx_info$is_polling => 1
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Init_Privileged (0, &FlexCAN_State0, &FlexCAN_Config0);
  return;

}



;; Function FlexCan_Callback (FlexCan_Callback, funcdef_no=2, decl_uid=6589, cgraph_uid=3, symbol_order=2) (executed once)

Modification phase of node FlexCan_Callback/2
FlexCan_Callback (uint8 instance, Flexcan_Ip_EventType eventType, uint32 buffIdx, const struct Flexcan_Ip_StateType * flexcanState)
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


