#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    int resultado;

    cin >> n;

    for (int i = 1; i <= 10; i++){
        resultado = i * n;
        cout << i << " x " << n << " = " << resultado << endl;
    }
    
}
