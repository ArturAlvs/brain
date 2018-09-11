// EstruturaEventos.cpp
#include <string>
#include "estruturaEventos.hpp"
#include "evento.hpp"

EstruturaEventos::EstruturaEventos()
{

}

int EstruturaEventos::RetornarDimensaoVetorEventos(int i)
{
  return eventosMatrix.at(i).size();
}

int EstruturaEventos::RetornarNumeroEstruturas()
{
  return eventosMatrix.size();
}

  



Evento EstruturaEventos::RetornarEvento(int id_estrutura, int evento_id)
{
  return eventosMatrix.at(id_estrutura).at(evento_id);
}

string EstruturaEventos::RetornarEstruturaNome(int id_estrutura)
{
  return estruturaEventos_nomes.at(id_estrutura);
}




int EstruturaEventos::AddEstrutura(string s, Evento e)
{
  vector<Evento> v;
  v.push_back(e);

  eventosMatrix.push_back(v);

  estruturaEventos_nomes.push_back(s);

  return this->RetornarNumeroEstruturas() - 1;
}


bool EstruturaEventos::AddEventoNaEstrutura(int id_estrutura, Evento e)
{
  eventosMatrix.at(id_estrutura).push_back(e);

  return true;
}



bool EstruturaEventos::DelEstrutura(int i){

	eventosMatrix.erase(eventosMatrix.begin() - i);

	return true;

}
bool EstruturaEventos::DelEvento(int id_estrutura, int evento_id){

	eventosMatrix.at(id_estrutura).erase( eventosMatrix.at(id_estrutura).begin() +  evento_id);

	return true;
}



vector<Evento> EstruturaEventos::Eventos(int id_estrutura)
{

	return eventosMatrix.at(id_estrutura);

}
