#include <stdio.h>
#define NUM_ESTADOS 2
// Estrutura para organizar as características das cartas para o jogo Super Trunfo
typedef struct {
  char letraEstado[3];
  char codigo[4];
  char cidade[30];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;
} Estado;
  
int main() {
  Estado estado[NUM_ESTADOS];

  for (int i = 0; i < NUM_ESTADOS; i++) {

    // Variável Estado
    printf("Estado: ");
    scanf("%2s", estado[i].letraEstado);
    getchar();
  
    // Variável Código da Carta
    printf("Código: ");
    scanf("%3s", estado[i].codigo);
    getchar();
  
    // Variável Nome da Cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", estado[i].cidade);
  
    // Variável População
    printf("População: ");
    scanf("%d", &estado[i].populacao);
  
    // Variável Área
    printf("Área: ");
    scanf("%f", &estado[i].area);
  
    // Variável PIB
    printf("PIB: ");
    scanf("%f", &estado[i].pib);
  
    // Variável Pontos Turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &estado[i].pontosTuristicos);
  
    printf("\n");
    }

  // Exibir as cartas
  for (int i = 0; i < NUM_ESTADOS; i++) {
    printf("Carta %02d:\n", i + 1);
    printf("Estado: %s\n", estado[i].letraEstado);
    printf("Código: %s\n", estado[i].codigo);
    printf("Cidade: %s\n", estado[i].cidade);
    printf("População: %d\n", estado[i].populacao);
    printf("Área: %.2f km²\n", estado[i].area);
    printf("PIB: %.2f bilhões\n", estado[i].pib);
    printf("Número de Pontos Turísticos: %d\n\n", estado[i].pontosTuristicos);
  }
    return 0;
}



