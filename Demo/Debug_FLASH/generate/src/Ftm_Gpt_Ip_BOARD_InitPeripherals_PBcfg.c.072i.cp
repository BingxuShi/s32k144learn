
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Ftm0_ch1_int/2:

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

Ftm0_ch1_int/2 (Ftm0_ch1_int) @05d5cd20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: FTM_0_ChannelConfig_PB/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
FTM_0_ChannelConfig_PB/1 (FTM_0_ChannelConfig_PB) @05cdef78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Ftm0_ch1_int/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized
FTM_0_InitConfig_PB/0 (FTM_0_InitConfig_PB) @05cdef30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
