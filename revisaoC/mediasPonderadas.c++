#include <iomanip>
#include <iostream>

using namespace std;

double tiraMedia(double um, double dois, double tres) {
    double media;

    um = um * 2;
    dois = dois * 3;
    tres = tres * 5;

    media = (um + dois + tres) / 10;

    return media;
}

int main() {

    int casos;
    double media;
    double um, dois, tres;

    cin >> casos;

    for (int i = 0; i < casos; i++) {
        cin >> um;
        cin >> dois;
        cin >> tres;

        media = tiraMedia(um, dois, tres);
    
        cout << fixed << setprecision(1) << media << endl;
    }

    return 0;
}