#include <stdio.h>
#include <stdlib.h> // <- Adicionado para o system("pause");

int main()
{
    // Cria espaço pra guardar os dados
    char estado[3];
    int codigo;
    char cidade[50];
    int populacao;
    float pib;
    float area;
    int pontosTuristicos;

    // Pede os dados pro usuário
    printf("=== Cadastro da Carta ===\n");

    printf("Estado (sigla): ");
    scanf("%s", estado);

    printf("Codigo da cidade: ");
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("PIB (em milhoes): ");
    scanf("%f", &pib);

    printf("Area (em km^2): ");
    scanf("%f", &area);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Calcula dados extras
    float densidade = populacao / area;
    float pibPerCapita = pib * 1000000 / populacao;

    // Mostra tudo na tela
    printf("\n=== Carta da Cidade ===\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("PIB: R$ %.2f milhoes\n", pib);
    printf("Area: %.2f km^2\n", area);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita);

    system("pause");

    return 0;
}
