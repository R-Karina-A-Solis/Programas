#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingresa la nota: ";
    cin >> nota;

    if (nota > 10) {
        cout << "Aprobado";
    } else {
        cout << "Desaprobado";
    }

    return 0;
}
