#include<iostream>
#include<iomanip>

using namespace std;

int main () {
    const double pi = 3.14159;
    double raio;
    double area; 

    cin >> raio;

    area = (raio * raio) * pi;

    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}