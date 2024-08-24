#include <iomanip>
#include <iostream>

using namespace std;

void mostraValores(int numeros[3]) {
    cout << numeros[0] << endl << numeros[1] << endl << numeros[2] << endl;
}

void ordenar(int original[3], int clone[3]) {
    int temp;

    for (int i = 0; i < 3; i++) {
        clone[i] = original[i];
    }

    for (int i = 0; i < 2; i++) {  
        for (int j = i + 1; j < 3; j++) {
            if (clone[i] > clone[j]) {
                temp = clone[i];
                clone[i] = clone[j];
                clone[j] = temp;
            }
        }
    }
}

int main() {
    int um, dois, tres;
    int numeros[3], arrayOrdenado[3];

    cin >> um >> dois >> tres;

    numeros[0] = um;
    numeros[1] = dois;
    numeros[2] = tres;

    ordenar(numeros, arrayOrdenado);
    
    mostraValores(arrayOrdenado);      
    cout << endl;
    mostraValores(numeros);

    return 0; 
}
