/* Feito em aula */
#include <iostream>

using namespace std;

int main()
{
    int m[9][9];
    bool ocorreu[10];
    int n, it, k;
    bool valida;
    cin >> n;
    for (it = 0; it < n; it++)
    {
        // ler matriz
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                cin >> m[i][j];

        // checar a validade
        valida = true;

        // validar linhas
        for (int i = 0; i < 9 && valida; i++)
        {
            // inicializando o vetor de ocorrencia
            for (k = 1; k < 10; k++)
                ocorreu[k] = false;

            for (int j = 0; j < 9 && valida; j++)
            {
                int dig = m[i][j];
                if (!ocorreu[dig])
                    ocorreu[dig] = true;
                else
                    valida = false;
            }
        }
        // validar colunas
        for (int j = 0; j < 9 && valida; j++)
        {
            // inicializando o vetor de ocorrencia
            for (k = 1; k < 10; k++)
                ocorreu[k] = false;

            for (int i = 0; i < 9 && valida; i++)
            {
                int dig = m[i][j];
                if (!ocorreu[dig])
                    ocorreu[dig] = true;
                else
                    valida = false;
            }
        }
        // validar sub-matrizes
        for (int i0 = 0; i0 < 9 && valida; i0 += 3)
            for (int j0 = 0; j0 < 9 && valida; j0 += 3)
            {
                // inicializando o vetor de ocorrencia
                for (k = 1; k < 10; k++)
                    ocorreu[k] = false;
                for (int i = 0; i < 3 && valida; i++)
                    for (int j = 0; j < 3 && valida; j++)
                    {
                        int dig = m[i + i0][j + j0];
                        if (!ocorreu[dig])
                            ocorreu[dig] = true;
                        else
                            valida = false;
                    }
            }

        cout << "Instancia " << it + 1 << endl;
        cout << (valida ? "SIM" : "NAO") << endl
             << endl;
    }

    return 0;
}
