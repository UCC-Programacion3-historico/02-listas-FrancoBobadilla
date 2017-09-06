#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

using namespace std;

int main() {

    Lista<int> a,b;

    a.insertarUltimo(4);
    a.insertarUltimo(1);
    a.insertarUltimo(7);
    a.insertarUltimo(0);

    b.insertarUltimo(2);
    b.insertarUltimo(3);
    b.insertarUltimo(9);
    b.insertarUltimo(8);
    b.insertarUltimo(5);

    Lista<int> *c = unir(a,b);

    for(int i=0; i<9 ;i++)
        cout<<c->getDato(i)<<endl;

    return 0;
}