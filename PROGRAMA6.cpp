#include <iostream>
#include <cstdlib> 
#include <ctime>    
using namespace std;

int esPrimo(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    const int tamano = 100; 
    int arr[tamano];
    int contadorPrimos = 0;
    
    srand(time(0));

    for (int i = 0; i < tamano; i++) {
        arr[i] = rand() % 500 + 1;
    }
    
    cout << "Numeros generados:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < tamano; i++) {
        if (esPrimo(arr[i])) {
            contadorPrimos++;
        }
    }
    
    cout << "Cantidad de numeros primos :" << contadorPrimos ;
    
    return 0;
}

