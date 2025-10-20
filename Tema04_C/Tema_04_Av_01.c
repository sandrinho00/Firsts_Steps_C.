#include <stdio.h>
/*
int main(){

    int a = 10, b = 5;

    if (a > 0 && b > 0){
        printf ("Os dois numeros são positivos\n");

    }else{
    printf("Pelo menos um dos numeros é negativo\n");
    }
}
*/

#include <stdio.h>

int main(){

    int a = -10, b = -2;

    if (a > 0 || b > 0){
        printf ("Pelo menos um dos numeros é positivo\n");

    } else {
        printf("Os dois numeros são negativos\n");
    }

}


