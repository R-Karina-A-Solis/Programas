#include <iostream>
using namespace std;


float area(float pi, float radio) {
    return pi * radio * radio;
}

int main() {
    float pi = 3.14;
    float radio;
    float resultado;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    resultado = area(pi, radio);


    cout << "El area del circulo es: " << resultado << endl;

    return 0;
}

