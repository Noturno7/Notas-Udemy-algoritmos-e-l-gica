// EX6;
//transformador de temperatura

#include <stdio.h>
#include <math.h>

int main(void)
{
    float c, f;
    char r;
    do
    {
    printf(" Temperatura em Celsius: ");
    scanf("%f", &c);

    f = 9 * c / 5 + 32;
    printf(" Equivalente em  Fahrenheit: %f\n", f);

    printf("deseja repetir? (s/n)? ");
    scanf(" %c", &r);
    if (r == 's')
    {

    }
    else
    {
    printf("\n");
    break;
    }
    }
    while (1);
}
