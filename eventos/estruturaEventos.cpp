// EstruturaEventos.cpp
#include <stdlib.h> 
#include "estruturaEventos.hpp"
#include "evento.hpp"

EstruturaEventos::EstruturaEventos(int dimensoes_da_estrutura_arg)
{
  dimensoes_da_estrutura = dimensoes_da_estrutura_arg;

}
EstruturaEventos::EstruturaEventos()
{

}

int EstruturaEventos::RetornarDimensoes()
{
  return dimensoes_da_estrutura;
}

Evento EstruturaEventos::RetornarEstruturaEvento(int i)
{
  return eventos.at(i);
}
