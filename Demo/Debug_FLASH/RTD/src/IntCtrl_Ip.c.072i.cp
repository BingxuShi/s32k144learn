
IPA constant propagation start:
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  instance pointer: pfNewHandler_3(D)  Outer instance pointer: pfNewHandler_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  instance pointer: pfOldHandler_4(D)  Outer instance pointer: pfOldHandler_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (_7, _8, 0B);
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (_7, _8, 0B);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:IntCtrl_Ip_InstallHandlerPrivileged (_7, _8, 0B);
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (_7, _8, 0B);
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (_7, _8, 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:IntCtrl_Ip_InstallHandlerPrivileged (_7, _8, 0B);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  IntCtrl_Ip_GetActive/20:
    callsite  IntCtrl_Ip_GetActive/20 -> IntCtrl_Ip_GetActivePrivileged/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_GetPending/19:
    callsite  IntCtrl_Ip_GetPending/19 -> IntCtrl_Ip_GetPendingPrivileged/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_SetPending/18:
    callsite  IntCtrl_Ip_SetPending/18 -> IntCtrl_Ip_SetPendingPrivileged/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_ClearPending/17:
    callsite  IntCtrl_Ip_ClearPending/17 -> IntCtrl_Ip_ClearPendingPrivileged/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_GetPriority/16:
    callsite  IntCtrl_Ip_GetPriority/16 -> IntCtrl_Ip_GetPriorityPrivileged/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_SetPriority/15:
    callsite  IntCtrl_Ip_SetPriority/15 -> IntCtrl_Ip_SetPriorityPrivileged/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_DisableIrq/14:
    callsite  IntCtrl_Ip_DisableIrq/14 -> IntCtrl_Ip_DisableIrqPrivileged/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_EnableIrq/13:
    callsite  IntCtrl_Ip_EnableIrq/13 -> IntCtrl_Ip_EnableIrqPrivileged/2 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_InstallHandler/12:
    callsite  IntCtrl_Ip_InstallHandler/12 -> IntCtrl_Ip_InstallHandlerPrivileged/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_ConfigIrqRouting/11:
    callsite  IntCtrl_Ip_ConfigIrqRouting/11 -> IntCtrl_Ip_InstallHandlerPrivileged/1 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_Init/10:
    callsite  IntCtrl_Ip_Init/10 -> IntCtrl_Ip_DisableIrqPrivileged/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  IntCtrl_Ip_Init/10 -> IntCtrl_Ip_EnableIrqPrivileged/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  IntCtrl_Ip_Init/10 -> IntCtrl_Ip_SetPriorityPrivileged/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_GetActivePrivileged/9:
  Jump functions of caller  IntCtrl_Ip_GetPendingPrivileged/8:
  Jump functions of caller  IntCtrl_Ip_SetPendingPrivileged/7:
  Jump functions of caller  IntCtrl_Ip_ClearPendingPrivileged/6:
  Jump functions of caller  IntCtrl_Ip_GetPriorityPrivileged/5:
  Jump functions of caller  IntCtrl_Ip_SetPriorityPrivileged/4:
  Jump functions of caller  IntCtrl_Ip_DisableIrqPrivileged/3:
  Jump functions of caller  IntCtrl_Ip_EnableIrqPrivileged/2:
  Jump functions of caller  IntCtrl_Ip_InstallHandlerPrivileged/1:

 Propagating constants:

Not considering IntCtrl_Ip_GetActive for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_GetPending for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_SetPending for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_ClearPending for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_GetPriority for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_SetPriority for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_DisableIrq for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_EnableIrq for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_InstallHandler for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_ConfigIrqRouting for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_Init for cloning; -fipa-cp-clone disabled.

overall_size: 287, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: IntCtrl_Ip_GetActive/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_GetPending/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_SetPending/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_ClearPending/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_GetPriority/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_SetPriority/15:
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
  Node: IntCtrl_Ip_DisableIrq/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_EnableIrq/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_InstallHandler/12:
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
  Node: IntCtrl_Ip_ConfigIrqRouting/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_Init/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_GetActivePrivileged/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_GetPendingPrivileged/8:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_SetPendingPrivileged/7:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_ClearPendingPrivileged/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_GetPriorityPrivileged/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_SetPriorityPrivileged/4:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_DisableIrqPrivileged/3:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_EnableIrqPrivileged/2:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: IntCtrl_Ip_InstallHandlerPrivileged/1:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
               0B [loc_time: 1, loc_size: 28, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

__INT_SRAM_START/21 (__INT_SRAM_START) @06289318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: IntCtrl_Ip_InstallHandlerPrivileged/1 (addr)
  Availability: not_available
  Varpool flags:
IntCtrl_Ip_GetActive/20 (IntCtrl_Ip_GetActive) @0624fc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_GetActivePrivileged/9 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_GetPending/19 (IntCtrl_Ip_GetPending) @0624f9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_GetPendingPrivileged/8 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_SetPending/18 (IntCtrl_Ip_SetPending) @0624f700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_SetPendingPrivileged/7 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_ClearPending/17 (IntCtrl_Ip_ClearPending) @0624f460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_ClearPendingPrivileged/6 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_GetPriority/16 (IntCtrl_Ip_GetPriority) @0624f1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_GetPriorityPrivileged/5 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_SetPriority/15 (IntCtrl_Ip_SetPriority) @06248ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_SetPriorityPrivileged/4 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_DisableIrq/14 (IntCtrl_Ip_DisableIrq) @062488c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_DisableIrqPrivileged/3 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_EnableIrq/13 (IntCtrl_Ip_EnableIrq) @06248380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_EnableIrqPrivileged/2 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_InstallHandler/12 (IntCtrl_Ip_InstallHandler) @06248e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_InstallHandlerPrivileged/1 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_ConfigIrqRouting/11 (IntCtrl_Ip_ConfigIrqRouting) @06248a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_InstallHandlerPrivileged/1 (434377 (estimated locally),2.02 per call) 
IntCtrl_Ip_Init/10 (IntCtrl_Ip_Init) @062487e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_DisableIrqPrivileged/3 (217188 (estimated locally),1.01 per call) IntCtrl_Ip_EnableIrqPrivileged/2 (217188 (estimated locally),1.01 per call) IntCtrl_Ip_SetPriorityPrivileged/4 (434377 (estimated locally),2.02 per call) 
IntCtrl_Ip_GetActivePrivileged/9 (IntCtrl_Ip_GetActivePrivileged) @06248540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_GetActive/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_GetPendingPrivileged/8 (IntCtrl_Ip_GetPendingPrivileged) @062482a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_GetPending/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_SetPendingPrivileged/7 (IntCtrl_Ip_SetPendingPrivileged) @06248000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_SetPending/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_ClearPendingPrivileged/6 (IntCtrl_Ip_ClearPendingPrivileged) @061f7c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_ClearPending/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_GetPriorityPrivileged/5 (IntCtrl_Ip_GetPriorityPrivileged) @061f7700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_GetPriority/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_SetPriorityPrivileged/4 (IntCtrl_Ip_SetPriorityPrivileged) @061f7e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_Init/10 (434377 (estimated locally),2.02 per call) IntCtrl_Ip_SetPriority/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_DisableIrqPrivileged/3 (IntCtrl_Ip_DisableIrqPrivileged) @061f7b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_Init/10 (217188 (estimated locally),1.01 per call) IntCtrl_Ip_DisableIrq/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrqPrivileged/2 (IntCtrl_Ip_EnableIrqPrivileged) @061f78c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_Init/10 (217188 (estimated locally),1.01 per call) IntCtrl_Ip_EnableIrq/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_InstallHandlerPrivileged/1 (IntCtrl_Ip_InstallHandlerPrivileged) @061f7620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: __INT_SRAM_START/21 (addr)
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_ConfigIrqRouting/11 (434377 (estimated locally),2.02 per call) IntCtrl_Ip_InstallHandler/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function IntCtrl_Ip_InstallHandlerPrivileged (IntCtrl_Ip_InstallHandlerPrivileged, funcdef_no=1, decl_uid=6247, cgraph_uid=2, symbol_order=1)

Modification phase of node IntCtrl_Ip_InstallHandlerPrivileged/1
IntCtrl_Ip_InstallHandlerPrivileged (IRQn_Type eIrqNumber, void (*IntCtrl_Ip_IrqHandlerType) (void) pfNewHandler, void (*IntCtrl_Ip_IrqHandlerType) (void) * const pfOldHandler)
{
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  uint32 * pVectorRam;
  _Bool _1;
  _Bool _2;
  long unsigned int _3;
  long unsigned int __INT_SRAM_START.1_4;
  _Bool _5;
  long unsigned int _6;
  sizetype eIrqNumber.2_7;
  sizetype _8;
  sizetype _9;
  uint32 * _10;
  long unsigned int _11;
  void (*<T5e1>) (void) _12;
  sizetype eIrqNumber.3_13;
  sizetype _14;
  sizetype _15;
  uint32 * _16;
  long unsigned int pfNewHandler.4_17;
  _Bool x.0_30;
  _Bool x.0_31;
  _Bool x.0_32;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  # DEBUG dev_irqNumber => eIrqNumber_19(D)
  # DEBUG BEGIN_STMT
  _1 = eIrqNumber_19(D) >= 0;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_32 ={v} x;
  if (x.0_32 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = eIrqNumber_19(D) <= 122;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_31 ={v} x;
  if (x.0_31 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 12> [local count: 53687]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 53687]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct S32_SCB_Type *)3758153728B].VTOR;
  __INT_SRAM_START.1_4 = (long unsigned int) &__INT_SRAM_START;
  _5 = _3 >= __INT_SRAM_START.1_4;
  x ={v} _5;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_30 ={v} x;
  if (x.0_30 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 26844]:

  <bb 7> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 268435456]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 26844]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct S32_SCB_Type *)3758153728B].VTOR;
  pVectorRam_21 = (uint32 *) _6;
  # DEBUG pVectorRam => pVectorRam_21
  # DEBUG BEGIN_STMT
  if (pfOldHandler_22(D) != 0B)
    goto <bb 9>; [70.00%]
  else
    goto <bb 10>; [30.00%]

  <bb 9> [local count: 18790]:
  # DEBUG BEGIN_STMT
  eIrqNumber.2_7 = (sizetype) eIrqNumber_19(D);
  _8 = eIrqNumber.2_7 + 16;
  _9 = _8 * 4;
  _10 = pVectorRam_21 + _9;
  _11 = *_10;
  _12 = (void (*<T5e1>) (void)) _11;
  *pfOldHandler_22(D) = _12;

  <bb 10> [local count: 26844]:
  # DEBUG BEGIN_STMT
  eIrqNumber.3_13 = (sizetype) eIrqNumber_19(D);
  _14 = eIrqNumber.3_13 + 16;
  _15 = _14 * 4;
  _16 = pVectorRam_21 + _15;
  pfNewHandler.4_17 = (long unsigned int) pfNewHandler_24(D);
  *_16 = pfNewHandler.4_17;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function IntCtrl_Ip_EnableIrqPrivileged (IntCtrl_Ip_EnableIrqPrivileged, funcdef_no=2, decl_uid=6249, cgraph_uid=3, symbol_order=2)

