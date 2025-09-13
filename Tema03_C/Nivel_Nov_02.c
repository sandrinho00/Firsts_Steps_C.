#include <stdio.h>
    int main(){
        /*
        int numero_1, numero_2;

        numero_1 = 5;
        numero_2 = 10;

        //verificar se numero 1 é maior que o 2
        if (numero_1 > numero_2) {
                printf("Numero 1 maior que numero 2\n");

        }      
        printf("Fora IF");
        */
        
        int numero = 17;
        int divisor = 3;
        int resto;

        resto = numero % 3;
        printf("Resto = %d\n", resto);
        if (resto == 0) {
            printf("O numero é par\n");

        }
    }