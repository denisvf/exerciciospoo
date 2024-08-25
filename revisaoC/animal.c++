#include <iostream>
#include <iomanip>
 
using namespace std;

int main() {

    string valorUm, valorDois, valorTres, animal;

    cin >> valorUm >> valorDois >> valorTres;

    if (valorUm == "vertebrado")
    {
        if (valorDois == "ave")
        {
            if (valorTres == "carnivoro")
                animal = "aguia";
            else if (valorTres == "onivoro")
                animal = "pomba";
        }
        else if (valorDois == "mamifero")
        {
            if (valorTres == "herbivoro")
                animal = "vaca";
            else if (valorTres == "onivoro")
                animal = "homem";
        }
        
    }
    if (valorUm == "invertebrado")
    {
        if (valorDois == "inseto")
        {
            if (valorTres == "hematofago")
                animal = "pulga";
            else if (valorTres == "herbivoro")
                animal = "lagarta";
        }
        else if (valorDois == "anelideo")
        {
            if (valorTres == "hematofago")
                animal = "sanguessuga";
            else if (valorTres == "onivoro")
                animal = "minhoca";
        }
    }
    cout << animal << endl;

    return 0;
}