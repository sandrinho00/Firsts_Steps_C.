// A função desse programa será executar um cadastro de 2 cartas de super trunfo. O cadastro deve ser inserido pelo usuario e depois mostrado na tela

#include <stdio.h>

    int main(){
        //Declaração das variaveis da carta 01
        char estado_01[20], codigo_01[10], nome_cidade_01[30];  //Declaração das variáveis do tipo char
        int população_01, numero_pontos_01; //Declaração das variáveis do tipo int
        float area_km_01, pib_01; // Declaração das variáveis do tipo float
        //Declaração da variavel para calculdo de densidade populaiconal e pib per capta
        float densidade_populaciona_carta1 , pib_per_capta1;
    

        //Declaração das variaveis da carta 02
        char estado_02[20], codigo_02[10], nome_cidade_02[30];  //Declaração das variáveis do tipo char
        int população_02, numero_pontos_02; //Declaração das variáveis do tipo int
        float area_km_02, pib_02; // Declaração das variáveis do tipo float
        //Declaração da variavel para calculdo de densidade populaiconal
        float densidade_populaciona_carta2, pib_per_capta2;


        printf("Bem vido ao Super Trunfo Novato.\nQuando solicitado, digite os dados da carta 01.\n");  //
        
        printf("Digite e letra referente ao estado da carta 01:\n");
        scanf("%s", &estado_01);
        
        printf("Digite o codigo da carta 01:\n");
        scanf("%s", &codigo_01);

        printf("Digite o nome da cidade referente a carta 01:\n");
        scanf("%s", &nome_cidade_01);

        printf("Digite a população da cidade da carta 01:\n");
        scanf("%d", &população_01);

        printf("Digite e area da carta 01\n");
        scanf("%f", &area_km_01);

        printf("Digite o PIB referente a cidade da carta 01\n");
        scanf("%f", &pib_01);

        printf("Digite o numero de pontos turisticos referentes a cidade da carta 01\n");
        scanf("%d", &numero_pontos_01);
        // calculo de densidade populacional
        densidade_populaciona_carta1 = população_01 / area_km_01;
        // calculo do pib per capta
        pib_per_capta1 = pib_01 / população_01;

        //Daqui em diante serão solicitadas as informações referentes à carta 02
        printf("A partir de agora, quando solicitado, digite os dados da carta 02.\n"); 
        
        printf("Digite e letra referente ao estado da carta 02:\n");
        scanf("%s", &estado_02);

        printf("Digite o codigo da carta 02:\n");
        scanf("%s", &codigo_02);

        printf("Digite o nome da cidade referente a carta 02:\n");
        scanf("%s", &nome_cidade_02);

        printf("Digite a população da cidade da carta 02:\n");
        scanf("%d", &população_02);

        printf("Digite e area da carta 02\n");
        scanf("%f", &area_km_02);

        printf("Digite o PIB referente a cidade da carta 02\n");
        scanf("%f", &pib_02);

        printf("Digite o numero de pontos turisticos referentes a cidade da carta 02\n");
        scanf("%d", &numero_pontos_02);

        // calculo de densidade populacional
        densidade_populaciona_carta2 = população_02 / area_km_02;
        // calculo do pib per capta
        pib_per_capta2 = pib_02 / população_02;

        //Apos cadastradas as cartas, serão impressos os dados de cada uma delas:
        printf("Carta 01\n");
        printf(" Estado: %s\n Codigo da carta: %s\n Nome da Cidade: %s\n População: %d\n Area km: %f\n Pib: %f\n Numero de Pontos turisticos: %d\n", estado_01 ,codigo_01, nome_cidade_01, população_01, area_km_01, pib_01, numero_pontos_01);
        printf("Densidade Populacional: %f \n Pip per Capta: %f\n", densidade_populaciona_carta1 , pib_per_capta1);

        printf("Carta 02\n");
        printf(" Estado: %s\n Codigo da carta: %s\n Nome da Cidade: %s\n População: %d\n Area km: %f\n Pib: %f\n Numero de Pontos turisticos: %d\n", estado_02 ,codigo_02, nome_cidade_02, população_02, area_km_02, pib_02, numero_pontos_02);
        printf("Densidade Populacional: %f \n Pip per Capta: %f\n", densidade_populaciona_carta2, pib_per_capta2);

         }