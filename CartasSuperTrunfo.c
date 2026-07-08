#include <stdio.h>

int main() {

    char nome1[50], nome2[50];
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;

    int opcao1, opcao2;

    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;

    float soma1, soma2;

    printf("===== CARTA 1 =====\n");

    printf("Nome: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &pop1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    pib1 *= 1000000000.0f; // Multiplica por 1 bilhão

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float)pop1 / area1;

    printf("\n===== CARTA 2 =====\n");

    printf("Nome: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &pop2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    pib2 *= 1000000000.0f; // Multiplica por 1 bilhão

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = (float)pop2 / area2;

    printf("\nPRIMEIRO ATRIBUTO\n");
    printf("1-Populacao\n");
    printf("2-Area\n");
    printf("3-PIB\n");
    printf("4-Pontos Turisticos\n");
    printf("5-Densidade Demografica\n");
    scanf("%d",&opcao1);

    printf("\nSEGUNDO ATRIBUTO\n");

    switch(opcao1)
    {
        case 1:
            printf("2-Area\n3-PIB\n4-Pontos Turisticos\n5-Densidade Demografica\n");
            break;

        case 2:
            printf("1-Populacao\n3-PIB\n4-Pontos Turisticos\n5-Densidade Demografica\n");
            break;

        case 3:
            printf("1-Populacao\n2-Area\n4-Pontos Turisticos\n5-Densidade Demografica\n");
            break;

        case 4:
            printf("1-Populacao\n2-Area\n3-PIB\n5-Densidade Demografica\n");
            break;

        case 5:
            printf("1-Populacao\n2-Area\n3-PIB\n4-Pontos Turisticos\n");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    scanf("%d",&opcao2);

    if(opcao1 == opcao2 || opcao2 < 1 || opcao2 > 5)
    {
        printf("Escolha dois atributos diferentes!\n");
        return 0;
    }

    switch(opcao1)
    {
        case 1: valor1_c1 = (float)pop1; valor1_c2 = (float)pop2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = (float)pontos1; valor1_c2 = (float)pontos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        default: return 0;
    }

    switch(opcao2)
    {
        case 1: valor2_c1 = (float)pop1; valor2_c2 = (float)pop2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = (float)pontos1; valor2_c2 = (float)pontos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        default: return 0;
    }

    // Densidade: menor valor vence
    if(opcao1 == 5){
        valor1_c1 *= -1;
        valor1_c2 *= -1;
    }

    if(opcao2 == 5){
        valor2_c1 *= -1;
        valor2_c2 *= -1;
    }

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\n==============================\n");
    printf("RESULTADO DA COMPARACAO\n");
    printf("==============================\n\n");

    printf("%s X %s\n\n", nome1, nome2);

    printf("Primeiro atributo: ");

    switch(opcao1){
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        default: printf("Invalido\n"); break;
    }

    // Exibição do valor 
    printf("%s: %.2f\n", nome1, (opcao1 == 5) ? -valor1_c1 : valor1_c1);
    printf("%s: %.2f\n", nome2, (opcao1 == 5) ? -valor1_c2 : valor1_c2);
    // Vencedor Atributo 1
    printf("Vencedor: %s\n\n", (valor1_c1 > valor1_c2) ? nome1 : (valor1_c2 > valor1_c1) ? nome2 : "Empate");

    printf("Segundo atributo: ");

    switch(opcao2){
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        default: printf("Invalido\n"); break;
    }

    // Exibição do valor 
    printf("%s: %.2f\n", nome1, (opcao2 == 5) ? -valor2_c1 : valor2_c1);
    printf("%s: %.2f\n", nome2, (opcao2 == 5) ? -valor2_c2 : valor2_c2);
    // Vencedor Atributo 2
    printf("Vencedor: %s\n\n", (valor2_c1 > valor2_c2) ? nome1 : (valor2_c2 > valor2_c1) ? nome2 : "Empate");

    printf("Soma de %s: %.2f\n", nome1, soma1);
    printf("Soma de %s: %.2f\n\n", nome2, soma2);

    printf("Vencedor Final: %s\n",
           (soma1 > soma2) ? nome1 :
           (soma2 > soma1) ? nome2 :
           "Empate!");

    return 0;
}