#ifndef CIRCLIST_H
#define CIRCLIST_H

#include <iostream>
#include "../Lista/Nodo.h"

template<class T>
class CircList {
private:
    Nodo <T> *puntero;
public:
    CircList();

    CircList(const CircList<T> &li);

    ~CircList();

    bool esVacia();

    int getTamanio();

    void insertar(T dato);

    void avanzar();

    T getDato();

    void vaciar();

    void remover();

    void reemplazar(T dato);
};

template<class T>
CircList<T>::CircList() {
    puntero = NULL;
}

template<class T>
CircList<T>::CircList(const CircList<T> &li) {

}

template<class T>
CircList<T>::~CircList() {
    vaciar();
}

template<class T>
bool CircList<T>::esVacia() {
    return puntero == NULL;
}

template<class T>
int CircList<T>::getTamanio() {
    int cont = 1;
    Nodo <T> *aux = puntero;

    if (NULL == puntero) {
        return 0;
    }
    while (aux->getNext() != puntero) {
        cont++;
        aux = aux->getNext();
    }
    return cont;
}

template<class T>
void CircList<T>::insertar(T dato) {
    if (puntero == NULL) {
        puntero = new Nodo<T>(dato, puntero);
        return;
    }
    Nodo <T> *aux = new Nodo<T>(dato, puntero->getNext());
    puntero->setNext(aux);
    puntero = puntero->getNext();
}

template<class T>
T CircList<T>::getDato() {
    if (puntero == NULL)throw 1;
    return puntero->getDato();
}

template<class T>
void CircList<T>::vaciar() {
    while (!esVacia()) {
        remover();
    }
}

template<class T>
void CircList<T>::avanzar() {
    if (puntero != NULL) {
        puntero = puntero->getNext();
    }
    //Si es NULL no hace nada
}

template<class T>
void CircList<T>::remover() {
    Nodo <T> *aux = puntero;

    if (puntero == NULL)return;

    while (aux->getNext() != puntero)aux = aux->getNext();
    
    if (aux == puntero) {
        delete puntero;
        puntero = NULL;
        return;
    }
    
    aux->setNext(puntero->getNext());
    delete puntero;
    puntero = aux->getNext();
}

template<class T>
void CircList<T>::reemplazar(T dato) {
    if (puntero == NULL)throw 1;
    puntero->setDato(dato);
}

#endif //CIRCLIST_H
