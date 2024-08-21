#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int fatorial = 1;

    cin >> n;

    for (int i = 1; i <= n; i++){
        fatorial = fatorial * i;
    }

    cout << fatorial << endl;
}
