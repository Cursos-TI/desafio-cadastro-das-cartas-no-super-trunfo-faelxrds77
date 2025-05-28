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
    unsigned long int pop1 = 12000000;
    long int tur1 = 30;
    float area1 = 3000, pib1 = 200, densidade1, pibPCapita1, poder1;

    // Declaração das variáveis da carta 2
    char estado2, codigo2[5], nomeCidade2[30];
    unsigned long int pop2 = 5000000;
    int tur2 = 35;
    float area2 = 1200, pib2 = 80, densidade2, pibPCapita2, poder2;

    // Cálculo da densidade populacional, do PIB per Capita ( de bilhões para unidades ) e do Super Poder;
    densidade1 = pop1 / area1;
    pibPCapita1 = (pib1 * 1000000000) / pop1;
    poder1 = (pop1 + area1 + pib1 + tur1 + pibPCapita1) - densidade1;
    
    densidade2 = pop2 / area2;
    pibPCapita2 = (pib2 * 1000000000) / pop2;
    poder2 = (pop2 + area2 + pib2 + tur2 + pibPCapita2) - densidade2;


    // Menu switch
    char primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;


    //Menu de opções:
    printf("Bem vindo ao jogo:\n");

    printf("Escolha o primeiro atributo:\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("B. PIB\n");
    printf("D. Densiadade Populacional\n");
    printf("C. PIB per capita\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &primeiroAtributo);


    //Switch primeiro atributo;

    switch (primeiroAtributo)
    {
    case 'P':
    case 'p':
        printf("Você escolheu a opção População!\n");
        resultado1 = pop1 > pop2 ? 1 : 0;
        break;
        
    case 'A':
    case 'a':
        printf("Você escolheu a opção Área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    
    case 'B':
    case 'b':
        printf("Você escolheu a opção PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    
    case 'D':  
    case 'd': 
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    
    case 'C':
    case 'c':    
        printf("Você escolheu a opção PIB per Capita!\n");
        resultado1 = pibPCapita1 > pibPCapita2 ? 1 : 0;
        break;

    case 'X':
    case 'x':    
        printf("Você escolheu a opção Poder!\n");
        resultado1 = poder1 > poder2 ? 1 : 0;
        break;

    default:
        printf("Opção de atributo inválida\n");
        break;
    }

    printf("Escolha o segundo atributo:\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("B. PIB\n");
    printf("D. Densiadade Populacional\n");
    printf("C. PIB per capita\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &segundoAtributo);

    //Switch segundo atributo;

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (segundoAtributo)
        {
        case 'P':
        case 'p':
            printf("Você escolheu a opção População!\n");
            resultado2 = pop1 > pop2 ? 1 : 0;
            break;
        
        case 'A':
        case 'a':
            printf("Você escolheu a opção Área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
    
        case 'B':
        case 'b':
            printf("Você escolheu a opção PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
    
        case 'D':  
        case 'd': 
            printf("Você escolheu a opção Densidade Populacional!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
    
        case 'C':
        case 'c':    
            printf("Você escolheu a opção PIB per Capita!\n");
            resultado2 = pibPCapita1 > pibPCapita2 ? 1 : 0;
            break;

    default:
        printf("Opção de atributo inválida\n");
        break;
    }


  if(resultado1 && resultado2)
    {
    printf("Parabéns você venceu!\n");
    } else if (resultado1 != resultado2){
       printf("Empatou!\n");
    } else {
        printf("Infelizmente você perdeu\n");
    }


return 0;
    }}