#include <iostream>
#include <iomanip>

using namespace std;

void desenhaTracos(int quantidade){
    cout << setfill('-') << setw(quantidade) << "" << endl;
}

void desenhaLinha(int quantidade, string texto)
{
    int tamanho = texto.length(); 
    cout << "|";
    for (int i = 0; i < quantidade; i++){
        if (i == 8){
            cout << texto;
            quantidade = quantidade - tamanho;
        }
        cout << " ";
    }
    cout << "|" << endl;
}

int main()
{
    const int tracos = 39;
    const int tamanhoDaLinha = 37;

    desenhaTracos(tracos);
    desenhaLinha(tamanhoDaLinha, "Roberto");
    desenhaLinha(tamanhoDaLinha, "");
    desenhaLinha(tamanhoDaLinha, "5786");
    desenhaLinha(tamanhoDaLinha, "");
    desenhaLinha(tamanhoDaLinha, "UNIFEI");
    desenhaTracos(tracos);

    return 0;
}