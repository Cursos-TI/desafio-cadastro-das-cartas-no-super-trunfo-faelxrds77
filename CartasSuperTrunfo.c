#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declaração das variáveis da carta 1
    char estado1, codigo1[5], nomeCidade1[30];
    unsigned long int pop1;
    long int tur1, resultadopop, resultadoarea, resultadopib, resultadotur, resultadodens, resultadoppc, resultadopoder;
    float area1, pib1, densidade1, pibPCapita1, poder1;

    // Declaração das variáveis da carta 2
    char estado2, codigo2[5], nomeCidade2[30];
    unsigned long int pop2;
    int tur2;
    float area2, pib2, densidade2, pibPCapita2, poder2;

    // Dados da carta 1
    printf("Digite as informações da Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf("%4s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %29s", nomeCidade1);  // Não pode digitar sem espaços, bug sem solução

    printf("População: ");
    scanf("%d", &pop1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &tur1);

    // Dados da carta 2
    printf("\nDigite as informações da Carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%4s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %29s", nomeCidade2);  // Não pode digitar sem espaços, bug sem solução

    printf("População: ");
    scanf("%d", &pop2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &tur2);

    // Cálculo da densidade populacional, do PIB per Capita ( de bilhões para unidades ) e do Super Poder;
    densidade1 = pop1 / area1;
    pibPCapita1 = (pib1 * 1000000000) / pop1;
    poder1 = (pop1 + area1 + pib1 + tur1 + pibPCapita1) - densidade1;
    
    densidade2 = pop2 / area2;
    pibPCapita2 = (pib2 * 1000000000) / pop2;
    poder2 = (pop2 + area2 + pib2 + tur2 + pibPCapita2) - densidade2;

    // Resultados de comparação;
    resultadopop = pop1 > pop2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadotur = tur1 > tur2;
    resultadodens = densidade1 < densidade2;
    resultadoppc = pibPCapita1 > pibPCapita2;
    resultadopoder = poder1 > poder2;

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPCapita1);
    printf("Super poder: %.2f\n", poder1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPCapita2);
    printf("Super poder: %.2f\n", poder2);
     
    //Comparações
    printf("Comparações (1 para verdadeiro, 0 para falso): \n");
    printf("A Carta 1 possui maior população que a Carta 2? %d\n", resultadopop);
    printf("A Carta 1 possui maior área que a Carta 2? %d\n", resultadoarea);
    printf("A Carta 1 possui maior PIB que a Carta 2? %d\n", resultadopib);
    printf("A Carta 1 possui mais pontos turísticos que a Carta 2? %d\n", resultadotur);
    printf("A Carta 1 possui menor densidade populacional que a Carta2? %d\n", resultadodens);
    printf("A Carta 1 possui maior PIB per Capita que a Carta 2? %d\n", resultadoppc);
    printf("A Carta 1 possui maior super poder que a Carta 2? %d\n", resultadopoder);
    

    return 0;
}