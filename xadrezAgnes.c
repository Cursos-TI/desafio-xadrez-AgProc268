#include <stdio.h>

int main (){

    // Torre 

int moverTorreDireita(int casas) {
    if (casas <= 0) return 0; 
    printf("Torre: Direita\n");
    return moverTorreDireita(casas - 1);
}


// Rainha 

int moverRainhaEsquerda(int casas) {
    if (casas <= 0) return 0;
    printf("Rainha: Esquerda\n");
    return moverRainhaEsquerda(casas - 1);
}


// Bispo 

int moverBispo (int casas) {
    if (casas <= 0) return 0;

    // A diagonal consiste em "Cima" + "Direita"
    for (int i = 0; i < 1; i++) {
        printf("Bispo: Cima\n");
        printf("Bispo: Direita\n");
    }

    return moverBispo(casas - 1);
}


// Cavalo 

int moverCavalo() {
    // Movimento em L: duas para cima e uma para a direita
    for (int i = 0, j = 0; i < 3; i++, j++) {
        if (i == 1) continue; // pula a iteração 
        if (j == 2) break;    // encerra

        for (int v = 0; v < 2; v++) {
            printf("Cavalo: Cima\n");
        }
        for (int h = 0; h < 1; h++) {
            printf("Cavalo: Direita\n");
        }
        printf("\n");
    }
    return 0;
}


    int casasTorre, casasBispo, casasRainha;

    printf("Insira o número de casas para movimentação da Torre: \n");
    scanf("%d", &casasTorre);

    printf("Insira o número de casas para movimentação do Bispo: \n");
    scanf("%d", &casasBispo);

    printf("Insira o número de casas para movimentação da Rainha: \n");
    scanf("%d", &casasRainha);

    printf(" \n Movimentação da Torre \n");
    moverTorreDireita (casasTorre);

    printf (" \n Movimentação do Bispo \n");
    moverBispo (casasBispo);

    printf(" \n Movimentação da Rainha \n");
    moverRainhaEsquerda (casasRainha);

    printf("\n Movimentação do cavalo \n");
    moverCavalo();
 

    return 0;

}
