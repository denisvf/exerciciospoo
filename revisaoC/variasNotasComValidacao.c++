#include <iostream>
#include <iomanip>

using namespace std;

void leEValidaNota(double &nota){
    cin >> nota;
    if (nota < 0 || nota > 10){
        cout << "nota invalida" << endl;
        leEValidaNota(nota);
    }
}

void calculaMedia(double notaUm, double notaDois) {
    double media = (notaUm + notaDois)/2;
    cout << fixed << setprecision(2) << "media = " << media << endl;
}

int main() {

    int novoCalculo = 1;
    double notaUm, notaDois;

    do {
        leEValidaNota(notaUm);
        leEValidaNota(notaDois);
        
        calculaMedia(notaUm, notaDois);

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> novoCalculo;
        } while (novoCalculo < 1 || novoCalculo > 2);
        
    } while (novoCalculo != 2);

    return 0;
}