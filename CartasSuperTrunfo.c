#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, codigocarta1[3], cidade1[15];  
    unsigned long int populacao1;
    int pontoturistico1;
    float area1, PIB1, denspopu1, PIBpc1, superpoder1;

    char estado2, codigocarta2[3], cidade2[15];
    unsigned long int populacao2;
    int pontoturistico2;
    float area2, PIB2, denspopu2, PIBpc2, superpoder2;

    // Mensagem de boas-vindas
    printf("Bem vindo ao SCCST\n");
    printf("O Sistema de Cadastro de Cartas de Super Trunfo!\n");
    printf("Comece a cadastrar a sua primeira carta agora mesmo!!!\n");

    // Cadastro da primeira carta
    printf("Digite a letra inicial do estado da sua carta ('De 'A' a 'H''): \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 'De 01 a 04': \n");
    scanf("%2s", codigocarta1);
    getchar(); // Consumir a quebra de linha
    printf("Digite o nome da cidade da sua carta: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    printf("Digite o número de habitantes da sua carta: \n");
    scanf("%lu", &populacao1);
    getchar(); // Consumir a quebra de linha
    printf("Digite a área em km² da sua carta: \n");
    scanf("%f", &area1);
    getchar();
    printf("Digite o PIB da sua carta: \n");
    scanf("%f", &PIB1);
    getchar();
    printf("Digite a quantidade de pontos turísticos da sua carta: \n");
    scanf("%d", &pontoturistico1);
    getchar();
    printf("Carta cadastrada com sucesso!\n");

    // Cadastro da segunda carta
    printf("Digite a letra inicial do estado da sua outra carta ('De 'A' a 'H''): \n");
    scanf(" %c", &estado2);
    printf("Digite o código da sua outra carta 'De 01 a 04': \n");
    scanf("%2s", codigocarta2);
    getchar(); // Consumir a quebra de linha
    printf("Digite o nome da cidade da sua outra carta: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    printf("Digite o número de habitantes da sua outra carta: \n");
    scanf("%lu", &populacao2);
    getchar();
    printf("Digite a área em km² da sua outra carta: \n");
    scanf("%f", &area2);
    getchar();
    printf("Digite o PIB da sua outra carta: \n");
    scanf("%f", &PIB2);
    getchar();
    printf("Digite a quantidade de pontos turísticos da sua outra carta: \n");
    scanf("%d", &pontoturistico2);
    getchar();
    printf("Carta cadastrada com sucesso!\n");

    // Cálculos
    denspopu1 = (float) populacao1 / area1;
    PIBpc1 = (PIB1 * 1e9) / (float) populacao1;
    superpoder1 = populacao1 + area1 + PIB1 + pontoturistico1 + PIBpc1 + (1.0 / denspopu1);

    denspopu2 = (float) populacao2 / area2;
    PIBpc2 = (PIB2 * 1e9) / (float) populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + pontoturistico2 + PIBpc2 + (1.0 / denspopu2);

    // Exibição dos dados das cartas
    printf("\n==== DADOS DA PRIMEIRA CARTA ====\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %c%s \n", estado1, codigocarta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Pontos Turísticos: %d\n", pontoturistico1);
    printf("Densidade demográfica: %.2f hab/km²\n", denspopu1);
    printf("PIB per capita: %.2f reais\n", PIBpc1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n==== DADOS DA SEGUNDA CARTA ====\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, codigocarta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade demográfica: %.2f hab/km²\n", denspopu2);
    printf("PIB per capita: %.2f reais\n", PIBpc2);
    printf("Super Poder: %.2f\n", superpoder2);
     // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoturistico1 > pontoturistico2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", denspopu2 < denspopu1);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpc1 > PIBpc2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

 return 0;
}