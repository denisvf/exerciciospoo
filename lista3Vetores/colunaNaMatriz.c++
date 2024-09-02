#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;

int main () {

    int coluna;
    double matriz[12][12], resultado = 0;
    char operacao;
    
    cin >> coluna;
    cin.ignore();
    cin >> operacao;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> matriz[i][j];
        }
        resultado += matriz[i][coluna];
    }

    switch (operacao)
    {
    case 'M':
        resultado = resultado/12;
        cout << fixed << setprecision(1) << resultado <<endl;
        break;
    
    case 'S':
        cout << fixed << setprecision(1) << resultado <<endl;
        break;
    }
}