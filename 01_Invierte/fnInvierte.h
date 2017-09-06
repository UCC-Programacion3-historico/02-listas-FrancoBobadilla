#include "../Lista/Lista.h"

#ifndef FNINVIERTE_H
#define FNINVIERTE_H

#include <iostream>

using namespace std;

template<class T>
void fnInvierte(Lista<T> *lis);

template<class T>
void invertir(Lista<T> *, Lista<T>);


template<class T>
void fnInvierte(Lista<T> *lis) {
    Lista<T> inv(*lis);
    lis->vaciar();
    invertir(lis, &inv);
}

template<class T>
void invertir(Lista<T> *lis, Lista<T> *inv) {
    if (inv->esVacia())return;
    lis->insertarPrimero(inv->getDato(0));
    inv->remover(0);
    invertir(lis, inv);
}


#endif //FNINVIERTE_H
