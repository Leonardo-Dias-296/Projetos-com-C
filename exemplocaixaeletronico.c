#include <stdio.h>

int main() {

int opcao;

printf("Escolha uma opcao: \n");
printf("\n1- Verificar meu saldo.\n");
printf("2- Depositar.\n");
printf("3- Sacar.\n");
scanf("%d", &opcao);

switch (opcao){
case 1:
printf("\nSeu saldo e de R$ 1964,82.\n");
    break;
    case 2:
    printf("Deposito realizado com sucesso.\n");
      break;
    case 3:
      printf("Saque realizado com sucesso.\n");
      break;
    default:
      printf("Opcao invalida.\n");
}
return 0;
}