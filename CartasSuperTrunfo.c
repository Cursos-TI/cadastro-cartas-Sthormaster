#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  unsigned long int populacao1, populacao2, resultado; 
  unsigned int turismo1, turismo2;
  float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, super1, super2;
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
  scanf("%lu", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Pontos turísticos: ");
  scanf("%u", &turismo1);

  printf("\n");// Quebra de linha para separação e organização

  // Carta 2
  printf("Carta 2: \n\n");

  printf("Nome: ");
  scanf("%s", nome2);

  printf("Estado: ");
  scanf("%s", estado2);

  printf("Código: ");
  scanf("%s", codigo2);

  printf("População: ");
  scanf("%lu", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Pontos turísticos: ");
  scanf("%u", &turismo2);

  printf("\n");//Quebra de linha para separação e organização

  //Calculando caracteristicas para comparação
//Carta1
        densidade1 = (float) populacao1 / area1;
        capita1 = (float) pib1 / populacao1;
        super1 = (float) (populacao1 + area1 + turismo1 + pib1 + capita1) / densidade1;
//Carta2
        densidade2 = (float) populacao2 / area2;
        capita2 = (float) pib2 / populacao2;
        super2 = (float) (populacao2 + area2 + turismo2 + pib2 + capita2) / densidade2;

  //Exibindo os atributos das cartas
        printf("Carta 1:\n\nNome: %s\nEstado: %s\nCódigo: %s\nPopulação: %lu Habitantes\nÁrea: %.2fKm²\nPIB: R$%.2f\nPontos Turísticos: %u\nDensinade Populacional: %.2f Hab/Km²\nPIB Per Capta: R$%.2f\nSuper Poder: %.2f\n\n", nome1, estado1, codigo1, populacao1, area1, pib1, turismo1, densidade1, capita1, super1);

        printf("Carta 2:\n\nNome: %s\nEstado: %s\nCódigo: %s\nPopulação: %lu Habitantes\nÁrea: %.2fKm²\nPIB: R$%.2f\nPontos Turísticos: %u\nDensinade Populacional: %.2f Hab/Km²\nPIB Per Capta: R$%.2f\nSuper Poder: %.2f\n\n", nome2, estado2, codigo2, populacao2, area2, pib2, turismo2, densidade2, capita2, super2);

//Realizando comparações entre as cartas
        printf("\nComparações entre as cartas:\n\n");
//Usei apenas uma variável "resultado" para armazenar os resultados das comparações, pois o resultado é atualizado a cada comparação com o valor booleano (0 ou 1) exibindo o vencedor correto!
        resultado = (populacao1 > populacao2);
        printf("População: %lu\n", resultado);

        resultado = (area1 > area2);
        printf("Área: %lu\n", resultado);

        resultado = (pib1 > pib2);
        printf("PIB: %lu\n", resultado);

        resultado = (turismo1 > turismo2);
        printf("Pontos Turísticos: %lu\n", resultado);

        resultado = (densidade1 > densidade2);
        printf("Densidade Populacional: %lu\n", resultado);

        resultado = (capita1 > capita2);
        printf("PIB Per Capta: %lu\n", resultado);

        resultado = (super1 > super2);
        printf("Super Poder: %lu\n\n", resultado);

        return 0;
}