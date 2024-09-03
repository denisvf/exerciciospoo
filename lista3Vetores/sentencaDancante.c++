#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main() {

    int casos, contador;
    bool ehPar;
    string texto;

    cin >> casos >> ws;

    for (int i = 0; i < casos; i++) {
        getline(cin, texto);

        contador = 0;

        for (char &caracter : texto) {
            ehPar = contador%2 == 0;

            if (isalpha(caracter)) {
                if (ehPar) {
                    caracter = toupper(caracter);
                } else {
                    caracter = tolower(caracter);
                }
                contador++;
            } else if (caracter == ' ') {
                contador = 0;
            }
        }
        cout << texto << endl;
    }
    return 0;
}
