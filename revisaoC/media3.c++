#include <iostream>
#include <iomanip>
 
using namespace std;

int main() {
 
    double notaUm, notaDois, notaTreis, notaQuatro;
    double media, exame, mediaRec;

    cin >> notaUm >> notaDois >> notaTreis >> notaQuatro;

    media = ((notaUm * 2) + (notaDois * 3) + (notaTreis * 4) + (notaQuatro * 1)) / 10;
    cout << fixed << setprecision (1) << "Media: " << media << endl;

    if (media >= 7)
    {
        cout << "Aluno aprovado."<< endl;
    }
    else if (media < 5)
    {
        cout << "Aluno reprovado."<< endl; 
    }
    else if (media < 7 && media >= 5)
    {
        cout << "Aluno em exame."<< endl;
        
        cin >> exame;
        mediaRec = (exame + media) / 2;

        cout << "Nota do exame: " << exame << endl;

        if (mediaRec >= 5)
        {
            cout << "Aluno aprovado."<< endl;
        }else if (media < 5)
        {
        cout << "Aluno reprovado."<< endl; 
        }
        cout << fixed << setprecision (1) << "Media final: "<< mediaRec << endl; 
    }
}