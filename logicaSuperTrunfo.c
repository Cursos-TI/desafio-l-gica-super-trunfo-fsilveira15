#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Nível Mestre

float getAtributo(int escolha, char* nome,
                  int pop, float area, float pib, int pontos, float dens) {
    switch (escolha) {
        case 1: strcpy(nome, "População"); return (float)pop;
        case 2: strcpy(nome, "Área"); return area;
        case 3: strcpy(nome, "PIB"); return pib;
        case 4: strcpy(nome, "Pontos Turísticos"); return (float)pontos;
        case 5: strcpy(nome, "Densidade Demográfica"); return dens;
        default: strcpy(nome, "Inválido"); return 0;
    }
}

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
  
  // Cadastro Carta 2
  printf("----------\nInformações para a segunda carta (País 2)\n----------\n");
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

  int escolha1, escolha2;
  float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
  char nome_attr1[30], nome_attr2[30];
  float soma1, soma2;

  printf("\n\n--- Comparação ---\n");
  printf("Escolha o PRIMEIRO atributo para comparar:\n");
  printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
  printf("Escolha (1-5): ");
  scanf(" %d", &escolha1);

  do {
    printf("\nEscolha o SEGUNDO atributo (não pode ser %d):\n", escolha1);
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Escolha (1-5): ");
    scanf(" %d", &escolha2);
    if (escolha1 == escolha2) {
      printf("Erro: Você não pode selecionar o mesmo atributo duas vezes.\n");
    }
  } while (escolha1 == escolha2);

  valor1_c1 = getAtributo(escolha1, nome_attr1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacao1);
  valor1_c2 = getAtributo(escolha1, nome_attr1, populacao2, area2, pib2, pontos_turisticos2, densidade_populacao2);
  valor2_c1 = getAtributo(escolha2, nome_attr2, populacao1, area1, pib1, pontos_turisticos1, densidade_populacao1);
  valor2_c2 = getAtributo(escolha2, nome_attr2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacao2);

  printf("\n--- Resultado da Comparação ---\n");
  printf("País 1: %s\n", nome_pais1);
  printf("País 2: %s\n", nome_pais2);
  printf("Atributos escolhidos: %s e %s\n", nome_attr1, nome_attr2);
  printf("\nComparação 1 (%s):\n", nome_attr1);
  printf("  Valores: %.2f (%s) vs %.2f (%s)\n", valor1_c1, nome_pais1, valor1_c2, nome_pais2);
  printf("  Resultado: %s\n", (escolha1 == 5)
      ? (valor1_c1 < valor1_c2 ? "País 1 vence (menor vence)" : (valor1_c2 < valor1_c1 ? "País 2 vence (menor vence)" : "Empate"))
      : (valor1_c1 > valor1_c2 ? "País 1 vence (maior vence)" : (valor1_c2 > valor1_c1 ? "País 2 vence (maior vence)" : "Empate"))
  );

  printf("Comparação 2 (%s):\n", nome_attr2);
  printf("  Valores: %.2f (%s) vs %.2f (%s)\n", valor2_c1, nome_pais1, valor2_c2, nome_pais2);
  printf("  Resultado: %s\n", (escolha2 == 5)
      ? (valor2_c1 < valor2_c2 ? "País 1 vence (menor vence)" : (valor2_c2 < valor2_c1 ? "País 2 vence (menor vence)" : "Empate"))
      : (valor2_c1 > valor2_c2 ? "País 1 vence (maior vence)" : (valor2_c2 > valor2_c1 ? "País 2 vence (maior vence)" : "Empate"))
  );

  soma1 = valor1_c1 + valor2_c1;
  soma2 = valor1_c2 + valor2_c2;

  printf("\n--- Resultado Final (Soma dos Atributos) ---\n");
  printf("Soma País 1 (%s + %s): %.2f\n", nome_attr1, nome_attr2, soma1);
  printf("Soma País 2 (%s + %s): %.2f\n", nome_attr1, nome_attr2, soma2);

  if (soma1 > soma2) {
    printf("VENCEDOR DA RODADA: País 1 (%s)!\n", nome_pais1);
  } else if (soma2 > soma1) {
    printf("VENCEDOR DA RODADA: País 2 (%s)!\n", nome_pais2);
  } else {
    printf("RESULTADO DA RODADA: Empate!\n");
  }

  return 0;
}