#include <stdio.h>

int main() {
    printf("Cadastro de Cartas I e II do Jogo Super Trunfo\n");
    // Acima printf para informando quis cartas estão sendo cadastradas - Nivel Novato

    // Abaixo definição de variáveis para cada atributo da carta - Nivel Novato
    // Definição da estrutura para as cartas
    typedef struct {
        char estado[3];
        char codigo[5];
        char cidade[12];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional;
        float pibPerCapita;
        float SuperPoder;
    } Carta;
    Carta CartaI, CartaII;
    // Inicialização das cartas
    CartaI.estado, "A";
    CartaI.codigo, "A01";
    CartaI.cidade, "Salvador";
    CartaI.populacao = 2418000;
    CartaI.area = 693.8;
    CartaI.pib = 21.8;
    CartaI.pontosTuristicos = 20;
    CartaI.densidadePopulacional = CartaI.populacao / CartaI.area;
    CartaI.pibPerCapita =  CartaI.populacao / CartaI.pib;
    CartaI.SuperPoder = (CartaI.populacao + CartaI.area + CartaI.pib + CartaI.pontosTuristicos + CartaI.densidadePopulacional + CartaI.pibPerCapita) / 2;

    CartaII.estado[0] = 'B'; CartaII.estado[1] = '\0';
    CartaII.codigo, "B01";
    CartaII.cidade, "Fortaleza";
    CartaII.populacao = 2428678;
    CartaII.area = 312.3;
    CartaII.pib = 74.4;
    CartaII.pontosTuristicos = 17;
    CartaII.densidadePopulacional = CartaII.populacao / CartaII.area;
    CartaII.pibPerCapita = CartaII.populacao / CartaII.pib;
    CartaII.SuperPoder = (CartaII.populacao + CartaII.area + CartaII.pib + CartaII.pontosTuristicos + CartaII.densidadePopulacional + CartaII.pibPerCapita) / 2;

    // Cálculo de densidade populacional e PIB per capita
    CartaI.densidadePopulacional =   CartaI.populacao / CartaI.area;
    CartaI.pibPerCapita = CartaI.populacao / CartaI.pib;
    
    CartaII.densidadePopulacional = CartaII.populacao / CartaII.area;
    CartaII.pibPerCapita = CartaII.populacao / CartaII.pib;

    // Abaixo solicitação de entrada de dados para cada atributo da carta - Nivel Novato
    printf("\nUsuário, insira os dados para a Carta I\n");
    printf("Digite o Estado: ");
    scanf("%s", CartaI.estado);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", CartaI.codigo);
    printf("Digite o Nome da cidade: ");
    scanf("%s", CartaI.cidade);
    printf("Digite a Populacao: ");
    scanf("%d", &CartaI.populacao); 
    printf("Digite a Area: ");
    scanf("%f", &CartaI.area);
    printf("Digite o PIB: ");
    scanf("%f", &CartaI.pib);
    printf("Digite o Numero de Pontos Turisticos:  ");
    scanf("%d", &CartaI.pontosTuristicos);
    //inserindo novas funcionalidade de divisão e exibição - Nivel Aventureiro
    printf("A Densidade populaçional é: %.2f \n", CartaI.densidadePopulacional);
    printf("O Pib Per Capta é de: %.2f \n", CartaI.pibPerCapita);
    printf("O Super Poder é de: %.2f \n", CartaI.SuperPoder);

    printf("\nUsuário, insira os dados para a Carta II\n");
    printf("Digite o Estado: ");
    scanf("%s", CartaII.estado);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", CartaII.codigo);
    printf("Digite o Nome da cidade: ");
    scanf("%s", CartaII.cidade);
    printf("Digite a Populacao: ");
    scanf("%d", &CartaII.populacao);
    printf("Digite a Area: ");
    scanf("%f", &CartaII.area);
    printf("Digite o PIB: ");
    scanf("%f", &CartaII.pib);
    printf("Digite o Numero de Pontos Turisticos:  ");
    scanf("%d", &CartaII.pontosTuristicos);
    //inserindo novas funcionalidade de divisão e exibição - Nivel Aventureiro
    printf("A Densidade populaçional é: %.2f \n", CartaII.densidadePopulacional);
    printf("O Pib Per Capta é de: %.2f \n", CartaII.pibPerCapita);
    printf("O Super Poder é de: %.2f \n", CartaII.SuperPoder);

    // Abaixo exibição dos dados das cartas - Nivel Novato
    printf("\n\nDados inseridos pelo usuário para a Carta I\n");
    printf("Estado:%s\n", CartaI.estado);
    printf("Codigo da Carta:%s\n", CartaI.codigo);
    printf("Nome da cidade:%s\n", CartaI.cidade);
    printf("Populacao:%d\n", CartaI.populacao);
    printf("Area:%.2f\n", CartaI.area);
    printf("PIB:%.2f\n", CartaI.pib);
    printf("Numero de Pontos Turisticos:%d\n", CartaI.pontosTuristicos);
    printf("Densidade Populacional:%.2f\n", CartaI.densidadePopulacional);
    printf("PIB Per Capita:%.2f\n", CartaI.pibPerCapita);
    printf("Super Poder:%.2f\n", CartaI.SuperPoder);

    printf("\n\nDados inseridos pelo usuário para a Carta II\n");
    printf("Estado:%s\n", CartaII.estado);
    printf("Codigo da Carta:%s\n", CartaII.codigo);
    printf("Nome da cidade:%s\n", CartaII.cidade);
    printf("Populacao:%d\n", CartaII.populacao);
    printf("Area:%.2f\n", CartaII.area);
    printf("PIB:%.2f\n", CartaII.pib);  
    printf("Numero de Pontos Turisticos:%d\n", CartaII.pontosTuristicos);
    printf("Densidade Populacional:%.2f\n", CartaII.densidadePopulacional);
    printf("PIB Per Capita:%.2f\n", CartaII.pibPerCapita); 
    printf("Super Poder:%.2f\n", CartaII.SuperPoder);

    // Abaixo comparação entre as cartas - Nivel Aventureiro
    printf("\n\nComparação entre as cartas\n\n");
    printf("População da Carta I: %d\n", CartaI.populacao);
    printf("População da Carta II: %d\n", CartaII.populacao);
    if (CartaI.populacao > CartaII.populacao) {
        printf("A Carta I venceu! Tem maior população.\n");
    } else if (CartaI.populacao < CartaII.populacao) {
        printf("A Carta II venceu! Tem maior população.\n");
    } else {
        printf("As cartas venceu! Têm a mesma população.\n");
    }
    printf("\nÁrea da Carta I: %.2f\n", CartaI.area);
    printf("Área da Carta II: %.2f\n", CartaII.area);
    if (CartaI.area > CartaII.area) {
        printf("A Carta I venceu! Tem maior área.\n");
    } else if (CartaI.area < CartaII.area) {
        printf("A Carta II venceu! Tem maior área.\n");
    } else {
        printf("As cartas têm a mesma área.\n");
    }
    printf("\nPIB da Carta I: %.2f\n", CartaI.pib);
    printf("PIB da Carta II: %.2f\n", CartaII.pib);
    if (CartaI.pib > CartaII.pib) {
        printf("A Carta I venceu! Tem maior PIB.\n");
    } else if (CartaI.pib < CartaII.pib) {
        printf("A Carta II venceu! Tem maior PIB.\n");
    } else {
        printf("As cartas têm o mesmo PIB.\n");
    }
    printf("\nNúmero de Pontos Turísticos da Carta I: %d\n", CartaI.pontosTuristicos);
    printf("Número de Pontos Turísticos da Carta II: %d\n", CartaII.pontosTuristicos);
    if (CartaI.pontosTuristicos > CartaII.pontosTuristicos) {
        printf("A Carta I venceu! Tem mais pontos turísticos.\n");
    } else if (CartaI.pontosTuristicos < CartaII.pontosTuristicos) {
        printf("A Carta II venceu! Tem mais pontos turísticos.\n");
    } else {
        printf("As cartas têm o mesmo número de pontos turísticos.\n");
    }
    printf("\nDensidade Populacional da Carta I: %.2f\n", CartaI.densidadePopulacional);
    printf("Densidade Populacional da Carta II: %.2f\n", CartaII.densidadePopulacional); 
    
     
    if (CartaI.densidadePopulacional > CartaII.densidadePopulacional) {
        printf("A Carta I venceu! Tem maior densidade populacional.\n");
    } else if (CartaI.densidadePopulacional < CartaII.densidadePopulacional) {
        printf("A Carta II venceu! Tem maior densidade populacional.\n");
    } else {
        printf("As cartas venceu! Têm a mesma densidade populacional.\n");
    }
    printf("\nPIB Per Capita da Carta I: %.2f\n", CartaI.pibPerCapita);
    printf("PIB Per Capita da Carta II: %.2f\n", CartaII.pibPerCapita);
    if (CartaI.pibPerCapita > CartaII.pibPerCapita) {
        printf("A Carta I venceu! Tem maior PIB per capita.\n");
    } else if (CartaI.pibPerCapita < CartaII.pibPerCapita) {
        printf("A Carta II venceu! Tem maior PIB per capita.\n");
    } else {
        printf("As cartas têm o mesmo PIB per capita.\n");
    }
     // Comparação de Super Poder
     printf("\nSuper Poder da Carta I: %.2f\n", CartaI.SuperPoder);
     printf("Super Poder da Carta II: %.2f\n", CartaII.SuperPoder);
     if (CartaI.SuperPoder > CartaII.SuperPoder) {
         printf("\nA Carta I venceu! Tem o maior Super Poder.\n");
     } else if (CartaI.SuperPoder < CartaII.SuperPoder) {
         printf("A Carta II venceu! Tem o maior Super Poder.\n");
     } else {
         printf("Empate! As cartas têm o mesmo Super Poder.\n");
     } 
    
    return 0;
}