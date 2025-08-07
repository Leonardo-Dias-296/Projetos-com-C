#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int opcao, opcao1;
int numerosecreto, palpite;
char confirmacao;
printf("\nBem-vindo ao Jogo!\n");

while (1)
{

printf("\nMenu Principal: \n");
printf("1 - Iniciar Jogo\n");
printf("2 - Ver regras\n");
printf("3 - Sair do Jogo\n");
printf("Escolha uma opcao.\n");
scanf("%d", &opcao);

switch (opcao){
case 1:
srand(time(0));
numerosecreto = rand() % 10;
printf("Digite um numero de 0 a 9: \n");
scanf("%d", &palpite);
if (numerosecreto == palpite){
    printf("Parabens!\nVoce acertou o numero secreto.\n");
} else if (numerosecreto != palpite) {
    printf("voce errou o numero secreto.\n");
    printf("O numero era : %d\n", numerosecreto);
    printf("\nTente novamente.\n");
}
    break;
    case 2:
    printf("\nObjetivo:\nO jogador deve adivinhar corretamente um numero secreto escolhido aleatoriamente pelo computador, entre 0 e 9.\n\nInicio do jogo:\nO computador gera aleatoriamente um numero entre 0 e 9, O numero secreto permanece oculto ate que o jogador acerte.\n\nComo jogar:\nO jogador digita um palpite (um numero entre 0 e 9), O computador verifica se o palpite esta correto: Se estiver certo, o jogador vence,  Se estiver errado, o computador informa que o palpite esta incorreto.\n");
    printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
    getchar();
    getchar();
    break;
    case 3:
     printf("\nTem certeza que deseja sair? (S/N): ");
            getchar(); // limpa o buffer
            scanf("%c", &confirmacao);
            if (confirmacao == 'S' || confirmacao == 's') {
                printf("O jogo foi encerrado.\n");
                return 0; // encerra o programa
            } else {
                printf("Retornando ao menu principal...\n");
            }
    break;

default:
printf("Opcao invalida.\n");
    break;
}




}
    return 0;
}