#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main() {
    string fraseUm, fraseDois, fraseTres;
    vector<string> frases;
    
    frases.reserve(3);

    getline(cin, fraseUm);
    getline(cin, fraseDois);
    getline(cin, fraseTres);

    // o move remove a frase do seu local de memoria atual e à aloca no vetor
    frases.push_back(move(fraseUm));
    frases.push_back(move(fraseDois));
    frases.push_back(move(fraseTres));

    cout << frases[0] << frases[1] << frases[2] << endl;
    cout << frases[1] << frases[2] << frases[0] << endl;
    cout << frases[2] << frases[0] << frases[1] << endl;

    for (string &frase : frases) {
        if (frase.size() > 10) {
            frase.erase(10);
        }
    }
    
    cout << frases[0] << frases[1] << frases[2] << endl;
    
    return 0;
}
