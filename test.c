#include <stdio.h>
#include <stdlib.h>

int main() {
    int carta1;
    char cidade1[50];
    char estado1;
    int populacao1;
    float area1;
    float pib1;

    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("O objetivo sera comparar duas cidades em cartas, 'Carta 1 e Carta 2' com base em seus atributos.\n");

    printf("\n-- Carta 1 --\n");
    printf("Digite o CEP da cidade: ");
    scanf("%d", &carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a sigla do estado (ex: SP): ");
    scanf(" %s", &estado1); // espaço antes do %c limpa o buffer

    printf("Digite a sua populacao: ");
    scanf("%d", &populacao1);

    printf("Digite o tamanho de sua area em km2: ");
    scanf("%f", &area1);

    printf("Digite o seu PIB: ");
    scanf("%f", &pib1);

    int carta2;
    char cidade2[50];
    char estado2;
    int populacao2;
    float area2;
    float pib2;

    printf("\n-- Carta 2 --\n");
    printf("Digite o CEP da cidade: ");
    scanf("%d", &carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a sigla do estado (ex: SP): ");
    scanf(" %s", &estado2);

    printf("Digite a sua populacao: ");
    scanf("%d", &populacao2);

    printf("Digite o tamanho de sua area em km2: ");
    scanf("%f", &area2);

    printf("Digite o seu PIB: ");
    scanf("%f", &pib2);

    int opcao;

    do {
        printf("\n===== MENU DE COMPARACAO =====\n");
        printf("Escolha um atributo para comparar:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - Densidade demografica\n");
        printf("4 - PIB\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nComparando populacao...\n");
                if (populacao1 > populacao2) {
                    printf("Carta 1 venceu em populacao!\n");
                } else if (populacao1 < populacao2) {
                    printf("Carta 2 venceu em populacao!\n");
                } else {
                    printf("Empate em populacao.\n");
                }
                break;
            case 2:
                printf("\nComparando area...\n");
                if (area1 > area2) {
                    printf("Carta 1 tem maior area.\n");
                } else if (area1 < area2) {
                    printf("Carta 2 tem maior area.\n");
                } else {
                    printf("Empate em area.\n");
                }
                break;
            case 3:
                printf("\nComparando densidade demografica...\n");
                {
                    float densidade1 = populacao1 / area1;
                    float densidade2 = populacao2 / area2;
                    printf("Densidade Carta 1: %.2f\n", densidade1);
                    printf("Densidade Carta 2: %.2f\n", densidade2);
                    if (densidade1 > densidade2) {
                        printf("Carta 1 venceu em densidade demografica.\n");
                    } else if (densidade1 < densidade2) {
                        printf("Carta 2 venceu em densidade demografica.\n");
                    } else {
                        printf("Empate em densidade.\n");
                    }
                }
                break;
            case 4:
                printf("\nComparando PIB...\n");
                if (pib1 > pib2) {
                    printf("Carta 1 tem maior PIB.\n");
                } else if (pib1 < pib2) {
                    printf("Carta 2 tem maior PIB.\n");
                } else {
                    printf("Empate em PIB.\n");
                }
                break;
            case 0:
                printf("\nEncerrando o jogo. Obrigado por jogar!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    // Curiosidade extra
    if (estado1 == estado2) {
        printf("\nCuriosidade: As duas cidades estao no mesmo estado!\n");
    }

    return 0;
}
