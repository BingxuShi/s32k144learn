
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FTM_PWM_INIT/9:
  Jump functions of caller  U1_printf/8:
  Jump functions of caller  LPUART_INIT/7:
  Jump functions of caller  Port_Ci_Port_Ip_Init/5:
  Jump functions of caller  Clock_Ip_Init/3:
  Jump functions of caller  main/2:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.

overall_size: 16, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FTM_PWM_INIT/9 (FTM_PWM_INIT) @05e1cc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (118111600 (estimated locally),1.00 per call) 
  Calls: 
U1_printf/8 (U1_printf) @05e1cb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (118111600 (estimated locally),1.00 per call) 
  Calls: 
LPUART_INIT/7 (LPUART_INIT) @05e1ca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (118111600 (estimated locally),1.00 per call) 
  Calls: 
g_pin_mux_InitConfigArr0/6 (g_pin_mux_InitConfigArr0) @05e1f2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/2 (addr)
  Availability: not_available
  Varpool flags:
Port_Ci_Port_Ip_Init/5 (Port_Ci_Port_Ip_Init) @05e1c9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Mcu_aClockConfigPB/4 (Mcu_aClockConfigPB) @05e1f240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/2 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/3 (Clock_Ip_Init) @05e1c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (118111600 (estimated locally),1.00 per call) 
  Calls: 
main/2 (main) @05e1c460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/4 (addr)g_pin_mux_InitConfigArr0/6 (addr)exit_code/1 (read)exit_code/1 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: FTM_PWM_INIT/9 (118111600 (estimated locally),1.00 per call) U1_printf/8 (118111600 (estimated locally),1.00 per call) LPUART_INIT/7 (118111600 (estimated locally),1.00 per call) Port_Ci_Port_Ip_Init/5 (118111600 (estimated locally),1.00 per call) Clock_Ip_Init/3 (118111600 (estimated locally),1.00 per call) 
exit_code/1 (exit_code) @05fcec60
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: main/2 (read)main/2 (read)
  Availability: available
  Varpool flags: initialized

;; Function main (main, funcdef_no=1, decl_uid=6296, cgraph_uid=2, symbol_order=2) (executed once)

Modification phase of node main/2
main ()
{
  int exit_code.0_1;
  int _8;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG BEGIN_STMT
  Port_Ci_Port_Ip_Init (5, &g_pin_mux_InitConfigArr0);
  # DEBUG BEGIN_STMT
  LPUART_INIT ();
  # DEBUG BEGIN_STMT
  U1_printf ("hello hello hello\r\n");
  # DEBUG BEGIN_STMT
  FTM_PWM_INIT ();

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  exit_code.0_1 ={v} exit_code;
  if (exit_code.0_1 != 0)
    goto <bb 4>; [11.00%]
  else
    goto <bb 5>; [89.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _8 ={v} exit_code;
  return _8;

}


