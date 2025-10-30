#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int escolha_jogador, escolha_computador;

    srand(time(0));

    printf("*****Jogo de Jokenpô******\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha:");
    scanf("%d", &escolha_jogador);

    srand(time(0));

    escolha_computador = rand() % 3 + 1;

    switch (escolha_jogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

    switch (escolha_computador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

    if (escolha_computador == escolha_jogador )
    {
        printf("*****Empate\n");

    }else if (escolha_jogador == 1 && escolha_jogador > 3)  //Pedra    
    {
      
        switch(escolha_computador){
            case 2: //Papel
            printf("Computador Ganhou\n");
            break;
            case 3: //Tesoura
            printf("Jogador Ganhou\n");
            break;
            default:
        }
    }else if (escolha_jogador == 2) //Papel
    {   
      
        switch(escolha_computador){
            case 1: //Pedra
            printf("Jogador Ganhou\n");
            break;
            case 3: //Tesoura
            printf("Computador Ganhou\n");
            break;
        }
    }else if (escolha_jogador == 3) //Tesoura
    {   
      
        switch(escolha_computador){
            case 1: //Pedra
            printf("Computador Ganhou\n");
            break;
            case 2: //Papel
            printf("Jogador Ganhou\n");
            break;
        }
    }
    printf("****Fim de jogo");
}