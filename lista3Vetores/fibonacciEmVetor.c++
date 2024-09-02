#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;

int main () {

    int n, testes;
    long long int sequencia[100], fibonacci;
    
    cin >> testes;

    for (int i = 0; i < testes; i++)
    {
        cin >> n;

        sequencia[0] = 0;
        sequencia[1] = 1;

        if (n == 0)
        {
            fibonacci = 0;
        }
        if (n == 1 || n == 2)
        {
            fibonacci = 1;
        }
        for (int j = 2; j <= n; j++)
        {
            sequencia[j] = sequencia[j-1] + sequencia[j-2];
            fibonacci = sequencia[j];
        }
        cout << "Fib(" << n << ") = " << fibonacci <<endl;
    }
}