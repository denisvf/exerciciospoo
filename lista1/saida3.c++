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

void desenhaLinha(string texto, int posicao, int largura){   

    largura -= 2;

    if (posicao == 0){
        cout << "|" << setfill(' ') << left << setw(largura) << texto << "|" <<endl;
    } else if (posicao == 37) {
        cout << "|" << setfill(' ') << right << setw(largura) << texto << "|" <<endl;
    } else {
        posicao = posicao - 1; 
        largura = (largura - posicao) + 1;
        cout << setfill(' ') << setw(posicao);
        cout << "|" << setfill(' ') << left << setw(largura) << texto << "|" <<endl;
    }
}

int main()
{

    const int tracos = 39;

    desenhaTracos(tracos);
    desenhaLinha("x = 35", 0, tracos);
    desenhaLinha("", 0, tracos);
    desenhaLinha("x = 35", 17, tracos);
    desenhaLinha("", 0, tracos);
    desenhaLinha("x = 35", 37, tracos);
    desenhaTracos(tracos);

    return 0;
}