Modification phase of node IntCtrl_Ip_EnableIrqPrivileged/2
IntCtrl_Ip_EnableIrqPrivileged (IRQn_Type eIrqNumber)
{
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  _Bool _2;
  long unsigned int eIrqNumber.5_3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  _Bool x.0_10;
  _Bool x.0_11;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  _1 = eIrqNumber_7(D) >= 0;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_11 ={v} x;
  if (x.0_11 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = eIrqNumber_7(D) <= 122;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_10 ={v} x;
  if (x.0_10 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 53687]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 53687]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  eIrqNumber.5_3 = (long unsigned int) eIrqNumber_7(D);
  _4 = eIrqNumber.5_3 & 31;
  _5 = eIrqNumber.5_3 >> 5;
  _6 = 1 << _4;
  MEM[(struct S32_NVIC_Type *)3758153984B].ISER[_5] ={v} _6;
  return;

}



;; Function IntCtrl_Ip_DisableIrqPrivileged (IntCtrl_Ip_DisableIrqPrivileged, funcdef_no=3, decl_uid=6251, cgraph_uid=4, symbol_order=3)

Modification phase of node IntCtrl_Ip_DisableIrqPrivileged/3
IntCtrl_Ip_DisableIrqPrivileged (IRQn_Type eIrqNumber)
{
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  _Bool _2;
  long unsigned int eIrqNumber.7_3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  _Bool x.0_10;
  _Bool x.0_11;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  _1 = eIrqNumber_7(D) >= 0;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_11 ={v} x;
  if (x.0_11 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = eIrqNumber_7(D) <= 122;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_10 ={v} x;
  if (x.0_10 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 53687]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 53687]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  eIrqNumber.7_3 = (long unsigned int) eIrqNumber_7(D);
  _4 = eIrqNumber.7_3 & 31;
  _5 = eIrqNumber.7_3 >> 5;
  _6 = 1 << _4;
  MEM[(struct S32_NVIC_Type *)3758153984B].ICER[_5] ={v} _6;
  return;

}



