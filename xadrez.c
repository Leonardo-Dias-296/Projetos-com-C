#include <stdio.h>

int main(){

int i = 1;
do
{

 printf("Rainha para a esquerda\n");

    i++; // increment i to eventually break the do-while loop
} while (i <= 8);



    for (int i = 0; i < 8; i++){
        printf("Bispo para a digonal direita\n");
    }

for (int j = 0; j < 5; j++){
    printf("Torre para a direita\n");
}
for (int k = 0; k < 1; k++){
    printf("Peao para a frente\n");
}
int l = 1;
while (l--){

 for (int l = 0; l < 2; l++) {
    printf("Cavalo para cima\n");
}
for (int m = 0; m < 1; m++)
{
    printf("Cavalo para direita\n");
}

}


   

    return 0;
}