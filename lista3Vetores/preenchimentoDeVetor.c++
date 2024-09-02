// Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores
// forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições.
// Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo
// novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo
// que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser
// preenchido tantas vezes quantas for necessário.

#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

void imprimeRestante(int contador, vector<int> array, bool par) {

    string texto = par ? "par" : "impar";

    for (int i = 0; i < contador; i++) {
        cout << texto << "[" << i << "] = " << array[i] << endl;
    }
}

void preencheVetor(int &contador, vector<int> &array, int numero, bool par) {

    string texto = par ? "par" : "impar"; 

    array[contador] = numero;
    contador++;

    if (contador == 5) {
        for (int j = 0; j < 5; j++) {
            cout << texto << "[" << j << "] = " << array[j] << endl;
        }
        contador = 0;
    }
}

int main() {

    int numero;
    int contadorPares = 0;
    int contadorImpares = 0;
    vector<int> pares(5);
    vector<int> impares(5);
    bool par;

    for (int i = 0; i < 15; i++) {
        cin >> numero;
        par = numero % 2 == 0;

        if (par) {
            preencheVetor(contadorPares, pares, numero, par);
        } else {
            preencheVetor(contadorImpares, impares, numero, par);
        }
    }

    imprimeRestante(contadorImpares, impares, false);
    imprimeRestante(contadorPares, pares, true);

    return 0;
}