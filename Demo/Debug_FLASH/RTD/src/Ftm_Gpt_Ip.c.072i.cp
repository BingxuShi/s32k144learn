
IPA constant propagation start:
Determining dynamic type for call: Ftm_Gpt_Ip_Configure (_3, _4, _5);
  Starting walk at: Ftm_Gpt_Ip_Configure (_3, _4, _5);
  instance pointer: _3  Outer instance pointer: _3 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_24/44:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_24/43:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_26/42:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_26/41:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_22/40:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_22/39:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_23/38:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_23/37:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_25/36:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_25/35:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_17/34:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_17/33:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_21/32:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_21/31:
  Jump functions of caller  FTM_0_CH_0_CH_1_ISR/30:
    callsite  FTM_0_CH_0_CH_1_ISR/30 -> Ftm_Gpt_Ip_ProcessCommonInterrupt/20 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
  Jump functions of caller  Ftm_Gpt_Ip_SetHalfCycleReloadPoint/29:
  Jump functions of caller  Ftm_Gpt_Ip_DisableChannelInterrupt/28:
    callsite  Ftm_Gpt_Ip_DisableChannelInterrupt/28 -> Ftm_Gpt_Ip_ClearInterruptFlag/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Ftm_Gpt_Ip_DisableChannelInterrupt/28 -> Ftm_Gpt_Ip_EnableInterrupt/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Ftm_Gpt_Ip_EnableChannelInterrupt/27:
    callsite  Ftm_Gpt_Ip_EnableChannelInterrupt/27 -> Ftm_Gpt_Ip_EnableInterrupt/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Ftm_Gpt_Ip_EnableChannelInterrupt/27 -> Ftm_Gpt_Ip_ClearInterruptFlag/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Ftm_Gpt_Ip_StopTimer/26:
    callsite  Ftm_Gpt_Ip_StopTimer/26 -> Ftm_Gpt_Ip_SetClockSource/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Ftm_Gpt_Ip_StopTimer/26 -> Ftm_Gpt_Ip_FTMEnable/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Ftm_Gpt_Ip_StartTimer/25:
    callsite  Ftm_Gpt_Ip_StartTimer/25 -> Ftm_Gpt_Ip_FTMEnable/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Ftm_Gpt_Ip_StartTimer/25 -> Ftm_Gpt_Ip_SetClockSource/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Ftm_Gpt_Ip_StartCounting/24:
    callsite  Ftm_Gpt_Ip_StartCounting/24 -> Ftm_Gpt_Ip_EnableInterrupt/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Ftm_Gpt_Ip_StartCounting/24 -> Ftm_Gpt_Ip_ClearInterruptFlag/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Ftm_Gpt_Ip_Deinit/23:
    callsite  Ftm_Gpt_Ip_Deinit/23 -> Ftm_Gpt_Ip_SetFreezebit/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Ftm_Gpt_Ip_Deinit/23 -> Ftm_Gpt_Ip_FTMEnable/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Ftm_Gpt_Ip_Deinit/23 -> Ftm_Gpt_Ip_SetClockSource/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Ftm_Gpt_Ip_Deinit/23 -> Ftm_Gpt_Ip_ClearInterruptFlag/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [0, 8]
    callsite  Ftm_Gpt_Ip_Deinit/23 -> Ftm_Gpt_Ip_EnableInterrupt/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [0, 8]
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Ftm_Gpt_Ip_InitChannel/22:
    callsite  Ftm_Gpt_Ip_InitChannel/22 -> Ftm_Gpt_Ip_ModeSelectA/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Ftm_Gpt_Ip_InitChannel/22 -> Ftm_Gpt_Ip_ClearInterruptFlag/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Ftm_Gpt_Ip_InitChannel/22 -> Ftm_Gpt_Ip_EnableInterrupt/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Ftm_Gpt_Ip_Init/21:
    callsite  Ftm_Gpt_Ip_Init/21 -> Ftm_Gpt_Ip_FTMEnable/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Ftm_Gpt_Ip_Init/21 -> Ftm_Gpt_Ip_SetFreezebit/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Ftm_Gpt_Ip_Init/21 -> Ftm_Gpt_Ip_Configure/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Ftm_Gpt_Ip_ProcessCommonInterrupt/20:
    callsite  Ftm_Gpt_Ip_ProcessCommonInterrupt/20 -> Ftm_Gpt_Ip_ClearInterruptFlag/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (_5);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Ftm_Gpt_Ip_GetInterruptBit/19:
  Jump functions of caller  Ftm_Gpt_Ip_GetInterruptFlag/18:
  Jump functions of caller  Ftm_Gpt_Ip_GetCompareValue/17:
  Jump functions of caller  Ftm_Gpt_Ip_ModeSelectA/15:
  Jump functions of caller  Ftm_Gpt_Ip_GetCounter/13:
  Jump functions of caller  Ftm_Gpt_Ip_FTMEnable/10:
  Jump functions of caller  Ftm_Gpt_Ip_SetClockSource/9:
  Jump functions of caller  Ftm_Gpt_Ip_EnableInterrupt/8:
  Jump functions of caller  Ftm_Gpt_Ip_ClearInterruptFlag/7:
  Jump functions of caller  Ftm_Gpt_Ip_Configure/4:
  Jump functions of caller  Ftm_Gpt_Ip_SetFreezebit/3:

 Propagating constants:

