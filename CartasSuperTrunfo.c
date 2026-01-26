#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao1, populacao2, populacao3, turismo1, turismo2, turismo3;
  float area1, area2, area3, pib1, pib2, pib3, densidade1, densidade2, capita1, capita2;
  char estado1[3], estado2[3], nome1[25], nome2[25], codigo1[5], codigo2[5];

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

  //Calculando caracteristicas para comparação
//Carta1
        densidade1 = (float) populacao1 / area1;
        capita1 = (float) pib1 / populacao1;
//Carta2
        densidade2 = (float) populacao2 / area2;
        capita2 = (float) pib2 / populacao2;


  //Exibindo os atributos das cartas
        printf("Carta 1:\n\nNome: %s\nEstado: %s\nCódigo: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: R$%.2f Milhões\nPontos turísticos: %d\nDensinade Populacional: %.2f Hab/Km²\nPIB Per Capta: R$%.2f\n\n", nome1, estado1, codigo1, populacao1, area1, pib1, turismo1, densidade1, capita1);

        printf("Carta 2:\n\nNome: %s\nEstado: %s\nCódigo: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: R$%.2f Milhões\nPontos turísticos: %d\nDensinade Populacional: %.2f Hab/Km²\nPIB Per Capta: R$%.2f\n\n", nome2, estado2, codigo2, populacao2, area2, pib2, turismo2, densidade2, capita2);

  return 0;
} 
