#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    double a, b, c, xUm, xDois;
    double delta, denominador;

    cin >> a >> b >> c;

    denominador = 2 * a;
    delta = (pow(b, 2) - (4 * a * c));

    if (delta < 0 || denominador == 0) {
        cout << "Impossivel calcular" << endl;
    }
    else {
        delta = sqrt(delta);
        xUm = (-b + delta) / (denominador);
        xDois = (-b - delta) / (denominador);
        cout << fixed << setprecision(5) << "R1 = " << xUm << endl << "R2 = " << xDois << endl;
    }

    return 0;
}