
using namespace std;

// Evento.h
#ifndef Evento_H
#define Evento_H

class Evento
{
  unsigned char *dados;

  int dimensoes_dos_dados;

public:
  Evento(int dimensoes_dos_dados_arg);
  Evento();
  int RetornarDimensoes();
  unsigned char RetornarDado(int i);

};

#endif