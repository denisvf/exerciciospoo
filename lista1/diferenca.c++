#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    int d;
    int produtoAB;
    int produtoCD;
    int diferenca;

    cin >> a >> b >> c >> d;

    produtoAB = a*b; 
    produtoCD = c*d;
    diferenca = produtoAB - produtoCD; 

    cout << fixed << setprecision (1);
    cout << "DIFERENCA = " << diferenca << endl;

    return 0;
}