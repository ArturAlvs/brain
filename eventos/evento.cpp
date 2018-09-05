// Evento.cpp
#include <stdlib.h> 
#include "evento.hpp"

Evento::Evento(int dimensoes_dos_dados_arg)
{
  dimensoes_dos_dados = dimensoes_dos_dados_arg;
  *dados = (unsigned char) malloc (dimensoes_dos_dados_arg * sizeof(unsigned char));
}
Evento::Evento()
{

}

int Evento::RetornarDimensoes()
{
  return dimensoes_dos_dados;
}

unsigned char Evento::RetornarDado(int i)
{
  return dados[i];
}