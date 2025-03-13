#include <stdio.h>
int main() {

printf("Desafio Super Trunfo - Países \n");
printf("Carta 1 \n");

char estado = 'A';
char codigo[20] = "A01";
char cidade[30] = "São Paulo";
int populacao = 12325000;
float area = 152111;
float pib = 69928;
int tur = 50;

   


    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome do estado: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", tur);

    scanf("%c\n", &estado);
    scanf("%s\n", &codigo);
    scanf("%s\n", &cidade);
    scanf("%d habitantes\n", &populacao);
    scanf("%f km²\n", &area);
    scanf("%f bilhões de reais\n, &pib");
    scanf("%d\n", &tur);

    
    

return 0;

}
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizad


