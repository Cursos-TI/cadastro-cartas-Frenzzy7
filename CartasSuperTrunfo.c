#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // --- Variáveis da Carta 1 ---

  int opcao; 
  char Estado1;                    // Armazena uma única letra de 'A' a 'H' representando o estado
  char Codigo1[20];                // Guarda o código da carta (ex: A01), limitando a 20 caracteres
  char Nome1[50];                  // Guarda o nome da cidade, aceitando nomes compostos de até 50 caracteres
  unsigned long int Populacao1;    // Número inteiro para a quantidade de habitantes
  float Area1;                     // Número decimal para a área territorial em km²
  float Pib1;                      // Número decimal para o PIB da cidade em bilhões
  int Pontos_turisticos1;          // Número inteiro para a quantidade de atrações turísticas
  float Densidade_Populacional1;
  float Pib_Per_Capita1;
  float super_poder1;
  float Inverso_Densidade1;
  // --- Variáveis da Carta 2 ---

  char Estado2;                    // Mesma lógica da carta 1, mas para armazenar os dados do segundo país/cidade
  char Codigo2[20];
  char Nome2[50];
  unsigned long int Populacao2;
  float Area2;
  float Pib2;
  int Pontos_turisticos2;
  float Densidade_Populacional2;
  float Pib_Per_Capita2;
  float super_poder2;
  float Inverso_Densidade2;

  // Área para entrada de dados

  printf("--- CADASTRO DA CARTA 1 ---\n");


  printf("Digite a letra do estado (A-H): ");
  scanf(" %c", &Estado1);

  printf("Digite o Codigo da Carta (Ex: A01): ");
  scanf("%s", Codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]s", Nome1);

  printf("Digite a Populacao: ");
  scanf("%lu", &Populacao1);

  printf("Digite a Area (em Km²): ");
  scanf("%f", &Area1);

  printf("Digite o Pib: ");
  scanf("%f", &Pib1);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &Pontos_turisticos1);

  // Cálculos da Carta 1

  Densidade_Populacional1 = Populacao1 / Area1; 
  Pib_Per_Capita1 = (Pib1 * 1000000000.0) / Populacao1;
  Inverso_Densidade1 = 1.0f / Densidade_Populacional1;

  //Área para entrada de dados 2

  printf("--- CADASTRO DA CARTA 2 ---\n");

  printf("Digite a Letra do Estado A-H: ");
  scanf(" %c", &Estado2);

  printf("Digite o Codigo da Carta (Ex: B02): ");
  scanf("%s", Codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]s", Nome2);

  printf("Digite a Populacao: ");
  scanf("%lu", &Populacao2);

  printf("Digite a Area (em Km²): ");
  scanf("%f", &Area2);

  printf("Digite o Pib: ");
  scanf("%f", &Pib2);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &Pontos_turisticos2);

  // Cálculos da Carta 2

  Densidade_Populacional2 = Populacao2 / Area2;
  Pib_Per_Capita2 = (Pib2 * 1000000000.0) / Populacao2;
  Inverso_Densidade2 = 1.0f / Densidade_Populacional2;

  // Cálculo do Super Poder 1 (Convertendo tipos explicitamente com casting)
  super_poder1 = (float)Populacao1 + Area1 + (Pib1 * 1000000000.0f) + (float)Pontos_turisticos1 + Pib_Per_Capita1 + Inverso_Densidade1;
  
  // Área para exibição dos dados da cidade

  //CARTAS CADASTRADAS (CARTA 1)

    printf("\n====================================\n");
    printf("         CARTAS CADASTRADAS         \n");
    printf("====================================\n\n");


  printf("Carta 1:\n");
  printf("Estado: %c\n" ,Estado1);
  printf("Codigo da Carta: %s\n", Codigo1);
  printf("Nome da Cidade: %s\n", Nome1);
  printf("Populacao: %lu\n", Populacao1);
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
  printf("Populacao: %lu\n", Populacao2);
  printf("Area em Km²: %.2f km²\n", Area2);
  printf("Numeros de Pontos_Turisticos: %d\n", Pontos_turisticos2);
  printf("Pib: %.2f Bilhoes de Reais\n", Pib2);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
  printf("Pib_Per_Capita: %.2f reais\n", Pib_Per_Capita2);

  // --- EXIBIÇÃO DOS RESULTADOS DAS COMPARAÇÕES ---
    printf("\n====================================\n");
    printf("        COMPARACAO DE CARTAS        \n");
    printf("====================================\n\n");

    // Comparando As Duas Cartas

    printf("Escolha o atributo para comparacao:\n");
    printf("1. Populacao: \n");
    printf("2. Area: \n");
    printf("3. Pib: \n");
    printf("4. Pontos Turisticos: \n");
    printf("5. Densidade Populacao: \n");
    printf("Digite sua Opcao: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (Populacao1 > Populacao2)
        {
            printf("A Cidade %s VENCEU!!\n", Nome1);
            printf("Comparacao: %s (%lu) VS %s (%lu)", Nome1, Populacao1, Nome2, Populacao2);
        } else if (Populacao2 > Populacao1)
        {
            printf("A cidade %s VENCEU!!\n", Nome2);
            printf("Comparacao: %s (%lu) VS %s (%lu)", Nome2, Populacao2, Nome1, Populacao1);
        } else
        {
          printf("EMPATE.\n");
          printf("Ambas Cartas Possuem: %lu de habitantes\n", Populacao1);
        }
      break;
     case 2: 
      if (Area1 > Area2)
      {
        printf("A cidade %s VENCEU!!\n", Nome1);
        printf("Comparacao: %s (%.2f) VS %s (%.2f)\n", Nome1, Area1, Nome2, Area2);
      } else if (Area2 > Area1)
      {
        printf("A cidade %s VENCEU!!\n", Nome2);
        printf("Comparacao: %s (%.2f) VS %s (%.2f)\n", Nome2, Area2, Nome1, Area1);
      } else
      {
        printf("EMPATE.\n");
        printf("Ambas Cartas Possuem: %.2f Km²\n", Area1);
      }
      break;
    case 3: 
      if (Pib1 > Pib2)
      {
        printf("A cidade %s VENCEU!!\n", Nome1);
        printf("Comparacao: %s (%.2f) VS %s (%.2f)\n", Nome1, Pib1, Nome2, Pib2);
      } else if (Pib2 > Pib1)
      {
        printf("A cidade %s VENCEU!!\n", Nome2);
        printf("Comparacao: %s (%.2f) VS %s (.%2f)\n", Nome2, Pib2, Nome1, Pib1);
      } else
      {
        printf("EMPATE.\n");
        printf("Ambas Cartas Possuem: R$ %.2f\n", Pib1);
      }
      break;
    case 4:
      if (Pontos_turisticos1 > Pontos_turisticos2)
      {
        printf("A cidade %s VENCEU!!\n", Nome1);
        printf("Comparacao: %s (%d) VS %s (%d)\n", Nome1, Pontos_turisticos1, Nome2, Pontos_turisticos2);
      } else if (Pontos_turisticos2 > Pontos_turisticos1)
      {
        printf("A cidade %s VENCEU!!\n", Nome2);
        printf("Comparacao: %s (%d) VS %s (%d)\n", Nome2 , Pontos_turisticos2, Nome1 , Pontos_turisticos2);
      } else
      {
        printf("EMPATE.\n");
        printf("Ambas Cartas Possuem %d Pontos Turisticos\n", Pontos_turisticos1);
      }
      break;
    case 5:
      if (Densidade_Populacional1 < Densidade_Populacional2 )
      {
        printf("A cidade %s VENCEU!!\n", Nome1);
        printf("Comparacao: %s (%.2f) VS %s (%.2f)\n", Nome1, Densidade_Populacional1, Nome2, Densidade_Populacional2);
      } else if (Densidade_Populacional2 < Densidade_Populacional1)
      {
        printf("A cidade %s VENCEU!!", Nome2);
        printf("Comparacao: %s (%.2f) VS %s (%.2f)\n", Nome2, Densidade_Populacional2, Nome1, Densidade_Populacional1);
      } else
      {
        printf("EMPATE.\n");
        printf("Ambas cartas tem a mesma Densidade Populacional: %.2f\n", Densidade_Populacional1);
      }
      break;
      }
      
         

     return 0;


} 
