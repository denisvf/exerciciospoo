#include <iostream>
#include <iomanip>
 
using namespace std;

int main() {
    
    int ddd;
    string cidade;

    cin >> ddd;

    switch (ddd)
    {
    case 61:
        cidade = "Brasilia";
        break;
    case 71:
        cidade = "Salvador";
        break;
    case 11:
        cidade = "Sao Paulo";  
        break;
    case 21:
        cidade = "Rio de Janeiro";
        break;
    case 32:
        cidade = "Juiz de Fora";
        break;
    case 19:
        cidade = "Campinas";
        break;
    case 27:
        cidade = "Vitoria";
        break;
    case 31:
        cidade = "Belo Horizonte";
        break;
    default:
        cout << "DDD nao cadastrado" <<endl;
        exit(0);
        break;
    }
        cout << cidade << endl;

    return 0;
}