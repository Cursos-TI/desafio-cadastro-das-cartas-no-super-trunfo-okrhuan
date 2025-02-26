#include <stdio.h>

int main() {
    // Declaração das variáveis da primeira carta
    char estadoCarta1, codigoCarta1[3], nomeCidade1[15];  
    int populacaoCidade1, pontosTuristicos1;
    float areaCidade1, PIBCidade1, densidadePopulacional1, PIBPerCapita1;
    // Declaração das variáveis da segunda carta
    char estadoCarta2, codigoCarta2[3], nomeCidade2[15];
    int populacaoCidade2, pontosTuristicos2;
    float areaCidade2, PIBCidade2, densidadePopulacional2, PIBPerCapita2;

    // Mensagem de boas-vindas
    printf("Bem vindo ao SCCST\n");
    printf("O Sistema de Cadastro de Cartas de Super Trunfo!\n");
    printf("Comece a cadastrar a sua primeira carta agora mesmo!!!\n");

    // Cadastro da primeira carta
    printf("Digite a letra inicial do estado da sua carta ('De 'A' a 'H''): \n");
    scanf(" %c", &estadoCarta1);
    printf("Digite o código da carta 'De 01 a 04': \n");
    scanf("%2s", codigoCarta1);
    printf("Digite o nome da cidade da sua carta: \n");
    scanf("%14s", nomeCidade1);
    printf("Digite o número de habitantes da sua carta: \n");
    scanf("%d", &populacaoCidade1);
    printf("Digite a área em km² da sua carta: \n");
    scanf("%f", &areaCidade1);
    printf("Digite o PIB da sua carta: \n");
    scanf("%f", &PIBCidade1);
    printf("Digite a quantidade de pontos turísticos da sua carta: \n");
    scanf("%d", &pontosTuristicos1);
    printf("Carta cadastrada com sucesso!\n");

    // Cadastro da segunda carta
    printf("Digite a letra inicial do estado da sua outra carta ('De 'A' a 'H''): \n");
    scanf(" %c", &estadoCarta2);
    printf("Digite o código da sua outra carta 'De 01 a 04': \n");
    scanf("%2s", codigoCarta2);
    printf("Digite o nome da cidade da sua outra carta: \n");
    scanf("%14s", nomeCidade2);
    printf("Digite o número de habitantes da sua outra carta: \n");
    scanf("%d", &populacaoCidade2);
    printf("Digite a área em km² da sua outra carta: \n");
    scanf("%f", &areaCidade2);
    printf("Digite o PIB da sua outra carta: \n");
    scanf("%f", &PIBCidade2);
    printf("Digite a quantidade de pontos turísticos da sua outra carta: \n");
    scanf("%d", &pontosTuristicos2);
    printf("Carta cadastrada com sucesso!\n");

    // Cálculos
    densidadePopulacional1 = (float) populacaoCidade1 / areaCidade1;
    PIBPerCapita1 = (PIBCidade1 * 1e9) / (float) populacaoCidade1;

    densidadePopulacional2 = (float) populacaoCidade2 / areaCidade2;
    PIBPerCapita2 = (PIBCidade2 * 1e9) / (float) populacaoCidade2;

    // Exibição dos dados das cartas
    printf("\nVamos ver agora a primeira carta:\n");
    printf("\n==== DADOS DA PRIMEIRA CARTA ====\n");
    printf("\nEstado: %c \n", estadoCarta1);
    printf("Código: %c%s \n", estadoCarta1, codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População da Cidade: %d \n", populacaoCidade1);
    printf("Área da Cidade: %.2f km²\n", areaCidade1);
    printf("PIB da Cidade: %.2f bilhões de reais \n", PIBCidade1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", PIBPerCapita1);

    printf("\nAgora a segunda carta:\n");
    printf("\n==== DADOS DA SEGUNDA CARTA ====\n");
    printf("\nEstado: %c \n", estadoCarta2);
    printf("Código: %c%s \n", estadoCarta2, codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População da Cidade: %d \n", populacaoCidade2);
    printf("Área da Cidade: %.2f km²\n", areaCidade2);
    printf("PIB da Cidade: %.2f bilhões de reais \n", PIBCidade2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", PIBPerCapita2);

    return 0;
}