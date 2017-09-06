#include <iostream>
#include "../Lista/Lista.h"
#include "../01_Invierte/fnInvierte.h"

using namespace std;

bool insertAfter(int, int, int, Lista<int> *);

int main() {
    Lista<int> l;
    int n = 0;
    while (n == 0) {
        cout << endl << "Seleccione una opcion:\n "
                "1)Agregar valor entero al final de la lista\n "
                "2)Agregar valor entero al principio de la lista\n "
                "3)Agregar valor entero a la mitad de la lista\n "
                "4)Eliminar elemento de la lista\n "
                "5)Mostrar valor de la lista\n "
                "6)Obtener tamaño de la lista\n "
                "7)Mostrar toda la lista\n "
                "8)Invertir lista\n "
                "9)InsertAfter\n "
                "10)Salir\n ";
        cin >> n;
        switch (n) {
            case 1: {
                cout << endl << "Ingrese enteros a agregar (ingrese -1 para finalizar): " << endl;
                while (n != -1) {
                    cin >> n;
                    if (n != -1) l.insertarUltimo(n);
                }
                n = 0;
                break;
            }
            case 2: {
                cout << endl << "Ingrese enteros a agregar (ingrese -1 para finalizar): " << endl;
                while (n != -1) {
                    cin >> n;
                    if (n != -1) l.insertarPrimero(n);
                }
                n = 0;
                break;
            }
            case 3: {
                cout << endl << "Ingrese enteros a agregar (ingrese -1 para finalizar): " << endl;
                while (n != -1) {
                    cin >> n;
                    if (n != -1) l.insertar(l.getTamanio() / 2, n);
                }
                n = 0;
                break;
            }
            case 4: {
                cout << endl << "Ingrese posicion del elemento a borrar: " << endl;
                cin >> n;
                try {
                    l.remover(n);
                    cout << endl << "Elemento removido" << endl;
                } catch (int e) {
                    cout << endl << "ERROR " << e << ": Fuera de rango" << endl;
                }
                n = 0;
                break;
            }
            case 5: {
                cout << endl << "Ingrese posicion del elemento a mostrar: " << endl;
                cin >> n;
                try {
                    cout << endl << " Elemento " << n << ": " << l.getDato(n) << endl;
                } catch (int e) {
                    cout << endl << "ERROR " << e << ": Fuera de rango" << endl;
                }
                n = 0;
                break;
            }
            case 6: {
                cout << endl << "Tamaño de la lista: " << l.getTamanio() << endl;
                n = 0;
                break;
            }
            case 7: {
                n = 0;
                int fin = l.getTamanio();
                while (n < fin) {
                    cout << endl << l.getDato(n);
                    n++;
                }
                cout << endl;
                n = 0;
                break;
            }
            case 8: {
                fnInvierte(&l);
                cout << endl << "Lista invertida" << endl;
                n = 0;
                break;
            }
            case 9: {
                int oldValue, newValue;
                cout << endl << "Ingrese nuevo valor a insertar:"<<endl;
                cin >> newValue;
                cout << endl << "Ingrese valor a contar: "<<endl;
                cin >> oldValue;
                cout << endl << "Ingrese la cantidad de elementos a contar: "<<endl;
                cin >> n;
                if (insertAfter(oldValue, n, newValue, &l))
                    cout << endl << "Nuevo valor insertado" << endl;
                else
                    cout << endl << "No se logro insertar el nuevo valor" << endl;
                n = 0;
                break;
            }
            case 10: {
                n = 1;
                break;
            }
            default: {
                n = 0;
                break;
            }
        }
    }
    return 0;
}

bool insertAfter(int oldValue, int n, int newValue, Lista<int> *l) {
    int fin = l->getTamanio();
    for (int i = 0; i < fin || n == 0; i++) {
        if (l->getDato(i) == oldValue) {
            n--;
        }
        if (n == 0) {
            l->insertar(i, newValue);
            return true;
        }
    }
    return false;
}