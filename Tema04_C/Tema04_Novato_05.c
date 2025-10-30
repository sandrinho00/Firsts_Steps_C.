#include <stdio.h>
/* 
int main(){
    int i = 0;

    while (i <= 10)
    {   
        if (i % 2 != 0 )
        {
            printf("O numero %d é impar.\n", i);
        }
        
        i ++;

    }
    
    return 0;
} */

/* int main(){

    int numero;

    do
    {
        printf("Digite um numero par para sair do programa\n");
        scanf("%d", &numero);

        if(numero % 2 ==0){

            printf(" %d é par\n", numero);
        }else
        {
          printf("O numero é impar\n");
        }    
        
    } while (numero % 2 !=0);

    printf("Programa Finalizado\n");
    
} */

int main(){

    int numero, i;

    printf("Entre com o numero para o cálculo da tabuada.\n");
    scanf("%d", &numero);

    for ( i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, numero, i*numero);

    }           
    

}