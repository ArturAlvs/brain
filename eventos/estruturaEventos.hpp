#include "evento.hpp"
#include <vector>
using namespace std;

// EstruturaEventos.h
#ifndef EstruturaEventos_H
#define EstruturaEventos_H

class EstruturaEventos
{
  vector< vector<Evento> > eventosMatrix;

  vector< string > estruturaEventos_nomes;
  // vector< int > eventosMatrix_dimensoes;


  // int dimensoes_da_estrutura;

public:
  EstruturaEventos();
  Evento RetornarEvento(int id_estrutura, int evento_id);
  string RetornarEstruturaNome(int id_estrutura);
  int RetornarDimensaoVetorEventos(int i);

  int RetornarNumeroEstruturas();


  int AddEstrutura(string s, Evento e);
  bool AddEventoNaEstrutura(int id_estrutura, Evento e);

  bool DelEstrutura(int i);
  bool DelEvento(int id_estrutura, int evento_id);

  vector<Evento> Eventos(int id_estrutura);


};

#endif