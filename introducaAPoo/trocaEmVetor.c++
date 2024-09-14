#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;

int main () {

    vector<int> numeros(20);
    int final = 20;
    int inicio = 0;

    for (int i = 0; i < numeros.size(); i++){
        cin >> numeros[i];
    }

    for (int i = 0; i < numeros.size() / 2; i++){
        swap(numeros[i], numeros[numeros.size() - i - 1]);
    }

    for (int i = 0; i < numeros.size(); i++)
    {
        cout << "N[" << i << "] = " << numeros[i] <<endl; 
    }
    
}