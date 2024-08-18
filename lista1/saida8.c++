#include <iostream>
#include <iomanip>
 
using namespace std;

int main () {

    char aspas = ("%c", 34);
    char underline = ("%c", 95);

    cout << aspas << "Ro'b'er\tto\\/" << aspas << endl;
    cout << "(._.) ( l: ) ( .-. ) ( :l ) (._.)" << endl;
    cout << "(^_-) (-_-) (-_^)" << endl;
    cout << "(" << aspas << underline << aspas << ")" << " " << "('.')" << endl;

    return 0;
}
