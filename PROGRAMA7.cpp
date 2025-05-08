#include <iostream>
using namespace std;

int main() {
    const int tamano = 10;
    int arr[tamano];

    for (int i = 0; i < tamano; i++) {
        cout << "Ingresa un numero entero (" << i + 1 << "/" << tamano << "): ";
        cin >> arr[i];
    }

    int ultimo = arr[tamano - 1];
    
    for (int i = tamano - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = ultimo;

    cout << "Arreglo rotado:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

