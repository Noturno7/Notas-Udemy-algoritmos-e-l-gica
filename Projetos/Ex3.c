// ex 4, já adicionado no Notions
//média de idades:

#include <stdio.h>
#include <math.h>

int main(void)
{
int variavel, soma = 0, média = 0, contador = 0;
printf("digite as idades: \n");
scanf("%d", &variavel);
do
{
contador = contador + 1;
soma = soma + variavel;
scanf("%d", &variavel);
}
while (variavel > 0);
média = soma / contador;
printf("Total: %d\n", média);
}
