#include <iostream>
#include <iomanip>

using namespace std;

void desenhaTracos(int quantidade){
    cout << setfill('-') << setw(quantidade) << "" << endl;
}

void desenhaHeader(){
    cout << "|" << setfill(' ') << setw(2) << "" << "decimal" << setw(2) << "";
    cout << "|" << setfill(' ') << setw(2) << "" << "octal" << setw(2) << "";
    cout << "|" << setfill(' ') << setw(2) << "" << "Hexadecimal" << setw(2) << "" <<"|";
    cout << endl;
}

void desenhaLinha(string dec, string oct, string hex){
    int decw = 6;
    int octw = 4;
    int hexw = 7;

    dec.length() == 2 ? decw -= 1 : decw = 6;
    oct.length() == 2 ? octw -= 1 : octw = 4;
    hex.length() == 2 ? hexw -= 1 : hexw = 7;

    cout << "|" << setfill(' ') << setw(decw) << "" << dec << setw(4) << "";
    cout << "|" << setfill(' ') << setw(octw) << "" << oct << setw(4) << "";
    cout << "|" << setfill(' ') << setw(hexw) << "" << hex << setw(7) << "" <<"|";
    cout << endl;
}

int main()
{

    const int tracos = 39;

    desenhaTracos(tracos);
    desenhaHeader();
    desenhaTracos(tracos);
    desenhaLinha("0", "0", "0");
    desenhaLinha("1", "1", "1");
    desenhaLinha("2", "2", "2");
    desenhaLinha("3", "3", "3");
    desenhaLinha("4", "4", "4");
    desenhaLinha("5", "5", "5");
    desenhaLinha("6", "6", "6");
    desenhaLinha("7", "7", "7");
    desenhaLinha("8", "10", "8");
    desenhaLinha("9", "11", "9");
    desenhaLinha("10", "12", "A");
    desenhaLinha("11", "13", "B");
    desenhaLinha("12", "14", "C");
    desenhaLinha("13", "15", "D");
    desenhaLinha("14", "16", "E");
    desenhaLinha("15", "17", "F");
    desenhaTracos(tracos);

    return 0;
}
