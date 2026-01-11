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

  // Área para entrada de dados
  printf("Inserindo dados Carta 1\n");

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

  printf("\nInserindo dados Carta 2\n");

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

  // Área para exibição dos dados da cidade

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("população: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("população: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos2);

return 0;
} 
