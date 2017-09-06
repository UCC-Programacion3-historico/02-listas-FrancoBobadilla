#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

using namespace std;

int main() {

    Lista<int> li;

    li.insertarUltimo(4);
    li.insertarUltimo(5);
    li.insertarUltimo(8);
    li.insertarUltimo(0);
    li.insertarUltimo(10);

    fnInvierte(&li);

    cout<<li.getDato(0)<<endl;
    cout<<li.getDato(1)<<endl;
    cout<<li.getDato(2)<<endl;
    cout<<li.getDato(3)<<endl;
    cout<<li.getDato(4)<<endl;

    return 0;
}