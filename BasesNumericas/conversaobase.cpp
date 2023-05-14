#include "conversaobase.h"

namespace ggs {
    ConversaoBase::ConversaoBase(int numero, int base):
        numero(numero),
        base(base)
    {}

    QString ConversaoBase::calcularConversao() const{
        Pilha pilha(100);
        int quociente = numero;
        while (quociente > 0){
            pilha.empilhar(quociente%base);
            quociente = quociente/base;
        }

        QString strAux = "0123456789ABCDEF";
        QString numeroStr = "";
        while(!pilha.estaVazia()){
            numeroStr += strAux[pilha.desempilhar()];
        }

        return numeroStr;
    }
}
