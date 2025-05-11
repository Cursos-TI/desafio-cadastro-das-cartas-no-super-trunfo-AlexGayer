#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

   // Carta 1
   char estado1[30];
   int codCid1;
   char nomeCid1[50];
   int populacao1;
   float area1;
   float pib1;
   int pTuristico1;


    // Carta 2
    char estado2[30];
    int codCid2;
    char nomeCid2[50];
    int populacao2;
    float area2;
    float pib2;
    int pTuristico2;  


    // Inputs / Outputs - Carta 1    
    printf("Informe o Estado da primeira carta: ");
    scanf("%s", estado1);

    printf("Informe o código da cidade da primeira carta: ");
    scanf("%i", &codCid1);

    printf("Informe o nome da cidade da primeira carta: ");
    scanf("%s", nomeCid1);

    printf("Informe a quantidade da população da primeira carta: ");
    scanf("%i", &populacao1);

    printf("Informe a area da primeira carta: ");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turisticos da primeira carta: ");
    scanf("%i", &pTuristico1);


   // Inputs / Outputs - Carta 2   


   printf("Informe o Estado da segunda carta: ");
   scanf("%s", estado2);

   printf("Informe o código da cidade da segunda carta: ");
   scanf("%i", &codCid2);

   printf("Informe o nome da cidade da segunda carta: ");
   scanf("%s", nomeCid2);

   printf("Informe a quantidade da população da segunda carta: ");
   scanf("%i", &populacao2);

   printf("Informe a area da segunda carta: ");
   scanf("%f", &area2);

   printf("Informe o PIB da segunda carta: ");
   scanf("%f", &pib2);

   printf("Informe a quantidade de pontos turisticos da segunda carta: ");
   scanf("%i", &pTuristico2);

    

    printf("\n Dados da carta 1: \n\n Estado: %s \n Código da Cidade: %i \n Nome da Cidade: %s \n População: %i \n Área: %f \n PIB: %f \n Pontos Turísticos: %i \n", estado1, codCid1, nomeCid1, populacao1, area1, pib1, pTuristico1);

    printf("\n Dados da carta 2: \n\n Estado: %s \n Código da Cidade: %i \n Nome da Cidade: %s \n População: %i \n Área: %f \n PIB: %f \n Pontos Turísticos: %i \n", estado2, codCid2, nomeCid2, populacao2, area2, pib2, pTuristico2);
    

    return 0;
}
