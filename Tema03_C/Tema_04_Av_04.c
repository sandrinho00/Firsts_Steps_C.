#include <stdio.h>

int main()
{
    int variavel;

    printf("Digite um valor.\n");
    scanf("%d", &variavel);
    switch (variavel)
    {
    case 1:
        printf("Codigo a ser executado se variavel ==1.\n");
        printf("Teste do case 1");
        break;
    case 2:
        printf("Codigo executado se variavel ==2");
        printf("Teste do case 2");
        break;
    
    default:
        printf("Codigo a ser usado caso variavel não for 1 ou 2");
        break;
    }
    return 0;
}
