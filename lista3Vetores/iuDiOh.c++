#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> leBaralho(int numero, int atributos) {
    int valor;
    vector<vector<int>> baralho(numero, vector<int>(atributos));  

    for (int i = 0; i < numero; i++) { 
        for (int j = 0; j < atributos; j++) { 
            cin >> valor;
            baralho[i][j] = valor;
        }
    }

    return baralho;
}


int main () {

    int atributos, m, l;

    cin >> atributos;
    cin >> m >> l;

    leBaralho(m, atributos);
    leBaralho(l, atributos);
    
}