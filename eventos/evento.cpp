// Evento.cpp
#include <stdlib.h> 
#include "evento.hpp"

Evento::Evento(int dimensoes_arg)
{
  dimensoes = dimensoes_arg;
  *dados = (unsigned char) malloc (dimensoes_arg * sizeof(unsigned char));
}
Evento::Evento()
{

}

int Evento::RetornarDimensoes()
{
  return dimensoes;
}

unsigned char Evento::RetornarDado(int i)
{
  return dados[i];
}
