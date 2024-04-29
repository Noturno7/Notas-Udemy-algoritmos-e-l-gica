//Problema comerciante
//Bibliotecas
#include <stdio.h>
#include <string.h>

int main(void)
{
    int qntprodutos, contador1, contador2, lucro10 = 0, lucro1020 = 0, lucro20 = 0;


//input de produtos:
    printf("Serão digitados dados de quantos produtos? ");
    scanf("%d", &qntprodutos);

    float  preçodecompra[qntprodutos], preçodevenda[qntprodutos], lucro[qntprodutos], lucrototal = 0, valortotalC= 0, valortotalV = 0;
    char produtos[qntprodutos][20];
//input de dados dos produtos
    for (contador1 = 0; contador1 < qntprodutos; contador1++)
    {
        printf("Produto %d:\n", contador1 + 1);
        printf("Nome: ");
        scanf("%s", produtos[contador1]);
        printf("Preço de compra: ");
        scanf("%f", &preçodecompra[contador1]);
        printf("Preço de venda: ");
        scanf("%f", &preçodevenda[contador1]);
    }
//Formula usada para conferir o % de lucro, valor total, valor de venda e lucro total:
    for (contador2 = 0; contador2 < qntprodutos; contador2++)
    {
        lucro[contador2] = preçodevenda[contador2] - preçodecompra[contador2];
        if (lucro[contador2] < preçodecompra[contador2] * 0.1)
        {
            lucro10 = lucro10 + 1;
            lucrototal = lucrototal + lucro[contador2];
            valortotalC = valortotalC + preçodecompra[contador2];
            valortotalV = valortotalV + preçodevenda[contador2];
        }
        else if (lucro[contador2] >= preçodecompra[contador2] * 0.1 && lucro[contador2] <= preçodecompra[contador2] * 0.2)
        {
            lucro1020 = lucro1020 + 1;
            lucrototal = lucrototal + lucro[contador2];
            valortotalC = valortotalC + preçodecompra[contador2];
            valortotalV = valortotalV + preçodevenda[contador2];
        }
        else if (lucro[contador2] > preçodecompra[contador2] * 0.2)
        {
            lucro20 = lucro20 + 1;
            lucrototal = lucrototal + lucro[contador2];
            valortotalC = valortotalC + preçodecompra[contador2];
            valortotalV = valortotalV + preçodevenda[contador2];
        }
    }
//impressão do relatorio:
    printf("RELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", lucro10);
    printf("Lucro entre 10%% e 20%%: %d\n", lucro1020);
    printf("Lucro acima de 20%%: %d\n", lucro20);
    printf("Valor total de compra:%.2f\n", valortotalC);
    printf("Valor total de venda:%.2f\n", valortotalV);
    printf("Lucro total: %.2f\n", lucrototal);
}
