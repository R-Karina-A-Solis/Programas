#include <iostream>
using namespace std;

int main() {
    const int n = 5; 
    int a[n], b[n];  
    int suma[n];    

    cout << "Ingrese los elementos del vector A y B:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
        cout << "b[" << i << "]: ";
        cin >> b[i];
    }

    int productoEscalar = 0;

    cout << "\nSuma de elementos (a[i] + b[i]):\n";
    for (int i = 0; i < n; i++) {
        suma[i] = a[i] + b[i];
        productoEscalar += a[i] * b[i];
        cout << "suma[" << i << "] = " << suma[i] << endl;
    }

    cout << "\nProducto escalar: " << productoEscalar << endl;

    return 0;
}

