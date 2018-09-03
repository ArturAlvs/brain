
using namespace std;

// Evento.h
#ifndef Evento_H
#define Evento_H

class Evento
{
  unsigned char *dados;

  int dimensoes;

public:
  Evento(int dimensoes_arg);
  Evento();
  int RetornarDimensoes();
  unsigned char RetornarDado(int i);

};

#endif