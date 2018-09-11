// Neuron.h
#ifndef Neuron_H
#define Neuron_H

#include "../eventos/evento.hpp"
#include "../synapses/synapse.hpp"
#include <string>
#include <vector>

using namespace std;

class Neuron
{
  enum TiposDeNeuronios { PERCEPTION, PATTERN_RECON };

  string id;

  string nome;
  
  TiposDeNeuronios tipo;

  // mudar quando for um neuronio NAO sensorial
  //    para synapse

  // nomeado inputs por abrigar uma lista quando nao sensorial
  Evento inputs;

  int inibidores_cima;

  Synapse axonio;

public:
  Neuron(int id_arg, string nome_arg, TiposDeNeuronios tipo_arg, Evento input_arg, int inibidores_cima_arg, Synapse axonio_arg);
  Neuron();
  bool VerificarAtivacao(Evento eventoMundi);

  void AdicionarSynapseAoAxonio(Synapse s);

  bool Ativacao();

};

#endif