Not considering FTM_0_CH_0_CH_1_ISR for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_SetHalfCycleReloadPoint for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_DisableChannelInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_EnableChannelInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_StopTimer for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_StartTimer for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_StartCounting for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_Deinit for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_InitChannel for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_Init for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_GetInterruptBit for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_GetInterruptFlag for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_GetCompareValue for cloning; -fipa-cp-clone disabled.
Not considering Ftm_Gpt_Ip_GetCounter for cloning; -fipa-cp-clone disabled.

overall_size: 305, max_new_size: 11001
 - context independent values, size: 36, time_benefit: 49.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 8, time_benefit: 3.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: FTM_0_CH_0_CH_1_ISR/30:
  Node: Ftm_Gpt_Ip_SetHalfCycleReloadPoint/29:
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
  Node: Ftm_Gpt_Ip_DisableChannelInterrupt/28:
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
  Node: Ftm_Gpt_Ip_EnableChannelInterrupt/27:
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
  Node: Ftm_Gpt_Ip_StopTimer/26:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Ftm_Gpt_Ip_StartTimer/25:
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
  Node: Ftm_Gpt_Ip_StartCounting/24:
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
  Node: Ftm_Gpt_Ip_Deinit/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Ftm_Gpt_Ip_InitChannel/22:
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
  Node: Ftm_Gpt_Ip_Init/21:
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
  Node: Ftm_Gpt_Ip_ProcessCommonInterrupt/20:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         uint8 [0, 2]
        AGGS VARIABLE
  Node: Ftm_Gpt_Ip_GetInterruptBit/19:
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
  Node: Ftm_Gpt_Ip_GetInterruptFlag/18:
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
  Node: Ftm_Gpt_Ip_GetCompareValue/17:
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
  Node: Ftm_Gpt_Ip_ModeSelectA/15:
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
    param [2]: 1 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x0
         boolean [1, 1]
        AGGS VARIABLE
  Node: Ftm_Gpt_Ip_GetCounter/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Ftm_Gpt_Ip_FTMEnable/10:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 1 [loc_time: 3, loc_size: 9, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean [0, 1]
        AGGS VARIABLE
  Node: Ftm_Gpt_Ip_SetClockSource/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 1 [loc_time: 3, loc_size: 10, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 10, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         Ftm_Gpt_Ip_ClockSource [0, 1]
        AGGS VARIABLE
  Node: Ftm_Gpt_Ip_EnableInterrupt/8:
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
    param [2]: 1 [loc_time: 3, loc_size: 9, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean [0, 1]
        AGGS VARIABLE
  Node: Ftm_Gpt_Ip_ClearInterruptFlag/7:
    param [0]: VARIABLE
               0 [loc_time: 49, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Ftm_Gpt_Ip_Configure/4:
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
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Ftm_Gpt_Ip_SetFreezebit/3:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               0 [loc_time: 3, loc_size: 12, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Ftm_Gpt_Ip_ProcessCommonInterrupt/20 for all known contexts.
    replacing param #0 instance with const 0
 - Creating a specialized node of Ftm_Gpt_Ip_ModeSelectA/15 for all known contexts.
    replacing param #2 enable with const 1
Propagated bits info for function Ftm_Gpt_Ip_ModeSelectA.constprop/55:
 param 2: value = 0x1, mask = 0x0
Propagated bits info for function Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop/54:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x0, mask = 0x3
Propagated bits info for function Ftm_Gpt_Ip_ProcessCommonInterrupt/20:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x0, mask = 0x3
Propagated bits info for function Ftm_Gpt_Ip_ModeSelectA/15:
 param 2: value = 0x1, mask = 0x0
Propagated bits info for function Ftm_Gpt_Ip_SetClockSource/9:
 param 1: value = 0x0, mask = 0x1

IPA constant propagation end

Reclaiming functions: Ftm_Gpt_Ip_ProcessCommonInterrupt/20 Ftm_Gpt_Ip_ModeSelectA/15
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Ftm_Gpt_Ip_ModeSelectA.constprop.0/55 (Ftm_Gpt_Ip_ModeSelectA.constprop) @06ad8620
  Type: function definition analyzed
  Visibility:
  References: ftmGptBase/1 (read)ftmGptBase/1 (read)
  Referring: 
  Clone of Ftm_Gpt_Ip_ModeSelectA/15
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Ftm_Gpt_Ip_InitChannel/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_26/41 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_26/42 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop.0/54 (Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop) @06adeee0
  Type: function definition analyzed
  Visibility:
  References: ftmGptBase/1 (read)Ftm_Gpt_Ip_u32TargetValue/0 (read)Ftm_Gpt_Ip_u32ChState/2 (read)Ftm_Gpt_Ip_u32ChState/2 (read)Ftm_Gpt_Ip_u32ChState/2 (read)
  Referring: 
  Clone of Ftm_Gpt_Ip_ProcessCommonInterrupt/20
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: FTM_0_CH_0_CH_1_ISR/30 (715863676 (estimated locally),2.00 per call) 
  Calls: Ftm_Gpt_Ip_ClearInterruptFlag/7 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(93952410 (estimated locally),0.09 per call) 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_24/44 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_24) @0653a460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_SetClockSource/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_24/43 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_24) @0653a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_SetClockSource/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_26/42 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_26) @0653a0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_ModeSelectA.constprop/55 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_26/41 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_26) @0653a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_ModeSelectA.constprop/55 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_22/40 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_22) @06af5d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_ClearInterruptFlag/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_22/39 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_22) @06af5c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_ClearInterruptFlag/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_23/38 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_23) @06af5a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_EnableInterrupt/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_23/37 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_23) @06af59a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_EnableInterrupt/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_25/36 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_25) @06af5700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_FTMEnable/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_25/35 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_25) @06af5620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_FTMEnable/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_17/34 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_17) @06af52a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_SetFreezebit/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_17/33 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_17) @06af50e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_SetFreezebit/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_21/32 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_21) @06aec540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_Configure/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_21/31 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_21) @06aec2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm_Gpt_Ip_Configure/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FTM_0_CH_0_CH_1_ISR/30 (FTM_0_CH_0_CH_1_ISR) @06aec700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop/54 (715863676 (estimated locally),2.00 per call) 
