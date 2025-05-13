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
   float densidade1;
   float pibPerCapta1;


    // Carta 2
    char estado2[30];
    int codCid2;
    char nomeCid2[50];
    int populacao2;
    float area2;
    float pib2;
    int pTuristico2; 
    float densidade2;
    float pibPerCapta2; 


    // Inputs / Outputs - Carta 1    

    printf("*** Primeira Carta *** \n\n");

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
   
    printf("\n\n *** Segunda Carta *** \n\n");

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


    // calculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapta1 = pib1 / populacao1;

    // calculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;

    
    printf("\n Dados da carta 1: \n\n");
    printf(" Estado: %s\n", estado1);
    printf(" Código da Cidade: %i\n", codCid1);
    printf(" Nome da Cidade: %s\n", nomeCid1);
    printf(" População: %i hab. \n", populacao1);
    printf(" Área: %.2f km² \n", area1);
    printf(" PIB: %.2f bilhões de reais \n", pib1);
    printf(" Pontos Turísticos: %i\n", pTuristico1);
    printf(" Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf(" PIB Per Capta: %.2f reais \n", pibPerCapta1);

    printf("\n Dados da carta 2: \n\n");
    printf(" Estado: %s\n", estado2);
    printf(" Código da Cidade: %i\n", codCid2);
    printf(" Nome da Cidade: %s\n", nomeCid2);
    printf(" População: %i hab.\n", populacao2);
    printf(" Área: %.2f km²\n", area2);
    printf(" PIB: %.2f bilhões de reais \n", pib2);
    printf(" Pontos Turísticos: %i\n", pTuristico2);
    printf(" Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf(" PIB Per Capta: %.2f reais \n", pibPerCapta2);

    return 0;
}
