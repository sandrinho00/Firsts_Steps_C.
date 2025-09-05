#include <stdio.h>

    int main(){
        //Declaração das variaveis
        int nota1,nota2,nota3;
        float media;

        printf("******Program de Calculo de media\n");
        printf("Digite a sua primeira nota:\n");
        scanf("%d", &nota1 );

        printf("Digite a sua segunda nora:\n");
        scanf("%d", &nota2);

        printf("Digite sua terceira nota:\n");
        scanf("%d", &nota3);

        media = (float) (nota1 + nota2 + nota3) /3;

        printf(" A media das suas notas é:\n %f", media);

        return 0;

    }