#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoque_minimo;
    estoque_minimo = 1000;

    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade:\n");
    scanf("%f", &umidade);
    printf("Entre com o estoque:\n");
    scanf("%u", &estoque);

    if  (temperatura > 30){
        printf("A temperatura está alta.\n");
    }else{
        printf("A temperatura está dentro dos parametros.\n");
    }

    if (umidade > 50){
        printf("A umidade está elevada.\n");
    }else{
        printf("A umidade está dentro dos parametros.\n");
    }
    if (estoque < estoque_minimo){
        printf("Estoque minimo abaixo do necessario.\n");
    }else{
        printf("Estoque minimo dentro dos parametros.\n");
    }

}