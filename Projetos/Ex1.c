#include <stdio.h>
#include <math.h>

//ex1
//cupom fiscal:
int main(void)
{
    int código = 5291;

    char produto_1 = get_string("produto 1:");
    char produto_2 = get_string("produto 2:");

    float preço_1 = get_float("preço do primeiro produto:");
    float preço_2 = get_float("preço do segundo produto:");

    char genero = get_string("gênero:");
    int idade = get_int("idade: ");

    printf("\n");

    printf("Produtos:\nO produto %c custa:R$  %f\n", produto_1,preço_1);
    printf("O produto %c custa:R$  %f\n", produto_2, preço_2);
    printf("Código: %i\n", código);
    printf("dados da pessoa: gênero %c e idade %i\n", genero, idade);

}

