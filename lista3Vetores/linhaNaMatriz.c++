// Neste problema você deve ler um número, indicando uma linha da matriz na qual uma
// operação deve ser realizada, um caractere maiúsculo, indicando a operação que será
// realizada, e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre
// a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso.
//  A imagem abaixo ilustra o caso da entrada do valor 2 para a linha da matriz, demonstrando
// os elementos que deverão ser considerados na operação.

#include <iostream>
#include <iomanip>
 
using namespace std;

int main () {

    int linha;
    double matriz[12][12], resultado = 0;
    char operacao;
    
    cin >> linha;
    cin.ignore();
    cin >> operacao;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int j = 0; j < 12; j++) {
        resultado += matriz[linha][j];
    }

    switch (operacao) {
    case 'M':
        resultado = resultado/12;
        cout << fixed << setprecision(1) << resultado <<endl;
        break;
    
    case 'S':
        cout << fixed << setprecision(1) << resultado <<endl;
        break;
    }
}