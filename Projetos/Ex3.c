//ex 5
// for loop para digitar 3 números e somar.

#include <stdio.h>
#include <math.h>

int main(void)
{
    int c, x = 0, soma_c = 0, y;
    printf("Quantos números serão digitados:");
    scanf("%d", &c);

    for ( y = 0; x < c; x++)
    {
        printf("Digite um número: ");
        scanf("%d", &y);
        soma_c = soma_c + y;
    }
    printf("TOTAL: %d\n", soma_c);
}
