#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Inicio do jogo
    printf("Bem-vindo ao jogo Maior ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;

    default:
        printf("Opção Inválida\n");
        break;
    }

    if (resultado == 1)
    {
        printf("Parabêns, Você venceu!\n");
    } else {
        printf("Infelizmente Você perdeu!\n");
    }
    

    printf("O número do computador é: (%d) e o do jogador é (%d)\n", numeroComputador, numeroJogador);
}