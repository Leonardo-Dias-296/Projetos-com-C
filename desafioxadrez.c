#include <stdio.h>

void MoverBispo(int movimento) {
    if (movimento > 0) {
        printf("Bispo Diagonal para a direita\n");
        MoverBispo(movimento - 1);
    }
}

void MoverPeao(int movimento) {
    if (movimento > 0) {
        printf("Peao para a frente\n");
        MoverPeao(movimento - 1);
    }
}

void MoverRainha(int movimento) {
    if (movimento > 0) {
        printf("Rainha para a esquerda\n");
        MoverRainha(movimento - 1);
    }
}

void MoverTorre(int movimento) {
    if (movimento > 0) {
        printf("Torre para a direita\n");
        MoverTorre(movimento - 1);
    }
}

int main() {
    MoverBispo(8);
    MoverPeao(1);
    MoverRainha(8);
    MoverTorre(5);

    int i = 1;
    while (i--){

 for (int i = 0; i < 2; i++) {
    printf("Cavalo para cima\n");
}
for (int j = 0; j < 1; j++)
{
    printf("Cavalo para direita\n");
}

}

    return 0;
}