Ftm_Gpt_Ip_SetHalfCycleReloadPoint/29 (Ftm_Gpt_Ip_SetHalfCycleReloadPoint) @06aec460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Ftm_Gpt_Ip_DisableChannelInterrupt/28 (Ftm_Gpt_Ip_DisableChannelInterrupt) @06aec1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_ClearInterruptFlag/7 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_EnableInterrupt/8 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_EnableChannelInterrupt/27 (Ftm_Gpt_Ip_EnableChannelInterrupt) @06ae1d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_EnableInterrupt/8 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_ClearInterruptFlag/7 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_StopTimer/26 (Ftm_Gpt_Ip_StopTimer) @06ae17e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_SetClockSource/9 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_FTMEnable/10 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_StartTimer/25 (Ftm_Gpt_Ip_StartTimer) @06ae12a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_FTMEnable/10 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_SetClockSource/9 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_StartCounting/24 (Ftm_Gpt_Ip_StartCounting) @06ae1ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)Ftm_Gpt_Ip_u32TargetValue/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_EnableInterrupt/8 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_ClearInterruptFlag/7 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_Deinit/23 (Ftm_Gpt_Ip_Deinit) @06ae1c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:119292716 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_SetFreezebit/3 (119292717 (estimated locally),1.00 per call) Ftm_Gpt_Ip_FTMEnable/10 (119292717 (estimated locally),1.00 per call) Ftm_Gpt_Ip_SetClockSource/9 (119292717 (estimated locally),1.00 per call) Ftm_Gpt_Ip_ClearInterruptFlag/7 (954449108 (estimated locally),8.00 per call) Ftm_Gpt_Ip_EnableInterrupt/8 (954449108 (estimated locally),8.00 per call) 
Ftm_Gpt_Ip_InitChannel/22 (Ftm_Gpt_Ip_InitChannel) @06ae19a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)Ftm_Gpt_Ip_u32ChState/2 (write)Ftm_Gpt_Ip_u32ChState/2 (write)Ftm_Gpt_Ip_u32ChState/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_ModeSelectA.constprop/55 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_ClearInterruptFlag/7 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_EnableInterrupt/8 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_Init/21 (Ftm_Gpt_Ip_Init) @06ae1700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_FTMEnable/10 (217325345 (estimated locally),0.20 per call) Ftm_Gpt_Ip_SetFreezebit/3 (217325345 (estimated locally),0.20 per call) Ftm_Gpt_Ip_Configure/4 (217325345 (estimated locally),0.20 per call) 
Ftm_Gpt_Ip_ProcessCommonInterrupt/20 (Ftm_Gpt_Ip_ProcessCommonInterrupt) @06ae1460
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Ftm_Gpt_Ip_GetInterruptBit/19 (Ftm_Gpt_Ip_GetInterruptBit) @06ae11c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Ftm_Gpt_Ip_GetInterruptFlag/18 (Ftm_Gpt_Ip_GetInterruptFlag) @06aded20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Ftm_Gpt_Ip_GetCompareValue/17 (Ftm_Gpt_Ip_GetCompareValue) @06ade540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Ftm_Gpt_Ip_ModeSelectA/15 (Ftm_Gpt_Ip_ModeSelectA) @06adec40
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Ftm_Gpt_Ip_GetCounter/13 (Ftm_Gpt_Ip_GetCounter) @06ade700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Ftm_Gpt_Ip_FTMEnable/10 (Ftm_Gpt_Ip_FTMEnable) @06ad8ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ftmGptBase/1 (read)ftmGptBase/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Ftm_Gpt_Ip_StopTimer/26 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_StartTimer/25 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_Deinit/23 (119292717 (estimated locally),1.00 per call) Ftm_Gpt_Ip_Init/21 (217325345 (estimated locally),0.20 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_25/36 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_25/35 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_SetClockSource/9 (Ftm_Gpt_Ip_SetClockSource) @06ad89a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Ftm_Gpt_Ip_StopTimer/26 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_StartTimer/25 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_Deinit/23 (119292717 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_24/44 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_24/43 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_EnableInterrupt/8 (Ftm_Gpt_Ip_EnableInterrupt) @06ad8e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ftmGptBase/1 (read)ftmGptBase/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Ftm_Gpt_Ip_DisableChannelInterrupt/28 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_EnableChannelInterrupt/27 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_StartCounting/24 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_Deinit/23 (954449108 (estimated locally),8.00 per call) Ftm_Gpt_Ip_InitChannel/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_23/38 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_23/37 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_ClearInterruptFlag/7 (Ftm_Gpt_Ip_ClearInterruptFlag) @06ad8b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop/54 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_DisableChannelInterrupt/28 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_EnableChannelInterrupt/27 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_StartCounting/24 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_Deinit/23 (954449108 (estimated locally),8.00 per call) Ftm_Gpt_Ip_InitChannel/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_22/40 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_22/39 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_Configure/4 (Ftm_Gpt_Ip_Configure) @06ad8380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Ftm_Gpt_Ip_Init/21 (217325345 (estimated locally),0.20 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_21/32 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_21/31 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_SetFreezebit/3 (Ftm_Gpt_Ip_SetFreezebit) @069e5e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ftmGptBase/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Ftm_Gpt_Ip_Deinit/23 (119292717 (estimated locally),1.00 per call) Ftm_Gpt_Ip_Init/21 (217325345 (estimated locally),0.20 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_17/34 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_17/33 (1073741824 (estimated locally),1.00 per call) 
Ftm_Gpt_Ip_u32ChState/2 (Ftm_Gpt_Ip_u32ChState) @069e0ee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop.0/54 (read)Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop.0/54 (read)Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop.0/54 (read)Ftm_Gpt_Ip_InitChannel/22 (write)Ftm_Gpt_Ip_InitChannel/22 (write)Ftm_Gpt_Ip_InitChannel/22 (write)
  Availability: available
  Varpool flags: initialized
ftmGptBase/1 (ftmGptBase) @069e0510
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Ftm_Gpt_Ip_Init/21 (read)Ftm_Gpt_Ip_ModeSelectA.constprop.0/55 (read)Ftm_Gpt_Ip_GetCounter/13 (read)Ftm_Gpt_Ip_GetCompareValue/17 (read)Ftm_Gpt_Ip_GetInterruptFlag/18 (read)Ftm_Gpt_Ip_EnableInterrupt/8 (read)Ftm_Gpt_Ip_EnableInterrupt/8 (read)Ftm_Gpt_Ip_SetFreezebit/3 (read)Ftm_Gpt_Ip_ClearInterruptFlag/7 (read)Ftm_Gpt_Ip_StartTimer/25 (read)Ftm_Gpt_Ip_GetInterruptBit/19 (read)Ftm_Gpt_Ip_ModeSelectA.constprop.0/55 (read)Ftm_Gpt_Ip_InitChannel/22 (read)Ftm_Gpt_Ip_FTMEnable/10 (read)Ftm_Gpt_Ip_FTMEnable/10 (read)Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop.0/54 (read)Ftm_Gpt_Ip_Deinit/23 (read)Ftm_Gpt_Ip_StartCounting/24 (read)Ftm_Gpt_Ip_SetClockSource/9 (read)Ftm_Gpt_Ip_SetHalfCycleReloadPoint/29 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Ftm_Gpt_Ip_u32TargetValue/0 (Ftm_Gpt_Ip_u32TargetValue) @069e0480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Ftm_Gpt_Ip_ProcessCommonInterrupt.constprop.0/54 (read)Ftm_Gpt_Ip_StartCounting/24 (write)
  Availability: available
  Varpool flags:

;; Function Ftm_Gpt_Ip_ClearInterruptFlag (Ftm_Gpt_Ip_ClearInterruptFlag, funcdef_no=4, decl_uid=5857, cgraph_uid=5, symbol_order=7)

Modification phase of node Ftm_Gpt_Ip_ClearInterruptFlag/7
Ftm_Gpt_Ip_ClearInterruptFlag (uint8 instance, uint8 channel)
{
  int _1;
  struct FTM_Type * _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_22 ();
  # DEBUG BEGIN_STMT
  _1 = (int) instance_8(D);
  _2 = ftmGptBase[_1];
  _3 = (int) channel_9(D);
  _4 ={v} _2->CONTROLS[_3].CSC;
  _5 = _4 & 4294967167;
  _2->CONTROLS[_3].CSC ={v} _5;
  # DEBUG BEGIN_STMT
  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_22 ();
  return;

}



;; Function Ftm_Gpt_Ip_GetCounter (Ftm_Gpt_Ip_GetCounter, funcdef_no=10, decl_uid=5812, cgraph_uid=11, symbol_order=13)

Modification phase of node Ftm_Gpt_Ip_GetCounter/13
Ftm_Gpt_Ip_GetCounter (uint8 instance)
{
  uint32 currentCntValue;
  int _3;
  struct FTM_Type * _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG currentCounterValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG instance => instance_2(D)
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_GetCntValue
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = (int) instance_2(D);
  _4 = ftmGptBase[_3];
  currentCntValue_5 ={v} _4->CNT;
  # DEBUG currentCntValue => currentCntValue_5
  # DEBUG BEGIN_STMT
  # DEBUG instance => NULL
  # DEBUG currentCntValue => NULL
  # DEBUG currentCounterValue => currentCntValue_5
  # DEBUG BEGIN_STMT
  return currentCntValue_5;

}



;; Function Ftm_Gpt_Ip_GetCompareValue (Ftm_Gpt_Ip_GetCompareValue, funcdef_no=14, decl_uid=5815, cgraph_uid=15, symbol_order=17)

Modification phase of node Ftm_Gpt_Ip_GetCompareValue/17
Ftm_Gpt_Ip_GetCompareValue (uint8 instance, uint8 channel)
{
  uint32 currentCmpValue;
  int _1;
  struct FTM_Type * _2;
  int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instance_4(D);
  _2 = ftmGptBase[_1];
  _3 = (int) channel_6(D);
  currentCmpValue_7 ={v} _2->CONTROLS[_3].CV;
  # DEBUG currentCmpValue => currentCmpValue_7
  # DEBUG BEGIN_STMT
  return currentCmpValue_7;

}



;; Function Ftm_Gpt_Ip_GetInterruptFlag (Ftm_Gpt_Ip_GetInterruptFlag, funcdef_no=15, decl_uid=5818, cgraph_uid=16, symbol_order=18)

Modification phase of node Ftm_Gpt_Ip_GetInterruptFlag/18
Ftm_Gpt_Ip_GetInterruptFlag (uint8 instance, uint8 channel)
{
  uint32 flag;
  int _1;
  struct FTM_Type * _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG flag => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instance_6(D);
  _2 = ftmGptBase[_1];
  _3 = (int) channel_8(D);
  _4 ={v} _2->CONTROLS[_3].CSC;
  _5 = _4 >> 7;
  flag_9 = _5 & 1;
  # DEBUG flag => flag_9
  # DEBUG BEGIN_STMT
  return flag_9;

}



;; Function Ftm_Gpt_Ip_GetInterruptBit (Ftm_Gpt_Ip_GetInterruptBit, funcdef_no=16, decl_uid=5869, cgraph_uid=17, symbol_order=19)

Modification phase of node Ftm_Gpt_Ip_GetInterruptBit/19
Ftm_Gpt_Ip_GetInterruptBit (uint8 instance, uint8 channel)
{
  uint32 flag;
  int _1;
  struct FTM_Type * _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG flag => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instance_6(D);
  _2 = ftmGptBase[_1];
  _3 = (int) channel_8(D);
  _4 ={v} _2->CONTROLS[_3].CSC;
  _5 = _4 >> 6;
  flag_9 = _5 & 1;
  # DEBUG flag => flag_9
  # DEBUG BEGIN_STMT
  return flag_9;

}



;; Function Ftm_Gpt_Ip_Init (Ftm_Gpt_Ip_Init, funcdef_no=18, decl_uid=5822, cgraph_uid=19, symbol_order=21)

Modification phase of node Ftm_Gpt_Ip_Init/21
Ftm_Gpt_Ip_Init (uint8 instance, const struct Ftm_Gpt_Ip_InstanceConfigType * configPtr)
{
  <unnamed type> _1;
  int _2;
  struct FTM_Type * _3;
  <unnamed type> _4;
  unsigned char _5;
  _Bool _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = configPtr_9(D)->mode;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = (int) instance_10(D);
  _3 = ftmGptBase[_2];
  _4 = configPtr_9(D)->clocksource;
  _5 = configPtr_9(D)->clockPrescaler;
  Ftm_Gpt_Ip_Configure (_3, _4, _5);
  # DEBUG BEGIN_STMT
  _6 = configPtr_9(D)->freezeBit;
  Ftm_Gpt_Ip_SetFreezebit (instance_10(D), _6);
  # DEBUG BEGIN_STMT
  # DEBUG instance => instance_10(D)
  # DEBUG value => 1
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_SetCounterInitVal
  # DEBUG BEGIN_STMT
  _3->CNTIN ={v} 1;
  # DEBUG instance => NULL
  # DEBUG value => NULL
  # DEBUG BEGIN_STMT
  # DEBUG instance => instance_10(D)
  # DEBUG value => 65535
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_WriteModulo
  # DEBUG BEGIN_STMT
  _3->MOD ={v} 65535;
  # DEBUG instance => NULL
  # DEBUG value => NULL
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_FTMEnable (instance_10(D), 1);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Ftm_Gpt_Ip_InitChannel (Ftm_Gpt_Ip_InitChannel, funcdef_no=19, decl_uid=5825, cgraph_uid=20, symbol_order=22)

Modification phase of node Ftm_Gpt_Ip_InitChannel/22
Ftm_Gpt_Ip_InitChannel (uint8 instance, const struct Ftm_Gpt_Ip_ChannelConfigType * configPtr)
{
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  int _5;
  void (*<T497>) (uint8) _6;
  unsigned char _7;
  int _17;
  struct FTM_Type * _18;
  int _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = configPtr_9(D)->hwChannel;
  Ftm_Gpt_Ip_EnableInterrupt (instance_10(D), _1, 0);
  # DEBUG BEGIN_STMT
  _2 = configPtr_9(D)->hwChannel;
  Ftm_Gpt_Ip_ClearInterruptFlag (instance_10(D), _2);
  # DEBUG BEGIN_STMT
  _3 = configPtr_9(D)->hwChannel;
  # DEBUG instance => instance_10(D)
  # DEBUG channel => _3
  # DEBUG value => 65535
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_SetCompareValue
  # DEBUG BEGIN_STMT
  _17 = (int) instance_10(D);
  _18 = ftmGptBase[_17];
  _19 = (int) _3;
  _18->CONTROLS[_19].CV ={v} 65535;
  # DEBUG instance => NULL
  # DEBUG channel => NULL
  # DEBUG value => NULL
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_ModeSelectA (instance_10(D), _3, 1);
  # DEBUG BEGIN_STMT
  _4 = configPtr_9(D)->hwChannel;
  _5 = (int) _4;
  Ftm_Gpt_Ip_u32ChState[_17][_5].chInit = 1;
  # DEBUG BEGIN_STMT
  _6 = configPtr_9(D)->callback;
  Ftm_Gpt_Ip_u32ChState[_17][_5].callback = _6;
  # DEBUG BEGIN_STMT
  _7 = configPtr_9(D)->callbackParam;
  Ftm_Gpt_Ip_u32ChState[_17][_5].callbackParam = _7;
  return;

}



;; Function Ftm_Gpt_Ip_Deinit (Ftm_Gpt_Ip_Deinit, funcdef_no=20, decl_uid=5827, cgraph_uid=21, symbol_order=23)

Modification phase of node Ftm_Gpt_Ip_Deinit/23
Ftm_Gpt_Ip_Deinit (uint8 instance)
{
  uint8 channelIndex;
  int _11;
  struct FTM_Type * _12;

  <bb 2> [local count: 119292716]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG channelIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 954449108]:
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_EnableInterrupt (instance_4(D), channelIndex_1, 0);
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_ClearInterruptFlag (instance_4(D), channelIndex_1);
  # DEBUG BEGIN_STMT
  channelIndex_10 = channelIndex_1 + 1;
  # DEBUG channelIndex => channelIndex_10

  <bb 4> [local count: 1073741824]:
  # channelIndex_1 = PHI <0(2), channelIndex_10(3)>
  # DEBUG channelIndex => channelIndex_1
  # DEBUG BEGIN_STMT
  if (channelIndex_1 != 8)
    goto <bb 3>; [88.89%]
  else
    goto <bb 5>; [11.11%]

  <bb 5> [local count: 119292717]:
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_SetClockSource (instance_4(D), 0);
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_FTMEnable (instance_4(D), 0);
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_SetFreezebit (instance_4(D), 0);
  # DEBUG BEGIN_STMT
  # DEBUG instance => instance_4(D)
  # DEBUG value => 0
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_SetCounterInitVal
  # DEBUG BEGIN_STMT
  _11 = (int) instance_4(D);
  _12 = ftmGptBase[_11];
  _12->CNTIN ={v} 0;
  # DEBUG instance => NULL
  # DEBUG value => NULL
  # DEBUG BEGIN_STMT
  # DEBUG instance => instance_4(D)
  # DEBUG value => 0
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_SetCounter
  # DEBUG BEGIN_STMT
  _12->CNT ={v} 0;
  # DEBUG instance => NULL
  # DEBUG value => NULL
  return;

}



;; Function Ftm_Gpt_Ip_StartCounting (Ftm_Gpt_Ip_StartCounting, funcdef_no=21, decl_uid=5831, cgraph_uid=22, symbol_order=24)

Modification phase of node Ftm_Gpt_Ip_StartCounting/24
Ftm_Gpt_Ip_StartCounting (uint8 instance, uint8 channel, uint16 compareValue)
{
  uint32 currentCntValue;
  uint32 counterValue;
  long unsigned int _1;
  long unsigned int _2;
  int _12;
  struct FTM_Type * _13;
  int _15;
  long unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG instance => instance_5(D)
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_GetCntValue
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = (int) instance_5(D);
  _13 = ftmGptBase[_12];
  currentCntValue_14 ={v} _13->CNT;
  # DEBUG currentCntValue => currentCntValue_14
  # DEBUG BEGIN_STMT
  # DEBUG instance => NULL
  # DEBUG currentCntValue => NULL
  # DEBUG currentCntValue => currentCntValue_14
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) compareValue_6(D);
  _2 = _1 + currentCntValue_14;
  if (_2 > 65535)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  counterValue_7 = _2 + 4294901761;
  # DEBUG counterValue => counterValue_7

  <bb 4> [local count: 1073741824]:
  # counterValue_3 = PHI <counterValue_7(3), _2(2)>
  # DEBUG counterValue => counterValue_3
  # DEBUG BEGIN_STMT
  # DEBUG instance => instance_5(D)
  # DEBUG channel => channel_8(D)
  # DEBUG value => counterValue_3
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_SetCompareValue
  # DEBUG BEGIN_STMT
  _15 = (int) channel_8(D);
  _16 = counterValue_3 & 65535;
  _13->CONTROLS[_15].CV ={v} _16;
  # DEBUG instance => NULL
  # DEBUG channel => NULL
  # DEBUG value => NULL
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_u32TargetValue[_12][_15] = _1;
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_ClearInterruptFlag (instance_5(D), channel_8(D));
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_EnableInterrupt (instance_5(D), channel_8(D), 1);
  return;

}



;; Function Ftm_Gpt_Ip_StartTimer (Ftm_Gpt_Ip_StartTimer, funcdef_no=22, decl_uid=5834, cgraph_uid=23, symbol_order=25)

Modification phase of node Ftm_Gpt_Ip_StartTimer/25
Ftm_Gpt_Ip_StartTimer (uint8 instance, uint16 counterValue)
{
  int _6;
  struct FTM_Type * _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_SetClockSource (instance_2(D), 1);
  # DEBUG BEGIN_STMT
  # DEBUG instance => instance_2(D)
  # DEBUG value => counterValue_4(D)
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_SetCounterInitVal
  # DEBUG BEGIN_STMT
  _6 = (int) instance_2(D);
  _7 = ftmGptBase[_6];
  _8 = (long unsigned int) counterValue_4(D);
  _7->CNTIN ={v} _8;
  # DEBUG instance => NULL
  # DEBUG value => NULL
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_FTMEnable (instance_2(D), 1);
  return;

}



;; Function Ftm_Gpt_Ip_StopTimer (Ftm_Gpt_Ip_StopTimer, funcdef_no=23, decl_uid=5836, cgraph_uid=24, symbol_order=26)

Modification phase of node Ftm_Gpt_Ip_StopTimer/26
Ftm_Gpt_Ip_StopTimer (uint8 instance)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_FTMEnable (instance_2(D), 0);
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_SetClockSource (instance_2(D), 0);
  return;

}



;; Function Ftm_Gpt_Ip_EnableChannelInterrupt (Ftm_Gpt_Ip_EnableChannelInterrupt, funcdef_no=24, decl_uid=5839, cgraph_uid=25, symbol_order=27)

Modification phase of node Ftm_Gpt_Ip_EnableChannelInterrupt/27
Ftm_Gpt_Ip_EnableChannelInterrupt (uint8 instance, uint8 channel)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_ClearInterruptFlag (instance_2(D), channel_3(D));
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_EnableInterrupt (instance_2(D), channel_3(D), 1);
  return;

}



;; Function Ftm_Gpt_Ip_DisableChannelInterrupt (Ftm_Gpt_Ip_DisableChannelInterrupt, funcdef_no=25, decl_uid=5842, cgraph_uid=26, symbol_order=28)

Modification phase of node Ftm_Gpt_Ip_DisableChannelInterrupt/28
Ftm_Gpt_Ip_DisableChannelInterrupt (uint8 instance, uint8 channel)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_EnableInterrupt (instance_2(D), channel_3(D), 0);
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_ClearInterruptFlag (instance_2(D), channel_3(D));
  return;

}



