#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // variáveis
    char estado [20];
    char nome [20];
    char cidade [30];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //INTERAÇÃO COM O USUÁRIO
    
    printf("\nSuperTrunfo Países\n");
    printf("\n--- Cadastro da carta ---\n");
    printf("Sigla do estado (ex:SC): \n");
    scanf("%s", &estado);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade); 

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área (km²): \n");
    scanf("%f", &area);

    printf("PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
