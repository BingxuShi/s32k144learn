
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  U1_printf/11:
  Jump functions of caller  Ftm_Gpt_Ip_StartTimer/9:
  Jump functions of caller  Ftm_Gpt_Ip_EnableChannelInterrupt/8:
  Jump functions of caller  Ftm_Gpt_Ip_InitChannel/6:
  Jump functions of caller  Ftm_Gpt_Ip_Init/4:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/3:
  Jump functions of caller  Ftm0_ch1_int/2:
  Jump functions of caller  FTM_INIT/1:

 Propagating constants:

Not considering Ftm0_ch1_int for cloning; -fipa-cp-clone disabled.
Not considering FTM_INIT for cloning; -fipa-cp-clone disabled.

overall_size: 28, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Ftm0_ch1_int/2:
  Node: FTM_INIT/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

U1_printf/11 (U1_printf) @05fb8a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Ftm0_ch1_int/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
index.6541/10 (index) @06252bd0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Ftm0_ch1_int/2 (read)Ftm0_ch1_int/2 (write)Ftm0_ch1_int/2 (write)
  Availability: available
  Varpool flags: initialized
Ftm_Gpt_Ip_StartTimer/9 (Ftm_Gpt_Ip_StartTimer) @05fb88c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FTM_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Gpt_Ip_EnableChannelInterrupt/8 (Ftm_Gpt_Ip_EnableChannelInterrupt) @05fb87e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FTM_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FTM_0_ChannelConfig_PB/7 (FTM_0_ChannelConfig_PB) @06252900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: FTM_INIT/1 (addr)
  Availability: not_available
  Varpool flags:
Ftm_Gpt_Ip_InitChannel/6 (Ftm_Gpt_Ip_InitChannel) @05fb8700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FTM_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FTM_0_InitConfig_PB/5 (FTM_0_InitConfig_PB) @06252870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: FTM_INIT/1 (addr)
  Availability: not_available
  Varpool flags:
Ftm_Gpt_Ip_Init/4 (Ftm_Gpt_Ip_Init) @05fb8620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FTM_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/3 (IntCtrl_Ip_EnableIrq) @05fb8540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FTM_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Ftm0_ch1_int/2 (Ftm0_ch1_int) @05fb80e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: index.6541/10 (read)index.6541/10 (write)index.6541/10 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: U1_printf/11 (354334802 (estimated locally),0.33 per call) 
FTM_INIT/1 (FTM_INIT) @06250e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: FTM_0_InitConfig_PB/5 (addr)FTM_0_ChannelConfig_PB/7 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Gpt_Ip_StartTimer/9 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_EnableChannelInterrupt/8 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_InitChannel/6 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_Init/4 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/3 (1073741824 (estimated locally),1.00 per call) 

;; Function FTM_INIT (FTM_INIT, funcdef_no=1, decl_uid=6536, cgraph_uid=2, symbol_order=1)

Modification phase of node FTM_INIT/1
FTM_INIT ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrq (99);
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_Init (0, &FTM_0_InitConfig_PB);
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_InitChannel (0, &FTM_0_ChannelConfig_PB[0]);
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_EnableChannelInterrupt (0, 1);
  # DEBUG BEGIN_STMT
  Ftm_Gpt_Ip_StartTimer (0, 37500);
  return;

}



;; Function Ftm0_ch1_int (Ftm0_ch1_int, funcdef_no=2, decl_uid=6539, cgraph_uid=3, symbol_order=2)

Modification phase of node Ftm0_ch1_int/2
Ftm0_ch1_int ()
{
  static uint16 index = 0;
  short unsigned int index.0_1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  index.0_1 = index;
  _2 = index.0_1 + 1;
  index = _2;
  # DEBUG BEGIN_STMT
  if (_2 > 999)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  U1_printf ("ftm_int\r\n");
  # DEBUG BEGIN_STMT
  index = 0;

  <bb 4> [local count: 1073741824]:
  return;

}


