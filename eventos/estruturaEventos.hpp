
using namespace std;

// EstruturaEventos.h
#ifndef EstruturaEventos_H
#define EstruturaEventos_H

class EstruturaEventos
{
  vector<Evento> eventos;

  int dimensoes_da_estrutura;

public:
  EstruturaEventos(int dimensoes_da_estrutura_arg);
  EstruturaEventos();
  int RetornarDimensoes();
  Evento RetornarEvento(int i);

};

#endif