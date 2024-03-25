//Problema Dados pessoais:
//Bibliotecas:
#include <stdio.h>
#include <string.h>

int main(void)
{
//Variaveis:
int pessoas, loopC, homens = 0, mulheres;
float médiaF = 0, maioraltura, menoraltura, médiaM = 0;
{
//Recebimento e armazenamento do número de pessoas digitadas:
    printf("Quantas pessoas serão digitadas: ");
    scanf("%d", &pessoas);
//Adicionando as váriaveis que dependem da primeira variavel:
    float altura[pessoas];
    char gênero[pessoas][2];
//Iniciando o contador para a contagem da altura e do gênero:
    for (loopC = 0; loopC < pessoas; loopC++)
    {
        printf("Altura da %d pessoa: ", loopC +1);
        scanf("%f", &altura[loopC]);

        printf("Gênero da %d pessoa: ", loopC +1);
        scanf("%s", gênero[loopC]);
    }
//Iniciando o contador para a contagem das mulheres, dos homens, e da média:
    for (int loopC2 = 0; loopC2 < pessoas; loopC2++)
    {
        if (strcmp(gênero[loopC2], "F") == 0)
        {
            médiaF = médiaF + altura[loopC2];
            mulheres = mulheres + 1;
        }
        else
        {
            printf("Não foram digitadas mulheres");
        }
        if (strcmp(gênero[loopC2], "M") == 0)
        {
            homens = homens + 1;
            médiaM = médiaM + altura[loopC2];
        }
        else printf("Não foram digitados homens");
    }
    médiaF = médiaF / (pessoas - homens);
    médiaM = médiaM / (pessoas - mulheres);
//Iniciando o contador para a contagem da maior e menor altura:
    maioraltura = altura[0];
    menoraltura = altura[0];
    for (int loopC3 = 1; loopC3 < pessoas; loopC3++)
    {
        if (altura[loopC3] > maioraltura)
        {
            maioraltura = altura[loopC3];
        }
        if (altura[loopC3] < menoraltura)
        {
            menoraltura = altura[loopC3];
        }
    }
//Impressão dos dados coletados:
    printf("Menor altura:%.2f\n", menoraltura);
    printf("Maior altura:%.2f\n", maioraltura);
    printf("Número de mulheres: %d\n", mulheres);
    printf("Media de altura das mulheres: %.2f\n", médiaF);
    printf("Número de homens: %d\n", homens);
    printf("Média de altura dos homens: %.2f\n", médiaM);
}
}
