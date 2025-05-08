#include <iostream>
using namespace std;

int main() {
    const int tamano = 20;
    int arr[tamano];

    for (int i = 0; i < tamano; i++) {
        cout << "Ingresa un numero entero (" << i + 1 << "/" << tamano << "): ";
        cin >> arr[i];
    }

    cout << "\nFrecuencia de cada numero distinto:" << endl;
    for (int i = 0; i < tamano; i++) {
        bool yaContado = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                yaContado = true;
                break;
            }
        }

        if (!yaContado) {
            int frecuencia = 1;
            for (int k = i + 1; k < tamano; k++) {
                if (arr[i] == arr[k]) {
                    frecuencia++;
                }
            }
            cout << "El numero " << arr[i] << " aparece " << frecuencia << " veces." << endl;
        }
    }

    return 0;
}

