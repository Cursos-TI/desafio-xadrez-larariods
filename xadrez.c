#include <stdio.h>

// FUNÇÕES RECURSIVAS

// Torre: move-se em linha reta para a direita
void moverTorre(int casas) {
    if (casas == 0) return;  // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);   // chamada recursiva
}

// Bispo: move-se na diagonal (Cima + Direita)
// Usando recursividade + loops aninhados
void moverBispo(int casas) {
    if (casas == 0) return; // condição de parada

    // loops aninhados: vertical + horizontal
    for (int v = 0; v < 1; v++) {         // sempre "Cima"
        for (int h = 0; h < 1; h++) {     // sempre "Direita"
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// Rainha: move-se em linha reta para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// FUNÇÃO PRINCIPAL
int main() {
    // Quantidade de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do Cavalo
    int casasCima = 2;
    int casasDireita = 1;

    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // BISPO
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // RAINHA
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    //CAVALO
    printf("\nMovimento do Cavalo:\n");

    // Usando loops complexos + controle de fluxo
    for (int i = 1; i <= casasCima; i++) {
        if (i == 2) {
            // Quando chegar na segunda casa para cima,
            // adiciona o movimento para a direita
            int j = 1;
            while (j <= casasDireita) {
                printf("Direita\n");
                j++;
                break; // sai após mover para a direita
            }
        }
        printf("Cima\n");
        continue; // força próximo passo do laço
    }

    return 0;
}
