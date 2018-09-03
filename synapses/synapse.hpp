
#include <string>

using namespace std;

enum TiposDeSynapses { ELETRICAL, CHEMICAL };

// Synapse.h
#ifndef Synapse_H
#define Synapse_H

class Synapse
{

  //ADD
  //  LISTAS && ENUMS
  // 
  
  Neuron preSynap;

  Neuron posSynap;

  TiposDeSynapses tipoSynapse;

  string id;

public:
  Synapse(Neuron preSynap_arg, Neuron posSynap_arg, TiposDeSynapses tipo_arg, int id_arg);
  Synapse();
  TiposDeSynapses RetornarTipo();

  void DefinirPreSynap(Neuron n);
  void DefinirPosSynap(Neuron n);

  bool SameSynap(string id_comparacao);

  string SynapID();

};

#endif