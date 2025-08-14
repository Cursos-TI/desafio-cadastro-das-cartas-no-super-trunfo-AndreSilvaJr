#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Desafio Cadastro das cartas do SUPER TRUNFO - PAÍSES. \n");
    printf("\n"); //espaçamento para ajuste da exibição. 
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1, populacao2;
    int turismo1, turismo2;
    float area1, area2;
    float pib1, pib2;
    char estado1, estado2; 
    char cidade1[20], cidade2[20];
    char codigo1[20], codigo2[20];
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite os dados da Carta 01: \n");

    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Código: ");
    scanf("%s", &codigo1);  // verificar correção nesta linha
    
    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &turismo1);

    printf("\n"); //espaçamento para ajuste da exibição.
    printf("Digite os dados da Carta 02: \n");

    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Código: ");
    scanf("%s", &codigo2);
    
    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &turismo2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");      //espaçamento para ajuste da exibição.
    printf("CARTA 01: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d habitantes. \n", populacao1);
    printf("Área: %f KM² \n", area1);
    printf("PIB: %f bilhões de reais.\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turismo1);


    printf("\n");       //espaçamento para ajuste da exibição.
    printf("CARTA 02: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d habitantes. \n", populacao2);
    printf("Área: %f KM² \n", area2);
    printf("PIB: %f bilhões de reais. \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);

    return 0;
}
