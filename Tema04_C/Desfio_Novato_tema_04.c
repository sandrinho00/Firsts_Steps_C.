#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

        //torre = em linha reta 5 casas pra frente loop for
        //bispo = na diagonal 5 casas diagonal direita  loop while
        //rainha = todas as direções 8 casas pra esquerda loop do while
        int movimento_bispo = 1, movimento_rainha = 1;

        //Logica de movimentação da Torre em 5 casas para frente
        for (int i = 0; i <=5; i++) //Loop de movimentação para 5 repetições
        {
            printf("Torre movimentando pra Frente %d\n", i); //Print de cada movimento
        }
        
        //Logica de programação do Bispo em 5 casa na diagonal direita
        while (movimento_bispo <= 5)//Loop de movimentação para 5 repetições
        {
            printf("Bispo movimentando para a diagonal direita %d\n", movimento_bispo); //Print de cada movimento
            movimento_bispo = movimento_bispo + 1;
        }

        //Logica de movimentação da Rainha em 8 casas para esquerda
        do //Loop de movimentação para 8 repetições
        {
            printf("Rainha movimntando para a esquerda %d\n", movimento_rainha); //Print de cada movimento

            movimento_rainha = movimento_rainha + 1;

        } while (movimento_rainha <= 8);
        
        
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}