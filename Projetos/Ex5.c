//ex5
//contador de fatorial

#include <stdio.h>
#include <math.h>

int main(void)
{
    int número, contador, conta = 1, total;

    printf("Número inteiro até 15: ");
    scanf("%d", &número);

    for (contador = número ; contador > 0; contador--)
    {
        conta *= contador;
    }
    printf("FATORIAL: %d\n", conta);
}
