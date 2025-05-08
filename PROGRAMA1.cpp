#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingresa tres numeros: ";
    cin >> a >> b >> c;

    double promedio = (a + b + c) / 3.0;

    cout << "El promedio es: " << promedio << endl;
    return 0;
}
