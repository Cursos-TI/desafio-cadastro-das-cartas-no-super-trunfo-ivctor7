#include <stdio.h>

int main()
{

    char pais[10];
    char estado1[20], estado2[20];
    char codigo1[5], codigo2[2];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float PIBpercapita1, PIBpercapita2;
    int NPT1, NPT2; // NPT = número de pontos turísticos (abreviação)
    float SuperPoder1, SuperPoder2;

    // CADASTRO DA CARTA 1

    printf("Digite um país: ");
    scanf(" %s", pais);

    printf("Qual o  código da carta: ");
    scanf(" %s", codigo1);

    printf("Cite um estado do(a) %s: ", pais);
    scanf(" %s", estado1);

    printf("Diga uma cidade do estado escolhido: ");
    scanf(" %s", cidade1);

    printf("Qual a populacao? ");
    scanf(" %u", &populacao1);
    printf("Qual a Area da cidade em km²? ");
    scanf(" %f", &area1);

    printf("Qual o PIB? ");
    scanf(" %f", &PIB1);

    printf("Em números, quantos pontos turisticos têm em %s ? ", cidade1);
    scanf(" %d", &NPT1);

    densidade1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;
    SuperPoder1 = populacao1 + area1 + PIB1 + NPT1 + PIBpercapita1 + (1 / densidade1);

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("Resultado da Carta 01\n");
    printf("País: %s\n", pais);
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %u\n", populacao1);
    printf("Area em km²: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Possui %d pontos turisticos.\n", NPT1);
    printf("Densidade Populacional é: %f HAB/KM²\n", densidade1);
    printf("PIB per Capita: %f Reais\n", PIBpercapita1);
    printf("O Super Poder é: %f\n", SuperPoder1);

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    // CADASTRO DA CARTA 2

    printf("Segunda Carta\n");

    printf("Qual o  código da carta 2:");
    scanf(" %s", codigo2);

    printf("Cite um estado do(a) %s:", pais);
    scanf(" %s", estado2);

    printf("Diga uma cidade do estado escolhido:");
    scanf(" %s", cidade2);

    printf("Qual a populacao?");
    scanf(" %u", &populacao2);

    printf("Qual a Area da cidade em km²?");
    scanf(" %f", &area2);

    printf("Qual o PIB? ");
    scanf("%f", &PIB2);

    printf("Em números, quantos pontos turisticos têm em %s?", cidade2);
    scanf("%d", &NPT2);

    densidade2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;
    SuperPoder2 = populacao2 + area2 + PIB2 + NPT2 + PIBpercapita2 + (1 / densidade2);

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("Resultado da Carta 02\n");
    printf("País: %s\n", pais);
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area em km²: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Possui %d pontos turisticos.\n", NPT2);
    printf("Densidade Populacional é: %f HAB/KM²\n", densidade2);
    printf("PIB per Capita: %f Reais\n", PIBpercapita2);
