#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // --- Variáveis da Carta 1 ---

  char Estado1;                    // Armazena uma única letra de 'A' a 'H' representando o estado
  char Codigo1[20];                // Guarda o código da carta (ex: A01), limitando a 20 caracteres
  char Nome1[50];                  // Guarda o nome da cidade, aceitando nomes compostos de até 50 caracteres
  int Populacao1;                  // Número inteiro para a quantidade de habitantes
  float Area1;                     // Número decimal para a área territorial em km²
  float Pib1;                      // Número decimal para o PIB da cidade em bilhões
  int Pontos_turisticos1;          // Número inteiro para a quantidade de atrações turísticas
  float Densidade_Populacional1;
  float Pib_Per_Capita1;
  // --- Variáveis da Carta 2 ---

  char Estado2;                    // Mesma lógica da carta 1, mas para armazenar os dados do segundo país/cidade
  char Codigo2[20];
  char Nome2[50];
  int Populacao2;
  float Area2;
  float Pib2;
  int Pontos_turisticos2;
  float Densidade_Populacional2;
  float Pib_Per_Capita2;

  // Área para entrada de dados

  printf("--- CADASTRO DA CARTA 1 ---\n");


  printf("Digite a letra do estado (A-H): ");
  scanf(" %c", &Estado1);

  printf("Digite o Codigo da Carta (Ex: A01): ");
  scanf("%s", Codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", Nome1);

  printf("Digite a Populacao: ");
  scanf("%d", &Populacao1);

  printf("Digite a Area (em Km²): ");
  scanf("%f", &Area1);

  printf("Digite o Pib: ");
  scanf("%f", &Pib1);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &Pontos_turisticos1);

  Densidade_Populacional1 = Populacao1 / Area1;
  Pib_Per_Capita1 = Pib1 / Populacao1;

  //Área para entrada de dados 2

  printf("--- CADASTRO DA CARTA 2 ---\n");

  printf("Digite a Letra do Estado A-H: ");
  scanf(" %c", &Estado2);

  printf("Digite o Codigo da Carta (Ex: B02): ");
  scanf("%s", Codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", Nome2);

  printf("Digite a Populacao: ");
  scanf("%d", &Populacao2);

  printf("Digite a Area (em Km²): ");
  scanf("%f", &Area2);

  printf("Digite o Pib: ");
  scanf("%f", &Pib2);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &Pontos_turisticos2);

  Densidade_Populacional2 = Populacao2 / Area2;
  Pib_Per_Capita2 = Pib2 / Populacao2;
  
  // Área para exibição dos dados da cidade

  //CARTAS CADASTRADAS (CARTA 1)

    printf("\n====================================\n");
    printf("         CARTAS CADASTRADAS         \n");
    printf("====================================\n\n");


  printf("Carta 1:\n");
  printf("Estado: %c\n" ,Estado1);
  printf("Codigo da Carta: %s\n", Codigo1);
  printf("Nome da Cidade: %s\n", Nome1);
  printf("Populacao: %d\n", Populacao1);
  printf("Area em Km²: %.2f km²\n", Area1);
  printf("Numero de Pontos_Turisticos: %d\n", Pontos_turisticos1);
  printf("Pib: %.2f Bilhoes de Reais\n", Pib1);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
  printf("Pib_Per_Capita: %.2f reais\n", Pib_Per_Capita1);

  printf("\n");
  //CARTAS CADASTRADAS (CARTA 2)

  printf("Carta 2:\n");
  printf("Estado: %c\n" ,Estado2);
  printf("Codigo da Carta: %s\n", Codigo2);
  printf("Nome da Cidade: %s\n", Nome2);
  printf("Populacao: %d\n", Populacao2);
  printf("Area em Km²: %.2f km²\n", Area2);
  printf("Numeros de Pontos_Turisticos: %d\n", Pontos_turisticos2);
  printf("Pib: %.2f Bilhoes de Reais\n", Pib2);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
  printf("Pib_Per_Capita: %.2f reais\n", Pib_Per_Capita2);
  
  
     return 0;


} 
