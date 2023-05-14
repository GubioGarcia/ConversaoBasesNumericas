#include "pilha.h"

namespace ggs {
    Pilha::Pilha(int tamanho):
        tamanho(0), array(0), topo(-1)
    {
        if (tamanho<=0) throw QString("Tamanho deve ser um número positivo e diferente de zero");
        try {
            array = new int[tamanho];
            this->tamanho = tamanho;
        } catch (std::bad_alloc &erro) {
            throw QString("Não foi possível criar a PILHA");
        }
    }

    Pilha::~Pilha(){
        if (array) delete[] array;
    }

    bool Pilha::estaCheia() const{
        return (topo==tamanho-1);
    }

    bool Pilha::estaVazia() const{
        return (topo==-1);
    }

    int Pilha::acessar() const{
        try {
            if (estaCheia()) throw QString("Pilha esta vazia");
            return array[topo];
        } catch (QString &erro) {
            throw QString("Pilha está vazia");
        }
    }

    void Pilha::empilhar(int valor){
        try {
            if (estaCheia()) throw QString("Pilha está cheia");
            this->topo++;
            array[topo] = valor;
        } catch (QString &erro) {
            throw QString("Pilha está cheia");
        }
    }

    int Pilha::desempilhar(){
        try {
            if (estaVazia()) throw QString("Pilha está vazia");
            int valor = array[topo];
            topo--;
            return valor;
        } catch (QString &erro) {
            throw QString("Pilha está vazia");
        }
    }
}
