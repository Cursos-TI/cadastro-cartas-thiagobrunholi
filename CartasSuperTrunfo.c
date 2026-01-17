#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[10], codigo2[10];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos1, pontos2;
  float densidade1, densidade2;
  float percapita1, percapita2;
  float superPoder1, superPoder2;

  // Área para entrada de dados
  printf("\n***Inserindo dados Carta 1***\n");

  printf("Digite o estado: ");
  scanf(" %s", &estado1);

  printf("Digite o Código da carta: ");
  scanf("%s", &codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", &cidade1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Área: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos Turísticos: ");
  scanf("%d", &pontos1);

  printf("\n***Inserindo dados Carta 2***\n");

  printf("Digite o estado: ");
  scanf(" %s", &estado2);

  printf("Digite o Código da carta: ");
  scanf("%s", &codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", &cidade2);

  printf("Digite a População: ");
  scanf("%d", &populacao2);

  printf("Digite a Área: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos Turísticos: ");
  scanf("%d", &pontos2);

  // Cálculo da densidade populacional
  densidade1 = (float)populacao1 / area1;
  densidade2 = (float)populacao2 / area2;

  // Cálculo do PIB per capita
  percapita1 = (float)(pib1 * 1000000000) / populacao1;
  percapita2 = (float)(pib2 * 1000000000) / populacao2;

  // Calculando o Super Poder
  superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + percapita1 + (1.0f / densidade1);
  superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + percapita2 + (1.0f / densidade2);

  // Área para exibição dos dados da cidade
  printf("\n***Carta 1:***\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("população: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
  printf("PIB per capita: %.2f reais\n", percapita1);
  printf("Super Poder: %2.f\n", superPoder1);

  printf("\n***Carta 2:***\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("população: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
  printf("PIB per capita: %.2f reais\n", percapita2);
  printf("Super Poder: %2.f\n", superPoder2);

  // Comparando os valores das cartas
  printf("\n***Comparação de Cartas***\n");
  printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu %d\n", area1 > area2);
  printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 venceu %d\n", pontos1 > pontos2);
  printf("Densidade Populacional: Carta 2 venceu %d\n", densidade1 < densidade2);
  printf("PIB per Capita: Carta 1 venceu %d\n", percapita1 > percapita2);
  printf("Super Poder: Carta 1 venceu %d\n", superPoder1 > superPoder2);

return 0;
} 
