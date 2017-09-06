#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

int main() {
    Lista<int> l;
    int n = 0;
    while (n == 0) {
        cout
                << "\nSeleccione una opcion:\n "
                        "1)Agregar valor entero al final de la lista\n "
                        "2)Agregar valor entero al principio de la lista\n "
                        "3)Agregar valor entero a la mitad de la lista\n "
                        "4)Eliminar elemento de la lista\n "
                        "5)Mostrar valor de la lista\n "
                        "6)Obtener tamaño de la lista\n "
                        "7)Mostrar toda la lista\n "
                        "8)Salir\n ";
        cin >> n;
        switch (n) {
            case 1: {
                cout << "\nIngrese enteros a agregar (ingrese -1 para finalizar): " << endl;
                while (n != -1) {
                    cin >> n;
                    if (n != -1) l.insertarUltimo(n);
                }
                n = 0;
                break;
            }
            case 2: {
                cout << "\nIngrese enteros a agregar (ingrese -1 para finalizar): " << endl;
                while (n != -1) {
                    cin >> n;
                    if (n != -1) l.insertarPrimero(n);
                }
                n = 0;
                break;
            }
            case 3: {
                cout << "\nIngrese enteros a agregar (ingrese -1 para finalizar): " << endl;
                while (n != -1) {
                    cin >> n;
                    if (n != -1) l.insertar(l.getTamanio() / 2, n);
                }
                n = 0;
                break;
            }
            case 4: {
                cout << "\nIngrese posicion del elemento a borrar: " << endl;
                cin >> n;
                try {
                    l.remover(n);
                    cout << endl << "Elemento removido" << endl;
                } catch (int e) {
                    cout << "\nERROR " << e << ": Fuera de rango" << endl;
                }
                n = 0;
                break;
            }
            case 5: {
                cout << "\nIngrese posicion del elemento a mostrar: " << endl;
                cin >> n;
                try {
                    cout << "\n Elemento " << n << ": " << l.getDato(n) << endl;
                } catch (int e) {
                    cout << "\nERROR " << e << ": Fuera de rango" << endl;
                }
                n = 0;
                break;
            }
            case 6: {
                cout << "\nTamaño de la lista: " << l.getTamanio() << endl;
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