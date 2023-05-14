#ifndef PILHA_H
#define PILHA_H

#include <QString>
#include <QMessageBox>

namespace ggs {
    class Pilha
    {
    private:
        int tamanho;
        int *array;
        int topo;
    public:
        Pilha(int tamanho);
        ~Pilha();
        bool estaCheia() const;
        bool estaVazia() const;
        int acessar() const;
        void empilhar(int valor);
        int desempilhar();
    };
}

#endif // PILHA_H