;; Function IntCtrl_Ip_SetPriorityPrivileged (IntCtrl_Ip_SetPriorityPrivileged, funcdef_no=4, decl_uid=6254, cgraph_uid=5, symbol_order=4)

Modification phase of node IntCtrl_Ip_SetPriorityPrivileged/4
IntCtrl_Ip_SetPriorityPrivileged (IRQn_Type eIrqNumber, uint8 u8Priority)
{
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  _Bool _2;
  _Bool _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int eIrqNumber.9_6;
  unsigned char _7;
  _Bool x.0_12;
  _Bool x.0_13;
  _Bool x.0_14;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  _1 = eIrqNumber_8(D) >= 0;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_14 ={v} x;
  if (x.0_14 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = eIrqNumber_8(D) <= 122;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_13 ={v} x;
  if (x.0_13 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 53687]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 53687]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _3 = u8Priority_10(D) <= 15;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_12 ={v} x;
  if (x.0_12 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 26844]:

  <bb 7> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 268435456]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 26844]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  # DEBUG shift => 4
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) u8Priority_10(D);
  _5 = _4 << 4;
  eIrqNumber.9_6 = (long unsigned int) eIrqNumber_8(D);
  _7 = (unsigned char) _5;
  MEM[(struct S32_NVIC_Type *)3758153984B].IP[eIrqNumber.9_6] ={v} _7;
  return;

}



