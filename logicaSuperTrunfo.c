#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    int opcao; // para o menu

    // Cadastro da Carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Menu de opções
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("1 - Comparar População\n");
    printf("2 - Comparar Área\n");
    printf("3 - Comparar PIB\n");
    printf("4 - Comparar Pontos Turísticos\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Comparações com switch
    switch (opcao) {
        case 1: // População
            printf("\n--- Comparação por População ---\n");
            if (populacao1 > populacao2) {
                printf("Carta vencedora: %s (População: %lu)\n", nomeCidade1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("Carta vencedora: %s (População: %lu)\n", nomeCidade2, populacao2);
            } else {
                // Comparação aninhada (desempate por área)
                if (area1 > area2) {
                    printf("Empate na população, venceu %s pelo critério de Área!\n", nomeCidade1);
                } else if (area2 > area1) {
                    printf("Empate na população, venceu %s pelo critério de Área!\n", nomeCidade2);
                } else {
                    printf("Empate total!\n");
                }
            }
            break;

        case 2: // Área
            printf("\n--- Comparação por Área ---\n");
            if (area1 > area2) {
                printf("Carta vencedora: %s (Área: %.2f)\n", nomeCidade1, area1);
            } else if (area2 > area1) {
                printf("Carta vencedora: %s (Área: %.2f)\n", nomeCidade2, area2);
            } else {
                // Desempate por PIB
                if (pib1 > pib2) {
                    printf("Empate na área, venceu %s pelo critério de PIB!\n", nomeCidade1);
                } else if (pib2 > pib1) {
                    printf("Empate na área, venceu %s pelo critério de PIB!\n", nomeCidade2);
                } else {
                    printf("Empate total!\n");
                }
            }
            break;

        case 3: // PIB
            printf("\n--- Comparação por PIB ---\n");
            if (pib1 > pib2) {
                printf("Carta vencedora: %s (PIB: %.2f)\n", nomeCidade1, pib1);
            } else if (pib2 > pib1) {
                printf("Carta vencedora: %s (PIB: %.2f)\n", nomeCidade2, pib2);
            } else {
                // Desempate por população
                if (populacao1 > populacao2) {
                    printf("Empate no PIB, venceu %s pelo critério de População!\n", nomeCidade1);
                } else if (populacao2 > populacao1) {
                    printf("Empate no PIB, venceu %s pelo critério de População!\n", nomeCidade2);
                } else {
                    printf("Empate total!\n");
                }
            }
            break;

        case 4: // Pontos Turísticos
            printf("\n--- Comparação por Pontos Turísticos ---\n");
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Carta vencedora: %s (Pontos turísticos: %d)\n", nomeCidade1, pontosTuristicos1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Carta vencedora: %s (Pontos turísticos: %d)\n", nomeCidade2, pontosTuristicos2);
            } else {
                printf("Empate em pontos turísticos!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
