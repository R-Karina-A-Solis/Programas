#include <iostream>
using namespace std;

int main(){
    int tamano = 30;
    int suma = 0;
    int arr[tamano];

    for (int i = 0; i < tamano; i++) {
        cout << "Ingresa la calificacion del estudiante " << i + 1 << ": ";
        cin >> arr[i];
        suma += arr[i];
    }

    int promedio = suma / tamano;
    
    int estudiantesSobrePromedio = 0;
    for (int i = 0; i < tamano; i++) {
        if (arr[i] > promedio) {
            estudiantesSobrePromedio++;
        }
    }

    cout << "El promedio es: " << promedio << endl;
    cout << "Cantidad de estudiantes con calificación superior al promedio: " 
         << estudiantesSobrePromedio ;

    return 0;
}

