// Structure.cpp
#include <stdlib.h> 
#include "structure.hpp"
#include "../eventos/estruturaEventos.hpp"
#include "../neuron/neuron.hpp"

Structure::Structure()
{

}


int Structure::AddSensor(Neuron n)
{
    sensores.push_back(n);


    return this->NumeroSensores() - 1;
}

bool Structure::DelSensor(int i)
{
    sensores.erase( sensores.begin() - i );

    return true;

}

int Structure::NumeroSensores()
{
    return sensores.size();
}



int Structure::AddEstrutura(Neuron n, string nome_estrutura)
{
    vector<Neuron> v;
    v.push_back(n);

    camadasDeEstruturas.push_back(v);

    camadasDeEstruturas_nomes.push_back(nome_estrutura);

    return this->NumeroCamadas() - 1;
}

bool Structure::DelEstrutura(int i)
{

    camadasDeEstruturas.erase( camadasDeEstruturas.begin() +  i);
    camadasDeEstruturas_nomes.erase( camadasDeEstruturas_nomes.begin() +  i);

    return true;

}

int Structure::NumeroCamadas()
{
    return camadasDeEstruturas.size();
}

int Structure::NumeroNeuronsCamadas(int i)
{
    return camadasDeEstruturas.at(i).size();
}

int Structure::AddNeuronCamada(Neuron n, int camada)
{
    camadasDeEstruturas.at(camada).push_back(n);

    this->NumeroNeuronsCamadas(camada);

}

bool Structure::DelNeuronCamada(int camada, int neuron)
{
    camadasDeEstruturas.at(camada).erase( camadasDeEstruturas.at(camada).begin() + neuron );

    return true;
}


// recebe um evento e retorna "pai da arovore"
Neuron Structure::VerificarAtivacao(vector<Evento> evs)
{

    // verifica as ativacoes nos sensores
    

    // verifica as ativacoes nas camadas

    // quando nao houver ativacao:
    //     cria um neuronio para a camada(ou sensor)
    //         com sinapses para os neuronios das camadas anteriores
    //         ou
    //         para o proprio evento (sensor)


    // quando houver 1 ativacao:
    //     



    Neuron n;
    return n;
}

// poderia estar junto em uma funcao só, mas acho que pode 
//  ter algo de diferente aqui e por isso precisar de uma funcao extra
vector<Neuron> Structure::VerificarAtivacaoSensores(Evento e)
{
    vector<Neuron> neurons_ativados;

    
    
    for(int i = 0; i < this->NumeroSensores(); i++)
    {
        
        if ( this->sensores.at(i).VerificarAtivacao(e) == true ) {
            neurons_ativados.push_back(this->sensores.at(i));
        }
        
    }


    return neurons_ativados;
}

vector<Neuron> Structure::VerificarAtivacaoCamadas(Evento e, int camada)
{

    vector<Neuron> neurons_ativados;

    
    
    for(int i = 0; i < this->NumeroNeuronsCamadas(camada); i++)
    {
        
        if ( this->camadasDeEstruturas.at(camada).at(i).VerificarAtivacao(e) == true ) {
            neurons_ativados.push_back(this->camadasDeEstruturas.at(camada).at(i));
        }
        
    }


    return neurons_ativados;

}

