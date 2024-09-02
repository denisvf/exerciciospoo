#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// VETORES,MATRIZES,STRING

// Vetores
//   variavel indexada, onde todas sao do mesmo tipo.

// na declaração precisa estimar o tamanho maximo do vetor.

// ex:
  double vet[200];
  int a[1000], b[100];

// Matrizes
//   são variavies com mais de 1 indice, onde todas sao do mesmo tipo.
// ex:
   double a[100][100],b[100][100];
   string agenda[2030][12][31][24];
   char letras[100];  //eh um vetor e eh uma matriz de um unico indice

// string:
//    em c++ existe o tipo string, que representa um sequencia 
//    de caracteres. Entretanto, temos que ter em mente, que
//    a manipulação de string em vetor eh mais eficiente que 
//    em string.

//    para pegar uma string e pegar o vetor interno de sequencia de caracteres
//    usamos o c_str().
//    ex:
void pegandoVetorInterno() {
      string nome;
      nome = "jou a kim";
      cout << nome << endl;
      cout << nome.c_str() << endl;
      
      nome = nome + " da silva";
      nome = " da silva" + nome;
      cout << nome << endl;

//   operadores relacionas funcionam para objetos do tipo string
//   ex:
    if (nome == "jou a kim da silva")
        cout << "eh ele!!!!!";
    if (nome < "kelly")
        cout << "vem antes da kelly!!!";
    if (nome.length() > strlen("kelly"))
        cout << nome << " tem mais letras que a kelly!" << endl;
        
    for(int i = 0; i<nome.length(); i++)
        cout << nome[i] << endl;
}
         
// ex:

int main() {
    string nome;
    nome = "Jou "
           "a Kim";
    nome = nome + " da Silva 123 de Ol1v31r@ 4";
    nome = "Senhor " + nome; 
    cout << nome << endl;

    for(int i=0;i<nome.length();i++) {
         cout << nome[i] << "-" << nome.at(i) << endl;
         if (islower(nome[i]))       
           nome[i]='_';
    }

    cout << nome << endl;
    return 0;
}
     