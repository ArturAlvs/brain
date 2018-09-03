// Neuron.cpp
#include <iostream>
#include "../eventos/evento.hpp"
#include "../outsidelib/hashidsxx/hashids.h"
#include "../synapses/synapse.hpp"
#include "neuron.hpp"



using namespace std;

Neuron::Neuron(int id_arg, string nome_arg, TiposDeNeuronios tipo_arg, Evento padrao_esperado_arg, int inibidores_cima_arg, vector<Synapse> axonio_arg)
{
  
    hashidsxx::Hashids hash("");
    id = hash.encode(id_arg);

    nome = nome_arg;
  
    tipo = tipo_arg;

    padrao_esperado = padrao_esperado_arg;

    inibidores_cima = inibidores_cima_arg;

    axonio = axonio_arg;
}

Neuron::Neuron(){

}


void Neuron::AdicionarSynapseAoAxonio(Synapse s){

    axonio.push_back(s);

}
void Neuron::RemoverSynapseDoAxonio(Synapse s){


    for (auto it = axonio.begin(); it != axonio.end(); ) {
        if ( s.SameSynap( it->SynapID() ) ) {
            it = axonio.erase(it);
        } else {
            ++it;
        }
    }

}


bool Neuron::VerificarAtivacao(Evento eventoMundi){

    cout << "verificando.." << endl;

    
    for(int i = 0; i < eventoMundi.RetornarDimensoes(); i++)
    {
        
        if (padrao_esperado.RetornarDado(i) == eventoMundi.RetornarDado(i)) {
            
            
            
            return true;
        }
        
    }
    

    return false;   

}
