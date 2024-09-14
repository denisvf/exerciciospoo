#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main() {

    int casos, saltos;
    string texto;

    cin >> casos >> ws;

    for (int i = 0; i < casos; i++) {
        cin >> saltos >> ws;
        getline(cin, texto);

        for (char &caracter : texto) {
            caracter = (caracter - 'A' - saltos + 26) % 26 + 'A';
        }

        cout << texto << endl;
    }
    return 0;
}
