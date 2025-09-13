#include <stdio.h>

int main(){

    int numero_normal = 214783647;
    long long int numero_grande = 2147483647;

    printf("Numero normal (int): %d\n", numero_normal);
    printf("Numero grande (long long int): %lld\n", numero_grande);

    numero_grande = numero_grande + 1;

    printf("Numero grande atualizado:(long long int + 1) %lld\n", numero_grande);



}