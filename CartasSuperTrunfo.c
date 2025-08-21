#include <stdio.h>

int main() {
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área (km²): \n");
    scanf("%f", &area);

    printf("PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
     


    printf("--- Resumo da Carta 01 --- \n");
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d \n", pontos_turisticos);
 


    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área (km²): \n");
    scanf("%f", &area);

    printf("PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("--- Resumo da Carta 02 --- \n");
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}

