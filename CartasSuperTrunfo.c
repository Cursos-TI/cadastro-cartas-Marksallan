#include <stdio.h>

int main() {
    // Mudança para unsigned long int 
    unsigned long int populacao1, populacao2;
    int turisticos1, turisticos2;
    float km21, km22, pib1, pib2;
    float densidade1, densidade2, percapta1, percapta2;
    float superPoder1, superPoder2;
    char estado1[30], estado2[30], codigocarta1[3], codigocarta2[3], cidade1[30], cidade2[30];


    printf("Super Trunfo - Cidades Brasileiras\n\n");

    // --- ENTRADA DE DADOS CARTA 1 ---
    printf("--- Insira os dados da carta 1:\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Código (uma letra de A a H): "); scanf("%s", codigocarta1);
    printf("Cidade: "); scanf("%s", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &km21);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &turisticos1);

    densidade1 = (float)populacao1 / km21;
    percapta1 = pib1 / (float)populacao1;

    // Cálculo Super Poder 1 (Soma dos atributos + inverso da densidade)
    superPoder1 = (float)populacao1 + km21 + pib1 + (float)turisticos1 + percapta1 + (1.0f / densidade1);

    // --- ENTRADA DE DADOS CARTA 2 ---
    printf("\n--- Insira os dados da carta 2:\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código (uma letra de A a H): "); scanf("%s", codigocarta2);
    printf("Cidade: "); scanf("%s", cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &km22);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &turisticos2);

    densidade2 = (float)populacao2 / km22;
    percapta2 = pib2 / (float)populacao2;

    // Cálculo Super Poder 2
    superPoder2 = (float)populacao2 + km22 + pib2 + (float)turisticos2 + percapta2 + (1.0f / densidade2);

    // --- EXIBIÇÃO E COMPARAÇÃO ---
    printf("\n============================\n");
    printf("Comparação de Cartas:\n");
    printf("============================\n");

    // Nas comparações, (a > b) retorna 1 se verdade e 0 se falso.
    // Para densidade, a lógica é invertida (menor vence).
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", km21 > km22);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turisticos1 > turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // Menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapta1 > percapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}