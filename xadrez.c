#include <stdio.h>

int main() {

    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int i;
    
    printf("MOVIMENTO DA TORRE\n");
    printf("Torre movendo 5 casas para a direita:\n");
    
    for(i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    
    printf("\nMOVIMENTO DO BISPO\n");
    printf("Bispo movendo 5 casas na diagonal (cima e direita):\n");
    
    i = 1;
    while(i <= casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }
    
    printf("\nMOVIMENTO DA RAINHA\n");
    printf("Rainha movendo 8 casas para a esquerda:\n");
    
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casas_rainha);

    return 0;
}