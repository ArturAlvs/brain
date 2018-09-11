// Evento.h
#ifndef Evento_H
#define Evento_H

#include <string>

using namespace std;

class Evento
{
  unsigned char *dados;

  int dimensoes_dos_dados;

  string nome;

public:
  Evento(int dimensoes_dos_dados_arg, string s);
  Evento();
  int RetornarDimensoes();
  string RetornarNome();

  unsigned char RetornarDado(int i);

};

#endif