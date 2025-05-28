#include <stdio.h>

// Desafio Super Trunfo

int main() {
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declaração das variáveis da carta 1
    char estado1, codigo1[5], nomeCidade1[30];
    unsigned long int pop1;
    long int tur1;
    float area1, pib1, densidade1, pibPCapita1, poder1;

    // Declaração das variáveis da carta 2
    char estado2, codigo2[5], nomeCidade2[30];
    unsigned long int pop2;
    int tur2;
    float area2, pib2, densidade2, pibPCapita2, poder2;

    // Menu switch
     int atributo;

    // Dados da carta 1:
    printf("Digite as informações da Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf("%4s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %29s", nomeCidade1);  // (Não pode digitar sem espaços, bug sem solução)

    printf("População: ");
    scanf("%d", &pop1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &tur1);

    // Dados da carta 2:
    printf("\nDigite as informações da Carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%4s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %29s", nomeCidade2);  // (Não pode digitar sem espaços, bug sem solução)

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

   
   //Menu de opções:
    printf("Escolha seu atributo:\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Densiadade Populacional\n");
    printf("5. PIB per capita\n");
    scanf("%d", &atributo);


    //Implementando logicas de decisão comparando atributos, adicionado switch:

    switch (atributo)
    {
    case 1:
        if(pop1 > pop2){
            printf("Carta um venceu por ter a maior população \n");
        }else if(pop1 < pop2){
            printf("Carta dois venceu por ter a maior população \n");
        }else{
            printf("###EMPATE###");
        }
        break;
    
    case 2:
        if(area1 > area2){
            printf("Carta um venceu por ter a maior área \n");
        }else if(area1 < area2) {
            printf("Carta dois venceu por ter a maior área \n");
        }else{
            printf("###EMPATE###");
        }
        break;
    
    case 3:
        if(pib1 > pib2){
            printf("Carta um venceu por ter maior PIB \n");
        }else if (pib1 < pib2){
            printf("Carta dois venceu por ter maior PIB \n");
        }else{
            printf("###EMPATE###");
        }    
        break;
    
    case 4:   
        if(densidade1 < densidade2){
            printf("Carta um venceu por ter menor densidade populacioal \n");
        }else if (densidade1 > densidade2){
            printf("Carta dois venceu por ter menor densidade populacioal \n");
        }else{
            printf("###EMPATE###");
        }
        break;
    
    case 5:    
        if(pibPCapita1 > pibPCapita2) {
            printf("Carta um venceu por ter PIB per capita maior \n");
        }else if (pibPCapita1 < pibPCapita2){
            printf("Carta dois venceu por ter PIB per capita maior \n");
        }else{
            printf("###EMPATE###");
        }
        break;
        
        default:
        printf("Opção Invalida");
        break;
    }


    return 0;
}