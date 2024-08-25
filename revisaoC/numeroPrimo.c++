#include <iostream>
using namespace std;

int main() {

    int casos, numero, quantidadeDeDivisores;

    cin >> casos;

    for (int i = 1; i <= casos; i++) {
        cin >> numero;
        quantidadeDeDivisores = 0;

        for (int j = 1; j <= numero; j++) {
            if (numero % j == 0) {
                quantidadeDeDivisores++;
            }
        }

        if (quantidadeDeDivisores == 2) {
            cout << numero << " eh primo" << endl;
        } else {
            cout << numero << " nao eh primo" << endl;
        }
    }

    return 0;
}