;; Function IntCtrl_Ip_Init (IntCtrl_Ip_Init, funcdef_no=10, decl_uid=6213, cgraph_uid=11, symbol_order=10)

Modification phase of node IntCtrl_Ip_Init/10
IntCtrl_Ip_Init (const struct IntCtrl_Ip_CtrlConfigType * pIntCtrlCtrlConfig)
{
  volatile boolean x;
  volatile boolean x;
  uint32 irqIdx;
  _Bool _1;
  long unsigned int _2;
  _Bool _3;
  const struct IntCtrl_Ip_IrqConfigType * _4;
  long unsigned int _5;
  const struct IntCtrl_Ip_IrqConfigType * _6;
  <unnamed type> _7;
  unsigned char _8;
  const struct IntCtrl_Ip_IrqConfigType * _9;
  const struct IntCtrl_Ip_IrqConfigType * _10;
  _Bool _11;
  <unnamed type> _12;
  <unnamed type> _13;
  long unsigned int _14;
  _Bool x.0_21;
  _Bool x.0_22;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  _1 = pIntCtrlCtrlConfig_18(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_22 ={v} x;
  if (x.0_22 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pIntCtrlCtrlConfig_18(D)->u32ConfigIrqCount;
  _3 = _2 <= 89;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_21 ={v} x;
  if (x.0_21 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 53687]:
  goto <bb 5>; [100.00%]

  <bb 12> [local count: 53687]:
  goto <bb 10>; [100.00%]

  <bb 15> [local count: 536870913]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 6> [local count: 434377]:
  # DEBUG BEGIN_STMT
  _4 = pIntCtrlCtrlConfig_18(D)->aIrqConfig;
  _5 = irqIdx_15 * 8;
  _6 = _4 + _5;
  _7 = _6->eIrqNumber;
  _8 = _6->u8IrqPriority;
  # DEBUG eIrqNumber => _7
  # DEBUG u8Priority => _8
  # DEBUG INLINE_ENTRY IntCtrl_Ip_SetPriority
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_SetPriorityPrivileged (_7, _8);
  # DEBUG eIrqNumber => NULL
  # DEBUG u8Priority => NULL
  # DEBUG BEGIN_STMT
  _9 = pIntCtrlCtrlConfig_18(D)->aIrqConfig;
  _10 = _9 + _5;
  _11 = _10->bIrqEnabled;
  if (_11 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 217188]:
  # DEBUG BEGIN_STMT
  _12 = _10->eIrqNumber;
  # DEBUG eIrqNumber => _12
  # DEBUG INLINE_ENTRY IntCtrl_Ip_EnableIrq
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrqPrivileged (_12);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 217188]:
  # DEBUG BEGIN_STMT
  _13 = _10->eIrqNumber;
  # DEBUG eIrqNumber => _13
  # DEBUG INLINE_ENTRY IntCtrl_Ip_DisableIrq
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_DisableIrqPrivileged (_13);

  <bb 9> [local count: 434377]:
  # DEBUG eIrqNumber => NULL
  # DEBUG eIrqNumber => NULL
  # DEBUG BEGIN_STMT
  irqIdx_20 = irqIdx_15 + 1;
  # DEBUG irqIdx => irqIdx_20

  <bb 10> [local count: 488064]:
  # irqIdx_15 = PHI <irqIdx_20(9), 0(12)>
  # DEBUG x => NULL
  # DEBUG irqIdx => irqIdx_15
  # DEBUG BEGIN_STMT
  _14 = pIntCtrlCtrlConfig_18(D)->u32ConfigIrqCount;
  if (_14 > irqIdx_15)
    goto <bb 6>; [89.00%]
  else
    goto <bb 11>; [11.00%]

  <bb 11> [local count: 53687]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function IntCtrl_Ip_ConfigIrqRouting (IntCtrl_Ip_ConfigIrqRouting, funcdef_no=11, decl_uid=6215, cgraph_uid=12, symbol_order=11)

Modification phase of node IntCtrl_Ip_ConfigIrqRouting/11
IntCtrl_Ip_ConfigIrqRouting (const struct IntCtrl_Ip_GlobalRouteConfigType * routeConfig)
{
  volatile boolean x;
  volatile boolean x;
  uint32 irqIdx;
  _Bool _1;
  long unsigned int _2;
  _Bool _3;
  const struct IntCtrl_Ip_IrqRouteConfigType * _4;
  long unsigned int _5;
  const struct IntCtrl_Ip_IrqRouteConfigType * _6;
  <unnamed type> _7;
  void (*<T5e1>) (void) _8;
  long unsigned int _9;
  _Bool x.0_15;
  _Bool x.0_16;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  _1 = routeConfig_12(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_16 ={v} x;
  if (x.0_16 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = routeConfig_12(D)->u32ConfigIrqCount;
  _3 = _2 <= 89;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_15 ={v} x;
  if (x.0_15 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 53687]:
  goto <bb 5>; [100.00%]

  <bb 9> [local count: 53687]:
  goto <bb 7>; [100.00%]

  <bb 12> [local count: 536870913]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 434377]:
  # DEBUG BEGIN_STMT
  _4 = routeConfig_12(D)->aIrqConfig;
  _5 = irqIdx_10 * 12;
  _6 = _4 + _5;
  _7 = _6->eIrqNumber;
  _8 = _6->pfHandler;
  # DEBUG eIrqNumber => _7
  # DEBUG pfNewHandler => _8
  # DEBUG pfOldHandler => 0B
  # DEBUG INLINE_ENTRY IntCtrl_Ip_InstallHandler
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandlerPrivileged (_7, _8, 0B);
  # DEBUG eIrqNumber => NULL
  # DEBUG pfNewHandler => NULL
  # DEBUG pfOldHandler => NULL
  # DEBUG BEGIN_STMT
  irqIdx_14 = irqIdx_10 + 1;
  # DEBUG irqIdx => irqIdx_14

  <bb 7> [local count: 488064]:
  # irqIdx_10 = PHI <irqIdx_14(6), 0(9)>
  # DEBUG x => NULL
  # DEBUG irqIdx => irqIdx_10
  # DEBUG BEGIN_STMT
  _9 = routeConfig_12(D)->u32ConfigIrqCount;
  if (_9 > irqIdx_10)
    goto <bb 6>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 53687]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function IntCtrl_Ip_InstallHandler (IntCtrl_Ip_InstallHandler, funcdef_no=12, decl_uid=6219, cgraph_uid=13, symbol_order=12)

Modification phase of node IntCtrl_Ip_InstallHandler/12
IntCtrl_Ip_InstallHandler (IRQn_Type eIrqNumber, void (*IntCtrl_Ip_IrqHandlerType) (void) pfNewHandler, void (*IntCtrl_Ip_IrqHandlerType) (void) * const pfOldHandler)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  return;

}



;; Function IntCtrl_Ip_EnableIrq (IntCtrl_Ip_EnableIrq, funcdef_no=13, decl_uid=6221, cgraph_uid=14, symbol_order=13)

Modification phase of node IntCtrl_Ip_EnableIrq/13
IntCtrl_Ip_EnableIrq (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrqPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_DisableIrq (IntCtrl_Ip_DisableIrq, funcdef_no=14, decl_uid=6223, cgraph_uid=15, symbol_order=14)

Modification phase of node IntCtrl_Ip_DisableIrq/14
IntCtrl_Ip_DisableIrq (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_DisableIrqPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_SetPriority (IntCtrl_Ip_SetPriority, funcdef_no=15, decl_uid=6226, cgraph_uid=16, symbol_order=15)

Modification phase of node IntCtrl_Ip_SetPriority/15
IntCtrl_Ip_SetPriority (IRQn_Type eIrqNumber, uint8 u8Priority)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_SetPriorityPrivileged (eIrqNumber_2(D), u8Priority_3(D));
  return;

}



;; Function IntCtrl_Ip_GetPriority (IntCtrl_Ip_GetPriority, funcdef_no=16, decl_uid=6228, cgraph_uid=17, symbol_order=16)

Modification phase of node IntCtrl_Ip_GetPriority/16
IntCtrl_Ip_GetPriority (IRQn_Type eIrqNumber)
{
  uint8 _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = IntCtrl_Ip_GetPriorityPrivileged (eIrqNumber_2(D));
  return _4;

}



;; Function IntCtrl_Ip_ClearPending (IntCtrl_Ip_ClearPending, funcdef_no=17, decl_uid=6230, cgraph_uid=18, symbol_order=17)

Modification phase of node IntCtrl_Ip_ClearPending/17
IntCtrl_Ip_ClearPending (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_ClearPendingPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_SetPending (IntCtrl_Ip_SetPending, funcdef_no=18, decl_uid=6232, cgraph_uid=19, symbol_order=18)

Modification phase of node IntCtrl_Ip_SetPending/18
IntCtrl_Ip_SetPending (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_SetPendingPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_GetPending (IntCtrl_Ip_GetPending, funcdef_no=19, decl_uid=6234, cgraph_uid=20, symbol_order=19)

Modification phase of node IntCtrl_Ip_GetPending/19
IntCtrl_Ip_GetPending (IRQn_Type eIrqNumber)
{
  boolean _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = IntCtrl_Ip_GetPendingPrivileged (eIrqNumber_2(D));
  return _4;

}



;; Function IntCtrl_Ip_GetActive (IntCtrl_Ip_GetActive, funcdef_no=20, decl_uid=6236, cgraph_uid=21, symbol_order=20)

Modification phase of node IntCtrl_Ip_GetActive/20
IntCtrl_Ip_GetActive (IRQn_Type eIrqNumber)
{
  boolean _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = IntCtrl_Ip_GetActivePrivileged (eIrqNumber_2(D));
  return _4;

}


