#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main () {

    int casos;
    string texto;
    bool ehLetraMinuscula, ehLetraMaiuscula;

    cin >> casos >> ws;

    for (int i = 0; i < casos; i++) {
        getline(cin, texto);

        for (char &caracter : texto) {     
            ehLetraMinuscula = caracter >= 'a' && caracter <= 'z';
            ehLetraMaiuscula = caracter >= 'A' && caracter <= 'Z';

            if (ehLetraMinuscula || ehLetraMaiuscula ) { 
                caracter = caracter + 3;
            }
        }

        reverse(texto.begin(), texto.end());

        for (int j = (texto.length() / 2); j < texto.length(); j++) { 
            texto[j] = texto[j] - 1;
        }
        cout << texto << endl;
    }    
    return 0;
}
