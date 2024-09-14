#include <iostream>

using namespace std;

int main(void) {
    int x, y;
    bool ehIgual = false;

    while (!ehIgual) {
        cin >> x;
        cin >> y;
        if (x == y) {
            ehIgual = true;
        } else if (x > y) {
           cout << "Decrescente" << endl;
        } else {
           cout << "Crescente" << endl;
        }
    }
    return 0;
}