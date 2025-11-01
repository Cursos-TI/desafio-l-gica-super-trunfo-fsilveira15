#include <stdio.h>

// Desafio Super Trunfo - Nível Aventureiro

int main() {

  // Variáveis da Carta 1
  char estado1;
  char codigo1[3] ;
  char nome_pais1[20];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  float densidade_populacao1;
  float pib_percapta1;

  // Variáveis da Carta 2
  char estado2;
  char codigo2[3] ;
  char nome_pais2[20];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacao2;
  float pib_percapta2;

  // Cadastro Carta 1
  printf("Informações para a primeira carta (País 1)\n----------\n");
  printf("Coloque a letra do continente (Entre A e H): \n");
  scanf(" %c", &estado1);
  printf("Coloque o código do país (número entre 01 e 04): \n");
  scanf(" %s", codigo1);
  printf("Coloque o nome do país: \n");
  scanf(" %s", nome_pais1);
  printf("Coloque o número da população: \n");
  scanf(" %d", &populacao1);
  printf("Coloque a área em km²: \n");
  scanf(" %f", &area1);
  printf("Coloque o PIB em bilhões de dólares: \n");
  scanf(" %f", &pib1);
  printf("Coloque o número de pontos turísticos: \n");
  scanf(" %d", &pontos_turisticos1);

  densidade_populacao1 = ((float) populacao1 / area1);
  pib_percapta1 = ((pib1 * 1000000000) / populacao1);

  // Cadastro Carta 2
  printf("----------\nInformações para a segunda carta (País 2)\n----------\n");
  printf("Coloque a letra do continente (Entre A e H): \n");
  scanf(" %c", &estado2);
  printf("Coloque o código do país (número entre 01 e 04): \n");
  scanf(" %s", codigo2);
  printf("Coloque o nome do país: \n");
  scanf(" %s", nome_pais2);
  printf("Coloque o número da população: \n");
  scanf(" %d", &populacao2);
  printf("Coloque a área em km²: \n");
  scanf(" %f", &area2);
  printf("Coloque o PIB em bilhões de dólares: \n");
  scanf(" %f", &pib2);
  printf("Coloque o número de pontos turísticos: \n");
  scanf(" %d", &pontos_turisticos2);

  densidade_populacao2 = ((float) populacao2 / area2);
  pib_percapta2 = ((pib2 * 1000000000) / populacao2);
  int escolha;

  printf("\n\n--- Comparação ---\n");
  printf("Escolha o atributo para comparar:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de Pontos Turísticos\n");
  printf("5. Densidade Demográfica\n");
  scanf(" %d", &escolha);

  printf("\n--- Resultado da Comparação ---\n");
  printf("País 1: %s\n", nome_pais1);
  printf("País 2: %s\n", nome_pais2);

  switch (escolha) {
    case 1:
      printf("Atributo: População\n"); [cite: 775]
      printf("Valores: %d (País 1) vs %d (País 2)\n", populacao1, populacao2); [cite: 776]
      if (populacao1 > populacao2) {
        printf("Vencedor: País 1 (%s)\n", nome_pais1);
      } else if (populacao2 > populacao1) {
        printf("Vencedor: País 2 (%s)\n", nome_pais2);
      } else {
        printf("Resultado: Empate!\n");
      }
      break;

    case 2:
      printf("Atributo: Área\n"); [cite: 775]
      printf("Valores: %.2f (País 1) vs %.2f (País 2)\n", area1, area2); [cite: 776]
      if (area1 > area2) {
        printf("Vencedor: País 1 (%s)\n", nome_pais1);
      } else if (area2 > area1) {
        printf("Vencedor: País 2 (%s)\n", nome_pais2);
      } else {
        printf("Resultado: Empate!\n"); [cite: 778]
      }
      break;

    case 3:
      printf("Atributo: PIB\n"); [cite: 775]
      printf("Valores: %.2f (País 1) vs %.2f (País 2)\n", pib1, pib2); [cite: 776]
      if (pib1 > pib2) {
        printf("Vencedor: País 1 (%s)\n", nome_pais1);
      } else if (pib2 > pib1) {
        printf("Vencedor: País 2 (%s)\n", nome_pais2);
      } else {
        printf("Resultado: Empate!\n"); [cite: 778]
      }
      break;

    case 4:
      printf("Atributo: Pontos Turísticos\n"); [cite: 775]
      printf("Valores: %d (País 1) vs %d (País 2)\n", pontos_turisticos1, pontos_turisticos2); [cite: 776]
      if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Vencedor: País 1 (%s)\n", nome_pais1);
      } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("Vencedor: País 2 (%s)\n", nome_pais2);
      } else {
        printf("Resultado: Empate!\n"); [cite: 778]
      }
      break;

    case 5:
      printf("Atributo: Densidade Demográfica\n"); [cite: 775]
      printf("Valores: %.2f (País 1) vs %.2f (País 2)\n", densidade_populacao1, densidade_populacao2); [cite: 776]
  
      if (densidade_populacao1 < densidade_populacao2) {
        printf("Vencedor: País 1 (%s) (Menor densidade vence)\n", nome_pais1);
      } else if (densidade_populacao2 < densidade_populacao1) {
        printf("Vencedor: País 2 (%s) (Menor densidade vence)\n", nome_pais2);
      } else {
        printf("Resultado: Empate!\n"); [cite: 778]
      }
      break;

    default:
      printf("Opção inválida. Por favor, reinicie e escolha um número de 1 a 5.\n");
      break;
  }

  return 0;
}