// Synapse.h
#ifndef Synapse_H
#define Synapse_H

#include <string>

#include "../neuron/neuron.hpp"


using namespace std;


class Synapse
{
  enum TiposDeSynapses { ELETRICA, QUIMICA };

  //ADD
  //  LISTAS && ENUMS
  // 
  
  // como descrito na neuron_fig1.png
  // 
  // mais de um no preSynap = sinap eletrica e sinap quimica
  //  mais que isso, estaria aumentando o potencial do brain?
  //
  // mais de um no poSynap = terminais de um axonio
  vector<Neuron> preSynap;
  vector<Neuron> posSynap;

  TiposDeSynapses tipoSynapse;

  string id;

public:
  Synapse(vector<Neuron> preSynap_arg, vector<Neuron> posSynap_arg, TiposDeSynapses tipo_arg, int id_arg);
  Synapse();
  TiposDeSynapses RetornarTipo();

  void DefinirPreSynap(vector<Neuron> n);
  void DefinirPosSynap(vector<Neuron> n);

  bool SameSynap(string id_comparacao);

  string SynapID();

};

#endif