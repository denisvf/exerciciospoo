#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string fraseUm = "AMO FAZER EXERCICIO NO URI";
    string fraseDois = "AMO FAZER EXERCICIO";

    cout << "<" << fraseUm << ">" << endl;
    cout << "<" << setfill(' ') << setw(4) << "" << fraseUm << ">" << endl;
    cout << "<" << fraseDois << setfill(' ') << setw(1) << "" << ">" << endl;
    cout << "<" << fraseUm << ">" << endl;
    cout << "<" << fraseUm << setfill(' ') << setw(4) << "" << ">" << endl; 
    cout << "<" << fraseUm << ">" << endl;
    cout << "<" << setfill(' ') << setw(10) << "" << fraseDois<< setfill(' ') << setw(1) << "" << ">" << endl;
    cout << "<" << fraseDois << setfill(' ') << setw(11) << "" << ">" << endl;
    
    return 0;
}