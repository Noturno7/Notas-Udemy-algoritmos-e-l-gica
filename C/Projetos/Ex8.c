//Exercício matriz geral:
#include <stdio.h>

int main(void)
{
    int ordem, contador1, contador2, linha, coluna;

    printf("Qual a ordem da matriz: ");
    scanf("%d", &ordem);
    float elemento[50][50], positivos = 0, matriz[50][50];

    if (ordem < 10)
    {
        for (contador1 = 0; contador1 < ordem; contador1++)
        {
            for (contador2 = 0; contador2 < ordem; contador2++)
            {
                printf("Elemento [%d.%d]: ", contador1, contador2);
                scanf("%f", &elemento[contador1][contador2]);
                if (elemento[contador1][contador2] > 0)
                {
                    positivos = positivos + elemento[contador1][contador2];
                }
            }
        }
    }
    printf("Soma dos positivos: %.2f\n", positivos);
    printf("Escolha uma linha: ");
    scanf("%d", &linha);
    for (contador1 = 0; contador1 < ordem; contador1++)
    {
        printf("%.1f ", elemento[linha][contador1]);
    }
    printf("\n");
    printf("Escolha uma coluna: ");
    scanf("%d", &coluna);
    for (contador2 = 0; contador2 < ordem; contador2++)
    {
        printf("%.1f ", elemento[contador2][coluna]);
    }
    printf("\n");
    for (contador1 = 0; contador1 < ordem; contador1++)
    {
        for (contador2 = 0; contador2 < ordem; contador2++)
        {
            if (elemento[contador1][contador2] < 0)
                {
                    elemento[contador1][contador2] = elemento[contador1][contador2] * elemento[contador1][contador2];
                }
    }
    }
    printf("Matriz alterada:\n");
    for (contador1 = 0; contador1 < ordem; contador1++)
    {
        for (contador2 = 0; contador2 < ordem; contador2++)
        {
            printf("%.1f ", elemento[contador1][contador2]);
            if (contador2 == ordem - 1)
            {
                printf("\n");
            }
        }
    }
}
