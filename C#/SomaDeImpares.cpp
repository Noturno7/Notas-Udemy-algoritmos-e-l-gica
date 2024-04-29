#include <bits/stdc++.h>

using namespace std;

int main()
{
    int números, contador;
    cout << "Dígite dois números: " << endl;
    int valores[2], menor, maior;
    int soma = 0;

    for (contador = 0; contador < 2; contador++)
    {
        cin >> valores[contador];
        if (contador == 0 || valores[contador] < menor)
        {
            menor = valores[contador];
        }
        if (contador == 0 || valores[contador] > maior)
        {
            maior = valores[contador];
        }
    }

    for (int i = menor + 1; i < maior; i++)
    {
            if (i % 2 != 0)
            {
                soma += i;
            }
    }
    cout << "SOMA DOS IMPARES: " << soma << endl;
}