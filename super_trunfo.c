#define NUM_ESTADOS 2
// Estrutura para organizar as características das cartas para o jogo Super Trunfo
typedef struct {
  char letraEstado[2];
  char codigo[4];
  char nomeCidade[30];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;
} Estado;
  
int main() {
  Estado estado [NUM_ESTADOS];

  for (int = 1; i < NUM_ESTADOS; i++) {

  // Variável Estado
  printf("Estado: ");
  scanf("%2s", estados[i].letraEstado);

  // Variável Código da Carta
  printf("Código: ");
  scanf("%2s", estados[i].codigo);

  // Variável Nome da Cidade
  printf("Nome da Cidade: ");
  scanf("%[^\n]s", estados[i].nomeCidade);

  // Variável População
  printf("População: ");
  scanf("%d", &estados[i].populacao);

  // Variável Área
  printf("Área: ");
  scanf("%f", &estados[i].area);

  // Variável PIB
  printf("PIB: ");
  scanf("%f", &estados[i].pib);

  printf("\n");
  }

  // Exibir as cartas
  for (int i = 0; i < NUM_ESTADOS; i++) {
    printf("Carta %02d:\n", i + 1);
    printf("Estado: %s\n", estados[i].letraEstado);
    printf("Código: %s\n", estados[i].codigo);
    printf("Cidade: %s\n", estados[i].cidade);
    printf("População: %d\n", estados[i].populacao);
    printf("Área: %.2f km²\n", estados[i].area);
    printf("PIB: %.2f bilhões\n", estados[i].pib);
    printf("Número de Pontos Turísticos: %d\n\n", estados[i].pontosTuristicos);
  }
    return 0;
}


