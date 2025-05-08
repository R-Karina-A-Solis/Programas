#include <iostream>
using namespace std;

int main() {
    int tamano = 10;
    int arreglo1[tamano];
    int arreglo2[tamano];
    int coincidencias = 0;

    cout << "Llenando el primer arreglo:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "Ingresa el elemento " << i + 1 << " del primer arreglo: ";
        cin >> arreglo1[i];
    }

    cout << "\nLlenando el segundo arreglo:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "Ingresa el elemento " << i + 1 << " del segundo arreglo: ";
        cin >> arreglo2[i];
    }

    for (int i = 0; i < tamano; i++) {
        if (arreglo1[i] == arreglo2[i]) {
            coincidencias++;
        }
    }

    cout << "\nCantidad de elementos iguales en la misma posicion: " << coincidencias << endl;

    return 0;
}

