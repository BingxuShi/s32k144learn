
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  memset/48:
  Jump functions of caller  Lpuart_Uart_Ip_SyncSend/47:
  Jump functions of caller  strlen/46:
  Jump functions of caller  Lpuart_Uart_Ip_Deinit/45:
  Jump functions of caller  Lpuart_Uart_Ip_AsyncReceive/44:
  Jump functions of caller  Lpuart_Uart_Ip_Init/42:
  Jump functions of caller  LPUART_UART_IP_1_IRQHandler/41:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/40:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/39:
  Jump functions of caller  IntCtrl_Ip_Init/37:
  Jump functions of caller  Lpuart1_Callback/36:
  Jump functions of caller  U1_printf/35:
  Jump functions of caller  LPUART_DEINIT/34:
  Jump functions of caller  LPUART_INIT/33:

 Propagating constants:

Not considering Lpuart1_Callback for cloning; -fipa-cp-clone disabled.
Not considering U1_printf for cloning; -fipa-cp-clone disabled.
Not considering LPUART_DEINIT for cloning; -fipa-cp-clone disabled.
Not considering LPUART_INIT for cloning; -fipa-cp-clone disabled.

overall_size: 48, max_new_size: 11001
 - context independent values, size: 2, time_benefit: 3.000000

IPA lattices after all propagation:

Lattices:
  Node: Lpuart1_Callback/36:
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
  Node: U1_printf/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: LPUART_DEINIT/34:
  Node: LPUART_INIT/33:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

memset/48 (memset) @06fe8e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: U1_printf/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Lpuart_Uart_Ip_SyncSend/47 (Lpuart_Uart_Ip_SyncSend) @06fe8d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: U1_printf/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
strlen/46 (strlen) @06fe8c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: U1_printf/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Lpuart_Uart_Ip_Deinit/45 (Lpuart_Uart_Ip_Deinit) @06fe8a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LPUART_DEINIT/34 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Lpuart_Uart_Ip_AsyncReceive/44 (Lpuart_Uart_Ip_AsyncReceive) @06fe88c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LPUART_INIT/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS/43 (Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS) @06f8e000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: LPUART_INIT/33 (addr)
  Availability: not_available
  Varpool flags: read-only
Lpuart_Uart_Ip_Init/42 (Lpuart_Uart_Ip_Init) @06fe87e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LPUART_INIT/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
LPUART_UART_IP_1_IRQHandler/41 (LPUART_UART_IP_1_IRQHandler) @06fe8700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: LPUART_INIT/33 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/40 (IntCtrl_Ip_InstallHandler) @06fe8620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LPUART_INIT/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/39 (IntCtrl_Ip_EnableIrq) @06fe8540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LPUART_INIT/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrlConfig_0/38 (IntCtrlConfig_0) @06fdfea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: LPUART_INIT/33 (addr)
  Availability: not_available
  Varpool flags: read-only
IntCtrl_Ip_Init/37 (IntCtrl_Ip_Init) @06fe8460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LPUART_INIT/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Lpuart1_Callback/36 (Lpuart1_Callback) @06fe8000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 
U1_printf/35 (U1_printf) @06fe3e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: USART1_TX_BUF/31 (write)USART1_TX_BUF/31 (addr)USART1_TX_BUF/31 (addr)USART1_TX_BUF/31 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: memset/48 (1073741824 (estimated locally),1.00 per call) Lpuart_Uart_Ip_SyncSend/47 (1073741824 (estimated locally),1.00 per call) strlen/46 (1073741824 (estimated locally),1.00 per call) 
LPUART_DEINIT/34 (LPUART_DEINIT) @06fe3b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpuart_Uart_Ip_Deinit/45 (1073741824 (estimated locally),1.00 per call) 
LPUART_INIT/33 (LPUART_INIT) @06fe38c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: IntCtrlConfig_0/38 (addr)LPUART_UART_IP_1_IRQHandler/41 (addr)Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS/43 (addr)rxbuffer/32 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpuart_Uart_Ip_AsyncReceive/44 (1073741824 (estimated locally),1.00 per call) Lpuart_Uart_Ip_Init/42 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/40 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/39 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_Init/37 (1073741824 (estimated locally),1.00 per call) 
rxbuffer/32 (rxbuffer) @06fdf948
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: LPUART_INIT/33 (addr)
  Availability: available
  Varpool flags:
USART1_TX_BUF/31 (USART1_TX_BUF) @06fdf8b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: U1_printf/35 (write)U1_printf/35 (addr)U1_printf/35 (addr)U1_printf/35 (addr)
  Availability: available
  Varpool flags:

;; Function LPUART_INIT (LPUART_INIT, funcdef_no=31, decl_uid=7392, cgraph_uid=32, symbol_order=33)

Modification phase of node LPUART_INIT/33
LPUART_INIT ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_Init (&IntCtrlConfig_0);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrq (33);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (33, LPUART_UART_IP_1_IRQHandler, 0B);
  # DEBUG BEGIN_STMT
  Lpuart_Uart_Ip_Init (1, &Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS);
  # DEBUG BEGIN_STMT
  Lpuart_Uart_Ip_AsyncReceive (1, &rxbuffer, 1);
  return;

}



;; Function LPUART_DEINIT (LPUART_DEINIT, funcdef_no=32, decl_uid=7395, cgraph_uid=33, symbol_order=34)

Modification phase of node LPUART_DEINIT/34
LPUART_DEINIT ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Lpuart_Uart_Ip_Deinit (1);
  return;

}



;; Function U1_printf (U1_printf, funcdef_no=33, decl_uid=7398, cgraph_uid=34, symbol_order=35)

Modification phase of node U1_printf/35
U1_printf (char * fmt)
{
  unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MEM[(char * {ref-all})&USART1_TX_BUF] = MEM[(char * {ref-all})fmt_3(D)];
  # DEBUG BEGIN_STMT
  _1 = strlen (&USART1_TX_BUF);
  Lpuart_Uart_Ip_SyncSend (1, &USART1_TX_BUF, _1, 4294967295);
  # DEBUG BEGIN_STMT
  memset (&USART1_TX_BUF, 0, 200);
  return;

}



;; Function Lpuart1_Callback (Lpuart1_Callback, funcdef_no=34, decl_uid=6629, cgraph_uid=35, symbol_order=36) (executed once)

Modification phase of node Lpuart1_Callback/36
Lpuart1_Callback (const uint8 HwInstance, const Lpuart_Uart_Ip_EventType Event, void * UserData)
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


