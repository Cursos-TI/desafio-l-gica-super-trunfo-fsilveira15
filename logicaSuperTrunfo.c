#include <stdio.h>

// Desafio Super Trunfo - Nível Novato


int main() {

  // Variáveis da Carta 1
  char estado1;
  char codigo1[3] ;
  char nome_cidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  float densidade_populacao1;
  float pib_percapta1;

  // Variáveis da Carta 2
  char estado2;
  char codigo2[3] ;
  char nome_cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacao2;
  float pib_percapta2;

  // Cadastro Carta 1
  printf("Informações para a primeira carta\n----------\n");
  printf("Coloque a letra do estado (Entre A e H): \n");
  scanf(" %c", &estado1);
  printf("Coloque o código da cidade (número entre 01 e 04): \n");
  scanf(" %s", codigo1);
  printf("Coloque o nome da cidade: \n");
  scanf(" %s", nome_cidade1);
  printf("Coloque o número da população: \n");
  scanf(" %d", &populacao1);
  printf("Coloque a área em km²: \n");
  scanf(" %f", &area1);
  printf("Coloque o PIB em bilhões reais: \n");
  scanf(" %f", &pib1);
  printf("Coloque o número de pontos turísticos: \n");
  scanf(" %d", &pontos_turisticos1);

  
  densidade_populacao1 = ((float) populacao1 / area1);
  pib_percapta1 = ((pib1 * 1000000000) / populacao1);

  // Cadastro Carta 2
  printf("----------\nInformações para a segunda carta\n----------\n");
  printf("Coloque a letra do estado (Entre A e H): \n");
  scanf(" %c", &estado2);
  printf("Coloque o código da cidade (número entre 01 e 04): \n");
  scanf(" %s", codigo2);
  printf("Coloque o nome da cidade: \n");
  scanf(" %s", nome_cidade2);
  printf("Coloque o número da população: \n");
  scanf(" %d", &populacao2);
  printf("Coloque a área em km²: \n");
  scanf(" %f", &area2);
  printf("Coloque o PIB em bilhões reais: \n");
  scanf(" %f", &pib2);
  printf("Coloque o número de pontos turísticos: \n");
  scanf(" %d", &pontos_turisticos2);

  
  densidade_populacao2 = ((float) populacao2 / area2); 
  pib_percapta2 = ((pib2 * 1000000000) / populacao2);


  printf("\n\n--- Resultado da Comparação ---\n");
  printf("Atributo escolhido: População\n");

  
  printf("Carta 1 %s: %d\n", nome_cidade1, populacao1);
  printf("Carta 2 %s: %d\n", nome_cidade2, populacao2);

  if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
  } else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
  } else {
    printf("Resultado: Empate!\n");
  }

  return 0;
}
