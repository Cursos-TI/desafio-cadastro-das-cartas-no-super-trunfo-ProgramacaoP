#include <stdio.h>

int main() {
    printf("Cadastro de Cartas I e II do Jogo Super Trunfo\n");
    // Acima printf para informando quis cartas estão sendo cadastradas - Nivel Novato

    // Abaixo definição de variáveis para cada atributo da carta - Nivel Novato
    //DADOS DA CARTA I
    char EstadoI[03] = "A";
    char CodigodaCartaI[05] = "A01";
    char CidadeI[12] = "Salvador";
    int PopulacaoI = 2418000;
    float AreaI = 693.8;
    float PibI = 21.8;
    int PontosTuristicosI = 20;

    //Inserindo novas variáveis - Nivel Aventureiro
    float DensidadePopulacionalI = PopulacaoI / AreaI;
    float PibPerCaptaI = PopulacaoI / PibI;

    
    // Abaixo definição de variáveis para cada atributo da carta - Nivel Novato
    //DADOS DA CARTA II
    char EstadoII[03] = "B";
    char CodigodaCartaII[05] = "B01";
    char CidadeII[12] = "Fortaleza";
    int PopulacaoII = 2428678;
    float AreaII = 312.3;
    float PibII = 74.4;
    int PontosTuristicosII = 17;

    //Inserindo novas variáveis - Nivel Aventureiro
    float DensidadePopulacionalII = PopulacaoII / AreaII;
    float PibPerCaptaII = PopulacaoII / PibII;

    // Abaixo solicitação de entrada de dados para cada atributo da carta - Nivel Novato
    printf("\nUsuário, insira os dados para a Carta I\n");
    printf("Digite o Estado: ");
    scanf("%s", EstadoI);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", CodigodaCartaI);
    printf("Digite o Nome da cidade: ");
    scanf("%s", CidadeI);
    printf("Digite a Populacao: ");
    scanf("%d", &PopulacaoI);
    printf("Digite a Area: ");
    scanf("%f", &AreaI);
    printf("Digite o PIB: ");
    scanf("%f", &PibII);
    printf("Digite o Numero de Pontos Turisticos:  ");
    scanf("%d", &PontosTuristicosI);

    printf("\nUsuário, insira os dados para a Carta II\n");
    printf("Digite o Estado: ");
    scanf("%s", EstadoII);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", CodigodaCartaII);
    printf("Digite o Nome da cidade: ");
    scanf("%s", CidadeII);
    printf("Digite a Populacao: ");
    scanf("%d", &PopulacaoII);
    printf("Digite a Area: ");
    scanf("%f", &AreaII);
    printf("Digite o PIB: ");
    scanf("%f", &PibII);
    printf("Digite o Numero de Pontos Turisticos:  ");
    scanf("%d", &PontosTuristicosII);
    // Abaixo exibição dos dados das cartas - Nivel Novato
     printf("\n\nDados inseridos pelo usuário para a Carta I\n");
     printf("Estado:%s\n", EstadoI);
     printf("Codigo da Carta:%s\n", CodigodaCartaI);
     printf("Nome da Cidade:%s\n", CidadeI);
     printf("Populacao: %d\n", PopulacaoI);
     printf("Area: %.2f\n", AreaI);
     printf("PIB: %.2f\n", PibI);
     printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosI);

     //inserindo novas funcionalidade de divisão e exibição - Nivel Aventureiro
     printf("A Densidade populaçional é: %.2f \n", DensidadePopulacionalI);
     printf("O Pib Per Capta é de: %.2f \n", PibPerCaptaI);

     printf("\n\nDados inseridos pelo usuário para a Carta II\n");
     printf("Estado: %s\n", EstadoII);
     printf("Codigo da Carta: %s\n", CodigodaCartaII);
     printf("Nome da Cidade: %s\n", CidadeII);
     printf("Populacao: %d\n", PopulacaoII);
     printf("Area: %.2f\n", AreaII);
     printf("PIB: %.2f\n", PibII);
     printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosII);

     //inserindo novas funcionalidade de divisão e exibição - Nivel Aventureiro
     printf("A Densidade populaçional é: %.2f \n", DensidadePopulacionalII);
     printf("O Pib Per Capta é de: %.2f \n", PibPerCaptaII);
     // Abaixo exibição dos dados das cartas - Nivel Novato
     printf("\n\nDados inseridos pelo usuário para a Carta I\n");
     printf("Estado:%s\n", EstadoI);
     printf("Codigo da Carta:%s\n", CodigodaCartaI);
     printf("Nome da Cidade:%s\n", CidadeI);
     printf("Populacao: %d\n", PopulacaoI);
     printf("Area: %.2f\n", AreaI);
     printf("PIB: %.2f\n", PibI);
     printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosI);

     //inserindo novas funcionalidade de divisão e exibição - Nivel Aventureiro
     printf("A Densidade populaçional é: %.2f \n", DensidadePopulacionalI);
     printf("O Pib Per Capta é de: %.2f \n", PibPerCaptaI);

     printf("\n\nDados inseridos pelo usuário para a Carta II\n");
     printf("Estado: %s\n", EstadoII);
     printf("Codigo da Carta: %s\n", CodigodaCartaII);
     printf("Nome da Cidade: %s\n", CidadeII);
     printf("Populacao: %d\n", PopulacaoII);
     printf("Area: %.2f\n", AreaII);
     printf("PIB: %.2f\n", PibII);
     printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosII);

     //inserindo novas funcionalidade de divisão e exibição - Nivel Aventureiro
     printf("A Densidade populaçional é: %.2f \n", DensidadePopulacionalII);
     printf("O Pib Per Capta é de: %.2f \n", PibPerCaptaII);

   return 0;

  
}