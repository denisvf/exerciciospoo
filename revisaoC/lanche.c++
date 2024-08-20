#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    int codigo;
    int quantidade;
    double preco;
    double total;

    cin >> codigo;
    cin >> quantidade;

    switch (codigo) {
    case 1:
        preco = 4;
        break;
    case 2:
        preco = 4.50;
        break;
    case 3:
        preco = 5;
        break;
    case 4:
        preco = 2;
        break;
    case 5:
        preco = 1.50;
        break;
    default:
        break;
    }

    total = preco * quantidade;

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
