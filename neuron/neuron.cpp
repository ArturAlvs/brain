// Neuron.cpp
#include <iostream>
#include "../eventos/evento.hpp"
#include "../outsidelib/hashidsxx/hashids.h"
#include "../synapses/synapse.hpp"
#include "neuron.hpp"



using namespace std;

Neuron::Neuron(int id_arg, string nome_arg, TiposDeNeuronios tipo_arg, Evento inputs_arg, int inibidores_cima_arg, Synapse axonio_arg)
{
  
    hashidsxx::Hashids hash("");
    id = hash.encode(id_arg);

    nome = nome_arg;
  
    tipo = tipo_arg;

    inputs = inputs_arg;

    inibidores_cima = inibidores_cima_arg;

    axonio = axonio_arg;
}

Neuron::Neuron(){

}


void Neuron::AdicionarSynapseAoAxonio(Synapse s){

    axonio = s;

}


bool Neuron::VerificarAtivacao(Evento eventoMundi){

    cout << "verificando.." << endl;

    
    for(int i = 0; i < eventoMundi.RetornarDimensoes(); i++)
    {
                
        if (inputs.RetornarDado(i) != eventoMundi.RetornarDado(i)) {
            
            // tem um elemento diferente no vetor
            return false;
        }
        
    }
    

    return true;   

}
