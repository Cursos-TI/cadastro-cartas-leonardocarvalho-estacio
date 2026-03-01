#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  int populacao1, numero_pontos_turisticos1, populacao2, numero_pontos_turisticos2;
  float super_poder1, super_poder2, area_cidade1, pib1, area_cidade2, pib2, densidade_populacional1 = 0, densidade_populacional2 = 0, pib_per_capita1 = 0, pib_per_capita2 = 0;
  char estado1, codigo_carta1[20], nome_cidade1[50], estado2, codigo_carta2[20], nome_cidade2[50];
  
  // Área para entrada de dados

  printf("Digite os dados de duas cartas para o jogo Super Trunfo de Paises.\n");

  // Solicitação dos dados da primeira carta

  printf("\nDigite o Estado da primeira carta: ");
  scanf(" %c", &estado1);

  printf("\nDigite o codigo da primeira carta: ");
  scanf(" %s", &codigo_carta1);
  getchar();

  printf("\nDigite o nome da cidade da primeira carta: ");
  fgets(nome_cidade1, 50, stdin);

  printf("\nDigite o numero de habitantes da cidade da primeira carta: ");
  scanf(" %i", &populacao1);

  printf("\nDigite a area em quilometros quadrados da cidade da primeira carta: ");
  scanf(" %f", &area_cidade1);

  printf("\nDigite o PIB da cidade da primeira carta: ");
  scanf(" %f", &pib1);

  printf("\nDigite o numero de pontos turisticos da cidade da primeira carta: ");
  scanf(" %i", &numero_pontos_turisticos1);

  // Calculando densidade populacional e pib per capita da carta 1

  densidade_populacional1 = populacao1/area_cidade1;
  pib_per_capita1 = pib1/populacao1;
  super_poder1 = ( (float) populacao1 + area_cidade1 + pib1 + (float) numero_pontos_turisticos1 + pib_per_capita1 - densidade_populacional1 );

  printf ("O super poder da carta 1 é %f", super_poder1)
  // Solicitação dos dados da segunda carta

  printf("\nAgora serao requisitados os dados da segunda carta.\n");
    
  printf("\nDigite o Estado da segunda carta: ");
  scanf(" %c", &estado2);

  printf("\nDigite o codigo da segunda carta: ");
  scanf(" %s", &codigo_carta2);
  getchar();

  printf("\nDigite o nome da cidade da segunda carta: ");
  fgets(nome_cidade2, 50, stdin);

  printf("\nDigite o numero de habitantes da cidade da segunda carta: ");
  scanf(" %i", &populacao2);

  printf("\nDigite a area em quilometros quadrados da cidade da segunda carta: ");
  scanf(" %f", &area_cidade2);

  printf("\nDigite o PIB da cidade da segunda carta: ");
  scanf(" %f", &pib2);

  printf("\nDigite o numero de pontos turisticos da cidade da segunda carta: ");
  scanf(" %i", &numero_pontos_turisticos2);

  // Calculando densidade populacional e pib per capita da carta 2

  densidade_populacional2 = populacao2/area_cidade2;
  pib_per_capita2 = pib2/populacao2;

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %c", estado1);
  printf("\nCódigo: %s", codigo_carta1);
  printf("\nNome da Cidade: %s", nome_cidade1);
  printf("População: %i", populacao1);
  printf("\nÁrea: %.2f km²", area_cidade1);
  printf("\nPIB: %.2f bilhões de reais", pib1);
  printf("\nNúmero de Pontos Turísticos: %i", numero_pontos_turisticos1);
  printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional1);
  printf("\nPIB per Capita: %.2f reais", pib_per_capita1);

  printf("\n\n");

  printf("Carta 2:\n");
  printf("Estado: %c", estado2);
  printf("\nCódigo: %s", codigo_carta2);
  printf("\nNome da Cidade: %s", nome_cidade2);
  printf("População: %i", populacao2);
  printf("\nÁrea: %.2f km²", area_cidade2);
  printf("\nPIB: %.2f bilhões de reais", pib2);
  printf("\nNúmero de Pontos Turísticos: %i", numero_pontos_turisticos2);
  printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional2);
  printf("\nPIB per Capita: %.2f reais", pib_per_capita2);

return 0;
} 
