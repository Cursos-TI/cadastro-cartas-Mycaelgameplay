#include <stdio.h>

int main() 
{
    // ----------- DECLARAÇÃO DAS VARIÁVEIS PARA AS DUAS CARTAS -----------

    char estado1, codigo1[4], cidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    char estado2, codigo2[4], cidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // ----------- ENTRADA DA CARTA 1 -----------
    printf("==== Cadastro Carta 1 ====\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // ----------- ENTRADA DA CARTA 2 -----------
    printf("\n==== Cadastro Carta 2 ====\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código (ex: A01): ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // ----------- CÁLCULOS -----------
    float dens1 = populacao1 / area1;
    float dens2 = populacao2 / area2;

    float ppc1 = pib1 / populacao1;
    float ppc2 = pib2 / populacao2;

    float super1 = (float)populacao1 + area1 + pib1 + pontos1 + ppc1 + (1.0f / dens1);
    float super2 = (float)populacao2 + area2 + pib2 + pontos2 + ppc2 + (1.0f / dens2);

    // ----------- RESULTADOS DAS COMPARAÇÕES -----------

    printf("\n\n===== Comparação de Cartas =====\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional (MENOR vence): Carta 1 venceu (%d)\n", dens1 < dens2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", ppc1 > ppc2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}
