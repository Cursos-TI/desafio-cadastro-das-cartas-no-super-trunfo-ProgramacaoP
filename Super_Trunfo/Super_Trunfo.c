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

    // Abaixo solicitação de entrada de dados para cada atributo da carta
    printf("Digite o Estado: ");
    scanf("%s", Estado);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", CodigodaCarta);
    printf("Digite o Nome da cidade: ");
    scanf("%s", Cidade);
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao);
    printf("Digite a Area: ");
    scanf("%f", &Area);
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    printf("Digite o Numero de Pontos Turisticos:  \n");
    scanf("%d", &PontosTuristicos);

    // Abaixo exibição dos dados da carta
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", CodigodaCarta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos);  
    //inserindo novas funcionalidade de divisão e exibição
    printf("A Densidade populaçional é: %.2f \n", DensidadePopulacional);
    printf("O Pib Per Capta é de: %.2f \n", PibPerCapta);

   return 0;

  
}