#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao1, populacao2, populacao3, turismo1, turismo2, turismo3;
  float area1, area2, area3, pib1, pib2, pib3;
  char estado1[2], estado2[2], estado3[2], nome1[25], nome2[25], nome3[25], codigo1[3], codigo2[3], codigo3[3];

  printf("Vamos cadastrar as caratas: \n");

  // Área para entrada de dados
  // Carta 1
  printf("Carta 1: \n\n");

  printf("Nome: ");
  scanf("%s", nome1);

  printf("Estado: ");
  scanf("%s", estado1);

  printf("Código: ");
  scanf("%s", codigo1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Pontos turísticos: ");
  scanf("%d", &turismo1);

  printf("\n");// Quebra de linha para separar e ficar mais organizado

  // Carta 2
  printf("Carta 2: \n\n");

  printf("Nome: ");
  scanf("%s", nome2);

  printf("Estado: ");
  scanf("%s", estado2);

  printf("Código: ");
  scanf("%s", codigo2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Pontos turísticos: ");
  scanf("%d", &turismo2);

  printf("\n");//Quebra de linha para separar e ficar mais organizado

  // Carta 3
  printf("Carta 3: \n\n");

  printf("Nome: ");
  scanf("%s", nome3);

  printf("Estado: ");
  scanf("%s", estado3);

  printf("Código: ");
  scanf("%s", codigo3);

  printf("População: ");
  scanf("%d", &populacao3);

  printf("Área: ");
  scanf("%f", &area3);

  printf("PIB: ");
  scanf("%f", &pib3);

  printf("Pontos turísticos: ");
  scanf("%d", &turismo3);

  printf("\n");//Quebra de linha para separar e ficar mais organizado

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n\nNome: %s\nEstado: %s\nCódigo: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: R$%.2f\nPontos turísticos: %d\n\n", nome1, estado1, codigo1, populacao1, area1, pib1, turismo1);

  printf("Carta 2:\n\nNome: %s\nEstado: %s\nCódigo: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: R$%.2f\nPontos turísticos: %d\n\n", nome2, estado2, codigo2, populacao2, area2, pib2, turismo2);

  printf("Carta 3:\n\nNome: %s\nEstado: %s\nCódigo: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: R$%.2f\nPontos turísticos: %d\n\n", nome3, estado3, codigo3, populacao3, area3, pib3, turismo3);


return 0;
} 
