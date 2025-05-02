 #include <stdio.h>
#include <string.h> // Necessário para strcspn se usar fgets no futuro

int main() {
    // VARIÁVEIS DADOS CARTA 1
    char estado1;
    char carta1[4]; // Nome da variável poderia ser codigo1 para clareza
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

    // VARIÁVEIS DADOS CARTA 2
    char estado2;
    char carta2[4]; // Nome da variável poderia ser codigo2
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    //LENDO DADOS CARTA 1
    printf("Cadastre a Carta 1. \n");

    printf("Insira uma letra de 'A' a 'H' para representar um dos oito estados: \n");
    scanf(" %c", &estado1); // Espaço antes de %c é bom aqui
    getchar(); // Consome o \n deixado pelo scanf de estado1

    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%3s", carta1); // Lê a string (sem &)
    getchar(); // Consome o \n deixado pelo scanf de carta1

    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade1); // Lê a string (sem &)
    getchar(); // Consome o \n deixado pelo scanf de cidade1

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);
    getchar(); // Consome o \n deixado pelo scanf de populacao1

    printf("Insira a área da cidade em km²: \n");
    scanf("%f", &area1);
    getchar(); // Consome o \n deixado pelo scanf de area1

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib1);
    getchar(); // Consome o \n deixado pelo scanf de pib1

    printf("Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo1);
    getchar(); // Consome o \n deixado pelo scanf de turismo1

    //LENDO DADOS DA CARTA 2
    printf("\nAgora vamos para a Carta 2. \n"); // Adicionado \n

    printf("Insira uma letra de 'A' a 'H' para representar um dos oito estados: \n");
    scanf(" %c", &estado2); // Espaço antes de %c é bom aqui
    getchar(); // Consome o \n

    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%3s", carta2); // Sem &
    getchar(); // Consome o \n

    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade2); // Sem &
    getchar(); // Consome o \n

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    getchar(); // Consome o \n

    printf("Insira a área da cidade em km²: \n");
    scanf("%f", &area2);
    getchar(); // Consome o \n

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);
    getchar(); // Consome o \n

    printf("Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo2);
    // Não precisa de getchar() aqui se for a última leitura antes de exibir

    // EXIBINDO CARTA 1
    printf("\n--- Carta 1 ---\n"); // Melhor formatação
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", carta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1); // Formatado %.2f
    printf("PIB: %.2f bilhões de reais \n", pib1); // Formatado %.2f
    printf("Número de pontos turísticos: %d \n", turismo1);
    printf("\n");

    // EXIBINDO CARTA 2
    printf("--- Carta 2 ---\n"); // Melhor formatação
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2); // Formatado %.2f
    printf("PIB: %.2f bilhões de reais \n", pib2); // Formatado %.2f
    printf("Número de pontos turísticos: %d \n", turismo2);

    return 0;
}
