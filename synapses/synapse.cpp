// Evento.cpp
#include <stdlib.h> 
#include "../neuron/neuron.hpp"
#include "synapse.hpp"
#include "../outsidelib/hashidsxx/hashids.h"

Synapse::Synapse(vector<Neuron> preSynap_arg, vector<Neuron> posSynap_arg, TiposDeSynapses tipo_arg, int id_arg)
{
  preSynap = preSynap_arg;
  posSynap = posSynap_arg;
  tipoSynapse = tipo_arg;


  hashidsxx::Hashids hash("");
  id = hash.encode(id_arg);
}
Synapse::Synapse()
{

}

TiposDeSynapses Synapse::RetornarTipo()
{
  return tipoSynapse;
}

void Synapse::DefinirPreSynap(vector<Neuron> ns)
{
  preSynap = ns;
}

void Synapse::DefinirPosSynap(vector<Neuron> ns)
{
  posSynap = ns;
}


bool Synapse::SameSynap(string id_comparacao)
{
  
  if (id_comparacao == id) {
    return true;
  }

  return false;
  
}


string Synapse::SynapID(){
  return id;
}