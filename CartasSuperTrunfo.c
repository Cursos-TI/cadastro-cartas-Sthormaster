#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  unsigned long int populacao1, populacao2; 
  unsigned int turismo1, turismo2, atributo1, atributo2, resultado1, resultado2;
  float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, super1, super2;
  char estado1[4], estado2[4], nome1[25], nome2[25], codigo1[5], codigo2[5];

  printf("### Bem-vindo ao Super Trunfo - Países! ###\n\n");
  printf("Vamos cadastrar as caratas: \n");

  // Área para entrada de dados
  // Carta 1
  printf("Carta 1: \n\n");

  printf("Nome: ");
  scanf("%s", nome1);

  printf("Estado: ");
  scanf("%s", estado1);

  printf("Número: ");//Resolvi solicitar "Número" ao invés de "Código", assim gero o Código a frente com a junção do estado1 + o codigo1
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

  printf("Número: "); //Resolvi solicitar "Número" ao invés de "Código", assim gero o Código a frente com a junção do estado2 = o codigo2
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
    printf("### As cartas cadastradas foram: ###\n\n");
    printf("Carta 1:\n\nNome: %s\nEstado: %s\nCódigo: %s%s\nPopulação: %lu Habitantes\nÁrea: %.2fKm²\nPIB: R$%.2f\nPontos Turísticos: %u\nDensinade Populacional: %.2f Hab/Km²\nPIB Per Capita: R$%.2f\nSuper Poder: %.2f\n\n", nome1, estado1, estado1, codigo1, populacao1, area1, pib1, turismo1, densidade1, capita1, super1);
    printf("Carta 2:\n\nNome: %s\nEstado: %s\nCódigo: %s%s\nPopulação: %lu Habitantes\nÁrea: %.2fKm²\nPIB: R$%.2f\nPontos Turísticos: %u\nDensinade Populacional: %.2f Hab/Km²\nPIB Per Capita: R$%.2f\nSuper Poder: %.2f\n\n", nome2, estado2, estado2, codigo2, populacao2, area2, pib2, turismo2, densidade2, capita2, super2);

//Realizando comparações entre as cartas
    printf("### Comparações entre as cartas: ###\n\n");
    printf("Escolha o 1º atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%u", &atributo1);

    switch (atributo1){
        case 1:
            printf("Você escolheu o atributo População!\n");
            printf("Carta 1: %s\nPopulação: %lu Habitantes\nCarta 2: %s\nPopulação: %lu Habitantes\n\n", nome1, populacao1, nome2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu o atributo Área!\n");
            printf("Carta 1: %s\nÁrea: %.2f Km²\nCarta 2: %s\nÁrea: %.2f Km²\n\n", nome1, area1, nome2, area2);
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB!\n");
            printf("Carta 1: %s\nPIB: R$%.2f\nCarta 2: %s\nPIB: R$%.2f\n\n", nome1, pib1, nome2, pib2);
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu o atributo Pontos Turísticos!\n");
            printf("Carta 1: %s\nPontos Turísticos: %u\nCarta 2: %s\nPontos Turísticos: %u\n\n", nome1, turismo1, nome2, turismo2);
            resultado1 = turismo1 > turismo2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade Populacional!\n");
            printf("Carta 1: %s\nDensidade Populacional: %.2f Hab/Km²\nCarta 2: %s\nDensidade Populacional: %.2f Hab/Km²\n\n", nome1, densidade1, nome2, densidade2);
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu o atributo PIB Per Capita!\n");
            printf("Carta 1: %s\nPIB Per Capita: R$%.2f\nCarta 2: %s\nPIB Per Capita: R$%.2f\n\n", nome1, capita1, nome2, capita2);
            resultado1 = capita1 > capita2 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu o atributo Super Poder!\n");
            printf("Carta 1: %s\nSper Poder: %.2f\nCarta 2: %s\nSuper Poder: %.2f\n\n", nome1, super1, nome2, super2);
            resultado1 = super1 > super2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!");
        }
    printf("Escolha o 2º atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%u", &atributo2);

    if (atributo1 == atributo2){
        printf("Atributo repetido, por favor escolhar 2 atributos diferentes!\n");
    } else {
        switch (atributo2){
            case 1:
                printf("Você escolheu o atributo População!\n");
                printf("Carta 1: %s\nPopulação: %lu Habitantes\nCarta 2: %s\nPopulação: %lu Habitantes\n\n", nome1, populacao1, nome2, populacao2);
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                printf("Você escolheu o atributo Área!\n");
                printf("Carta 1: %s\nÁrea: %.2f Km²\nCarta 2: %s\nÁrea: %.2f Km²\n\n", nome1, area1, nome2, area2);
                resultado2 = area1 > area2 ? 1 : 0;
                break;
            case 3:
                printf("Você escolheu o atributo PIB!\n");
                printf("Carta 1: %s\nPIB: R$%.2f\nCarta 2: %s\nPIB: R$%.2f\n\n", nome1, pib1, nome2, pib2);
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;
            case 4:
                printf("Você escolheu o atributo Pontos Turísticos!\n");
                printf("Carta 1: %s\nPontos Turísticos: %u\nCarta 2: %s\nPontos Turísticos: %u\n\n", nome1, turismo1, nome2, turismo2);
                resultado2 = turismo1 > turismo2 ? 1 : 0;
                break;
            case 5:
                printf("Você escolheu o atributo Densidade Populacional!\n");
                printf("Carta 1: %s\nDensidade Populacional: %.2f Hab/Km²\nCarta 2: %s\nDensidade Populacional: %.2f Hab/Km²\n\n", nome1, densidade1, nome2, densidade2);
                resultado2 = densidade1 < densidade2 ? 1 : 0;
                break;
            case 6:
                printf("Você escolheu o atributo PIB Per Capita!\n");
                printf("Carta 1: %s\nPIB Per Capita: R$%.2f\nCarta 2: %s\nPIB Per Capita: R$%.2f\n\n", nome1, capita1, nome2, capita2);
                resultado2 = capita1 > capita2 ? 1 : 0;
                break;
            case 7:
                printf("Você escolheu o atributo Super Poder!\n");
                printf("Carta 1: %s\nSper Poder: %.2f\nCarta 2: %s\nSuper Poder: %.2f\n\n", nome1, super1, nome2, super2);
                resultado2 = super1 > super2 ? 1 : 0;
                break;
            default:
                printf("Opção inválida!");
        }
    }
    
    if (resultado1 && resultado2) {
        printf("### Parabéns! Você Venceu! ###\n");
    } else if (resultado1 != resultado2) {
        printf("### O jogo empatou! ###\n");
    } else {
        printf("### Você perdeu! ###\n");
    }

    return 0;
}