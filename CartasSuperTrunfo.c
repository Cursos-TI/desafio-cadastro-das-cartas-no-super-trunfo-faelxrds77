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

    printf("Desafio Cartas Super Trunfo!\n");

    char estado1, estado2;
    char codigo[4]; 
    char cidade[30]; 
    int populacao; 
    float area; 
    float pib; 
    int tur;

    printf("Carta 1\n");

    printf("Digite o estado da carta 1: \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade da carta 1: \n"); 
    scanf("%s", &cidade);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km² da carta 1: \n"); 
    scanf("%f", &area);

    printf("Digite o PIB da carta 1: \n"); 
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &tur);

    printf("Carta 2 \n");

    printf("Digite o estado da carta 2: \n");
    scanf("%c", &estado2);



    





    return 0;
}
