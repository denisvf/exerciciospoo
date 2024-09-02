#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    double numero;
    double a[100];

    for (int i = 0; i < 100; i++) {
        cin >> numero;
        a[i] = numero;
    
        if (a[i] <= 10.0) { 
            cout << "A[" << i << "] = ";
            cout << fixed << setprecision(1) << a[i] << endl;  
        }
    }

    return 0;
}