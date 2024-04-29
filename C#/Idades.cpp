#include <bits/stdc++.h>

using namespace std;

int main()
{
    int contador1, pessoas;
    double soma = 0, média;

    cout << "A média será de quantas pessoas: ";
    cin >> pessoas;
    int idade[pessoas];
    string nomes[pessoas];

    for (contador1 = 0; contador1 < pessoas; contador1++)
    {
        cin.ignore(INT_MAX, '\n');
        cout << "Nome: ";
        getline(cin, nomes[contador1]);
        cout << "Idade: ";
        cin >> idade[contador1];
        soma = soma + idade[contador1];
    }
    média = soma / pessoas;
    cout << "A idade média das pessoas";
    for (contador1 = 0; contador1 < pessoas; contador1++)
    {
        if (contador1 == pessoas - 1)
        {
            cout << " e de ";
        }
        else if (contador1 < pessoas)
        {
            cout << ", ";
        }
        cout << nomes[contador1];
    }
    cout << " eh de " << média << endl;
}