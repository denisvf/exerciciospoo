#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main () {

    int casos;
    string texto; 
    string resultado;
    bool ehLetraMinuscula;

    cin >> casos >> ws;

    for (int i = 0; i < casos; i++) {
        resultado = "";
        getline(cin, texto);

        for (char &caracter : texto) {     
            ehLetraMinuscula = caracter >= 'a' && caracter <= 'z';

            if (ehLetraMinuscula) { 
                resultado += caracter;
            }
        }

        reverse(resultado.begin(), resultado.end());

        cout << resultado << endl;
    }    
    return 0;
}
