#include <vector>

#include "../neuron/neuron.hpp"
#include "../eventos/estruturaEventos.hpp"


using namespace std;

// Structure.h
#ifndef Structure_H
#define Structure_H

class Structure
{
    // uma Camada para os sensores
  vector< Neuron > sensores;


    // uma estrutura para o resto
  // vector< Neuron > camada_I;


  vector< vector< Neuron > > camadasDeEstruturas;
  vector< string > camadasDeEstruturas_nomes;




public:
  Structure();

  // adiciona o sensor e retorna seu index no vetor
  int AddSensor(Neuron n);
  bool DelSensor(int i);

  int NumeroSensores();

  int AddEstrutura(Neuron n, string nome_estrutura);
  bool DelEstrutura(int i);
  int NumeroCamadas();
  int NumeroNeuronsCamadas(int i);


  int AddNeuronCamada(Neuron n, int camada);
  bool DelNeuronCamada(int camada, int neuron);


  // recebe um evento e retorna "pai da arovore"
  Neuron VerificarAtivacao(vector<Evento> evs);
  vector<Neuron> VerificarAtivacaoSensores(Evento e);
  vector<Neuron> VerificarAtivacaoCamadas(Evento e, int camada);



};

#endif