#include <stdio.h>
int main() {
    char estado1;  
    char codigocarta1[3];  
    char cidade1[15];  
    int populacao1;       
    float area1;     
    float PIB1;   
    int pontoturistico1;      

    char estado2;
    char codigocarta2[3];
    char cidade2[15];
    int populacao2;
    float area2;
    float PIB2;
    int pontoturistico2;

    printf("Bem vindo ao SCCST\n");
    printf("O Sistema de Cadastro de Cartas de Super Trunfo!\n");
    printf("Comece a cadastrar a sua primeira carta agora mesmo!!!\n");

    //carta 1
    printf("Digite a letra inicial do estado da sua carta ('De 'A' a 'H''): \n");
    scanf(" %c", &estado1);  
    printf("Digite o código da carta 'De 01 a 04': \n");
    scanf("%2s", codigocarta1);
    printf("Digite o nome da cidade da sua carta: \n");
    scanf("%14s", cidade1);
    printf("Digite o número de habitantes da sua carta: \n");
    scanf("%d", &populacao1);
    printf("Digite a área em km² da sua carta: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da sua carta: \n");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turísticos da sua carta: \n");
    scanf("%d", &pontoturistico1);
    printf("Carta cadastrada com sucesso!\n");


    //carta 2
    printf("Digite a letra inicial do estado da sua outra carta ('De 'A' a 'H''): \n");
    scanf(" %c", &estado2);
    printf("Digite o código da sua outra carta 'De 01 a 04': \n");
    scanf("%2s", codigocarta2);
    printf("Digite o nome da cidade da sua outra carta: \n");
    scanf("%14s", cidade2);
    printf("Digite o número de habitantes da sua outra carta: \n");
    scanf("%d", &populacao2);
    printf("Digite a área em km² da sua outra carta: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da sua outra carta: \n");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos da sua outra carta: \n");
    scanf("%d", &pontoturistico2);
    printf("Carta cadastrada com sucesso!\n");

    printf("\nVamos ver agora a primeira carta:\n");

    printf("\n==== DADOS DA PRIMEIRA CARTA ====\n");
    printf("\nEstado: %c \n", estado1);
    printf("Código: %c%s \n", estado1, codigocarta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População da Cidade: %d \n", populacao1);
    printf("Área da Cidade: %.2f km²\n", area1);
    printf("PIB da Cidade: %.2f milhões \n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico1);

    printf("\nAgora a segunda carta:\n");

    printf("\n==== DADOS DA SEGUNDA CARTA ====\n");
    printf("\nEstado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, codigocarta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População da Cidade: %d \n", populacao2);
    printf("Área da Cidade: %.2f km²\n", area2);
    printf("PIB da Cidade: %.2f milhões \n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
    
    return 0;
}
