
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCan_Callback/2:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCan_Callback/2 (FlexCan_Callback) @06966c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: FlexCAN_Config0/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
FlexCAN_Config0/1 (FlexCAN_Config0) @069697e0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: FlexCan_Callback/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlexCAN_State0/0 (FlexCAN_State0) @06969678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