;; Function Ftm_Gpt_Ip_SetHalfCycleReloadPoint (Ftm_Gpt_Ip_SetHalfCycleReloadPoint, funcdef_no=26, decl_uid=5845, cgraph_uid=27, symbol_order=29)

Modification phase of node Ftm_Gpt_Ip_SetHalfCycleReloadPoint/29
Ftm_Gpt_Ip_SetHalfCycleReloadPoint (uint8 instance, uint16 reloadPoint)
{
  int _1;
  struct FTM_Type * _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_3(D);
  _2 = ftmGptBase[_1];
  # DEBUG base => _2
  # DEBUG value => reloadPoint_5(D)
  # DEBUG INLINE_ENTRY Ftm_Gpt_Ip_SetHalfCycleValue
  # DEBUG BEGIN_STMT
  _6 = (long unsigned int) reloadPoint_5(D);
  _2->HCR ={v} _6;
  # DEBUG base => NULL
  # DEBUG value => NULL
  return;

}



;; Function FTM_0_CH_0_CH_1_ISR (FTM_0_CH_0_CH_1_ISR, funcdef_no=27, decl_uid=5885, cgraph_uid=28, symbol_order=30)

Modification phase of node FTM_0_CH_0_CH_1_ISR/30
FTM_0_CH_0_CH_1_ISR ()
{
  uint8 channel;

  <bb 2> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG channel => 0
  # DEBUG BEGIN_STMT
  # DEBUG channel => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_ProcessCommonInterrupt (0, channel_1);
  # DEBUG BEGIN_STMT
  channel_6 = channel_1 + 1;
  # DEBUG channel => channel_6

  <bb 4> [local count: 1073741824]:
  # channel_1 = PHI <0(2), channel_6(3)>
  # DEBUG channel => channel_1
  # DEBUG BEGIN_STMT
  if (channel_1 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 5>; [33.33%]

  <bb 5> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


