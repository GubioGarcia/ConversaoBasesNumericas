#ifndef CONVERSAOBASE_H
#define CONVERSAOBASE_H

#include <QString>
#include <pilha.h>
#include <mainwindow.h>

namespace ggs{
    class ConversaoBase
    {
    private:
        int numero;
        int base;
    public:
        ConversaoBase(int numero, int base);
        QString calcularConversao()const;
    };
}

#endif // CONVERSAOBASE_H
