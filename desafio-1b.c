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

  //o for a seguir indentifica o menor e o maior inteiro da lista
  int maior, menor;
  for(int i = 0; i< n; i++){
    maior = vetor[0];
    menor = vetor[0];
    if(maior < vetor[i]){
      maior = vetor[i];
    }
    if(menor > vetor[i]){
      menor = vetor[i];
    }
  }

//BuscaMenor procura qual o menor inteiro que não aparece no vetor, começando pelo menor número que já aparece.
//Caso presente no vetor, o menor inteiro positivo é incrementado e a busca começa de novo.
  resposta = BuscaMenor(vetor, menor, n);

  if (resposta < maior){
    printf("o menor inteiro positivo que nao aparece no vetor eh %d\n", resposta);
  }

  else {
    printf("nao ha inteiro positivo que esta fora da lista e está entre o menor e maior inteiro da lista\n");
  }

  return 0;
}
