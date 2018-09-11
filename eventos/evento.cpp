// Evento.cpp
#include <stdlib.h> 
#include "evento.hpp"

Evento::Evento(int dimensoes_dos_dados_arg, string s)
{
  nome = s;
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

string Evento::RetornarNome(){
  return nome;
}

unsigned char Evento::RetornarDado(int i)
{
  return dados[i];
}