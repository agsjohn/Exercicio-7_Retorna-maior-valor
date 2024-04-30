#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
#define MAX 100

int maiornovetor(int *vetor, int tamanho);

main() {
  int x, vet[TAM], maior;
  srand(time(NULL));
  for(x = 0; x < TAM; x++){
    vet[x] = rand() % MAX + 1;
  }
  printf("Vetor gerado: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  maior = maiornovetor(vet, TAM);
  printf("Maior número do vetor: %i\n", maior);
  getchar();
}

int maiornovetor(int *vetor, int tamanho){
  int x, maior;
  maior = vetor[0];
  for(x = 0; x < tamanho; x++){
    if(maior < vetor[x]){
      maior = vetor[x];
    }
  }
  return maior;
}