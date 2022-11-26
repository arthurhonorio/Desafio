#include <stdio.h>

int BuscaMenor(int *vetor, int menor, int n){
    for(int i = 0; i < n; i++) {
      if(menor == vetor[i]) {
        menor++;
        i=-1;
        // -1 porque no final i é icrementado e vira 0, fazendo o laço começar novamente
      }
    }
    return menor;
  }

int main () {
  int n, resposta;

  printf("digite a quantidade de inteiro(s) do vetor:\n");
  scanf("%d", &n);

  int vetor[n];
  printf("digite o vetor:\n");

  for (int i = 0; i<n; i++){
    scanf("%d", &vetor[i]);
  }

//BuscaMenor verifica se os menores inteiros positivos estão no vetor, começando pelo 1.
//Caso presente no vetor, o menor inteiro positivo é incrementado e a busca começa de novo
  resposta = BuscaMenor(vetor, 1, n);

  printf("o menor inteiro positivo que nao aparece no vetor eh %d\n", resposta);


  return 0;
}
