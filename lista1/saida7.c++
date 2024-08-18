#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void mostraAlfabeto(int contador, vector<char> alfabeto) {
    for (int i = 0; i <= alfabeto.size()-1 ; i++){
        char letra = alfabeto[i];
        cout << contador << " e " << letra << endl;
        contador++;
    }
}

vector<char> getAlfabeto(){
    vector<char> alfabeto;
    char letra = 'a';

    while (letra <= 'z'){ 
        alfabeto.push_back(letra);
        letra++;
    }
    return alfabeto; 
}

int main(){
    vector<char> alfabeto = getAlfabeto();
    mostraAlfabeto(97, alfabeto);
    return 0;
}
