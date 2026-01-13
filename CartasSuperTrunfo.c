#include <stdio.h>
    
    int main(){ 
        int populacao1, populacao2, turisticos1, turisticos2; //variáveis entre linhas 4 e 6
        float km21, km22, pib1, pib2;
        char estado1[30], estado2[30], codigocarta1[3], codigocarta2[3], cidade1[30], cidade2[30];

        
        printf("Super Trunfo - Cidades Brasileiras\n\n");

        printf("--- Insira os dados da carta 1:\n\n");
        //início da inserção dos dados da carta 1
        printf("Insira o nome do estado: \n");
        scanf("%s", &estado1);
        
        printf("Insira o código da carta (Uma letra de 'A' a 'H'): \n");
        scanf("%s", &codigocarta1);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &cidade1);

        printf("Insira a população: \n");
        scanf("%d", &populacao1);

        printf("Insira a área (em km²): \n");
        scanf("%f", &km21);

        printf("Insira o PIB: \n");
        scanf("%f", &pib1);

        printf("Insira o número de pontos turísticos: \n");
        scanf("%d", &turisticos1);

        //início da inserção dos dados da carta 2
        printf("--- Insira os dados da carta 2:\n");
        printf("Insira o nome do estado: \n");
        scanf("%s", &estado2);

        printf("Insira o código da carta: \n");
        scanf("%s", &codigocarta2);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &cidade2);

        printf("Insira  a população: \n");
        scanf("%d", &populacao2);

        printf("Insira a área em km²: \n");
        scanf("%f", &km22);

        printf("Insira o PIB: \n");
        scanf("%f", &pib2);

        printf("Insira o número de pontos turísticos: \n");
        scanf("%d", &turisticos2);
    
      //Resultado na tela das informações inseridas sobre as cartas 
    printf("\nCarta 1:\nEstado: %s\nCódigo da Carta: %s\nCidade: %s\nPopulação: %d\nÁrea (km²): %.2f\nPIB: %.2f\nPontos Turísticos: %d\n\n", estado1, codigocarta1, cidade1, populacao1, km21, pib1, turisticos1);
    printf("-----------------\n"); //espaçamento para organização
    printf("\nCarta 2:\nEstado: %s\nCódigo da Carta: %s\nCidade: %s\nPopulação: %d\nÁrea (km²): %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", estado2, codigocarta2, cidade2, populacao2, km22, pib2, turisticos2);
return 0;



    }