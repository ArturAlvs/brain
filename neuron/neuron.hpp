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

  Evento padrao_esperado;

  int inibidores_cima;

  vector<Synapse> axonio;

public:
  Neuron(int id_arg, string nome_arg, TiposDeNeuronios tipo_arg, Evento padrao_esperado_arg, int inibidores_cima_arg, vector<Synapse> axonio_arg);
  Neuron();
  bool VerificarAtivacao(Evento eventoMundi);

  void AdicionarSynapseAoAxonio(Synapse s);
  void RemoverSynapseDoAxonio(Synapse s);

  bool Ativacao();

};

#endif