#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista<T>* lisC = new Lista<T>;
    int fin=lisA.getTamanio();
    for(int i=0;i<fin;i++)
        lisC->insertarUltimo(lisA.getDato(i));
    fin=lisB.getTamanio();
    for(int i=0;i<fin;i++)
        lisC->insertarUltimo(lisB.getDato(i));
    return lisC;
}


#endif //UNION_H
