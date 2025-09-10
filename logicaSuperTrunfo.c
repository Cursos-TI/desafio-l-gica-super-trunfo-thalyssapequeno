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

    int opcao1, opcao2; // atributos escolhidos

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

    // Menu dinâmico - primeiro atributo
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Escolha o PRIMEIRO atributo: ");
    scanf("%d", &opcao1);

    printf("Escolha o SEGUNDO atributo (desempate): ");
    scanf("%d", &opcao2);

    printf("\n--- Resultado da Comparação ---\n");

    // Função para obter valores dos atributos
    float valor1A = (opcao1 == 1) ? populacao1 :
                   (opcao1 == 2) ? area1 :
                   (opcao1 == 3) ? pib1 : pontosTuristicos1;

    float valor2A = (opcao1 == 1) ? populacao2 :
                   (opcao1 == 2) ? area2 :
                   (opcao1 == 3) ? pib2 : pontosTuristicos2;

    float valor1B = (opcao2 == 1) ? populacao1 :
                   (opcao2 == 2) ? area1 :
                   (opcao2 == 3) ? pib1 : pontosTuristicos1;

    float valor2B = (opcao2 == 1) ? populacao2 :
                   (opcao2 == 2) ? area2 :
                   (opcao2 == 3) ? pib2 : pontosTuristicos2;

    // Comparação aninhada + ternário
    if (valor1A > valor2A) {
        printf("Carta vencedora: %s (atributo principal)\n", nomeCidade1);
    } else if (valor2A > valor1A) {
        printf("Carta vencedora: %s (atributo principal)\n", nomeCidade2);
    } else {
        // Empate -> usa segundo atributo
        printf("Empate no atributo principal!\n");
        printf("Desempate pelo segundo atributo...\n");
        (valor1B > valor2B) ? 
            printf("Carta vencedora: %s (atributo secundário)\n", nomeCidade1) :
            (valor2B > valor1B) ?
                printf("Carta vencedora: %s (atributo secundário)\n", nomeCidade2) :
                printf("Empate total!\n");
    }

    return 0;
}
