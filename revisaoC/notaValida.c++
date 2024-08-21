#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double nota;
    double soma = 0.0;
    double media;
    int notasValidas = 0;
    bool notaValida;

    while (notasValidas < 2)
    {
        cin >> nota;
        notaValida = (nota >= 0 && nota <= 10); 

        if (!notaValida) {
            cout << "nota invalida" << endl;
        }
        else {
            soma += nota;
            notasValidas++;
        }
    }

    media = soma / 2;

    cout << "media = " << fixed << setprecision(2) << media << endl;

    return 0;
}