#include <stdio.h>  

int main(){
  //Declação das variáveis
    char nomeCidade1[15],nomeCidade2[15];
    char codigo1[5], codigo2[5];
    char estado1, estado2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //Entrada de dados para a primeira carta
      
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1); 
    
    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); 
    
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area em km²: ");
    scanf("%f", &area1);
   
    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
  
      // Entrada de dados para a segunda carta

    printf("Digite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2); 
    
    printf("Digite o codigo da segunda carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); 
    
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

      // Exibição dos dados da primeira carta
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

      // Exibição dos dados da segunda carta
   
      printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;

    }