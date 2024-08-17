#include <iostream>
#include <iomanip>

using namespace std;

void desenhaTracos(int quantidade)
{
    for (int i = 0; i < quantidade; i++){
        cout << "-";
    }
    cout << endl;
}

void desenhaLinha(int quantidade)
{
    cout << "|";
    for (int i = 0; i < quantidade; i++){
        cout << " ";
    }
    cout << "|" << endl;
}

int main()
{

    const int tracos = 39;
    const int tamanhoDaLinha = 37;

    desenhaTracos(tracos);
    for (int i = 0; i <= 4; i++){
        desenhaLinha(tamanhoDaLinha);
    }
    desenhaTracos(tracos);

    return 0;
}