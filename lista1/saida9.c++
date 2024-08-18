#include <iostream>
#include <iomanip>
 
using namespace std;
int main() {
    
    cout << setfill(' ') << setw(7) << "" << "A" << endl;
    cout << setfill(' ') << setw(6) << "" << "B B" << endl; 	
    cout << setfill(' ') << setw(5) << "" << "C   C" << endl;
    cout << setfill(' ') << setw(4) << "" << "D     D" << endl;
    cout << setfill(' ') << setw(3) << "" << "E       E" << endl;
    cout << setfill(' ') << setw(4) << "" << "D     D" << endl;
    cout << setfill(' ') << setw(5) << "" << "C   C" << endl;
    cout << setfill(' ') << setw(6) << "" << "B B" << endl; 	
    cout << setfill(' ') << setw(7) << "" << "A" << endl;

    return 0;
}