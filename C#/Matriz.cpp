#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ordem, contador1, contador2, negativos = 0;

    cout << "Ordem da Matriz: ";
    cin >> ordem;
    int valores[ordem*ordem], diagonalP[ordem];
    for (contador1 = 0; contador1 < ordem; contador1++)
    {
        for (contador2 = 0; contador2 < ordem; contador2++)
        {
            cout << "Elemento [" << contador1 << "," << contador2 << "]:";
            cin >> valores[contador2];
                if (valores[contador2] < 0)
                {
                    negativos= negativos + 1;
                }
                if (contador1 == contador2)
                {
                    diagonalP[contador2] = valores[contador2];
                }
        }
    }
    cout << "DIAGONAL PRINCIPAL:" << endl;
    for (contador1 = 0; contador1 < ordem; contador1++)
    {
        cout << diagonalP[contador1] << " ";
    }
    cout << endl;
    cout << "QUANTIDADE DE NEGATIVOS = " << negativos << endl;
}
