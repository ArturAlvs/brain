#include "../eventos/evento.hpp"
#include "../synapses/synapse.hpp"
#include <string>
#include <vector>

using namespace std;


enum TiposDeNeuronios { PERCEPTION, PATTERN_RECON };

// Neuron.h
#ifndef Neuron_H
#define Neuron_H

class Neuron
{
  string id;

  string nome;
  
  TiposDeNeuronios tipo;

  // mudar quando for um neuronio NAO sensorial
  //    para synapse ou neuron?
  Evento padrao_esperado;

  int inibidores_cima;

  Synapse axonio;

public:
  Neuron(int id_arg, string nome_arg, TiposDeNeuronios tipo_arg, Evento padrao_esperado_arg, int inibidores_cima_arg, Synapse axonio_arg);
  Neuron();
  bool VerificarAtivacao(Evento eventoMundi);

  void AdicionarSynapseAoAxonio(Synapse s);

  bool Ativacao();

};

#endif