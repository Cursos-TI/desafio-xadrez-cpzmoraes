#include <stdio.h>

int main() {
    // Declaracao das variaveis que definem quantas casas cada peca vai se mover
    int casas_torre = 5;    // Torre se move 5 casas para a direita
    int casas_bispo = 5;    // Bispo se move 5 casas na diagonal
    int casas_rainha = 8;   // Rainha se move 8 casas para a esquerda
    int i;                  // Variavel de controle para os loops de repeticao
    
    printf("MOVIMENTO DA TORRE\n");
    printf("Torre movendo 5 casas para a direita:\n");
    
    // Inicia i igual a 1, continua enquanto i e menor 5, incrementa 1 ao i a cada iteracao
    for(i = 1; i <= casas_torre; i++) {
        printf("Direita\n");  // Torre se move horizontalmente para a direita
    }
    
    printf("\nMOVIMENTO DO BISPO\n");
    printf("Bispo movendo 5 casas na diagonal (cima e direita):\n");
    
    // Inicializa o contador manualmente antes do loop WHILE
    i = 1;
    // Continua enquanto i for menor ou igual ao numero de casas do bispo
    while(i <= casas_bispo) {
        printf("Cima Direita\n");  // Bispo se move na diagonal (combina duas direcoes)
        i++;  // Incrementa mais um no contador dentro do loop
    }
    
    printf("\nMOVIMENTO DA RAINHA\n");
    printf("Rainha movendo 8 casas para a esquerda:\n");
    
    // Reinicializa o contador para a rainha
    i = 1;
    do {
        printf("Esquerda\n");  // Rainha se move horizontalmente para a esquerda
        i++;  // Incrementa mais um no contador apos cada movimento
    } while(i <= casas_rainha);  // Verifica a condicao apos executar o bloco

    return 0;
}
