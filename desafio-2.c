#include <stdio.h>

int main(void) {
  char a_minusculo = 'a', a_maiusculo = 'A';
  char palavra[20], abc_maiusculo[26], abc_minusculo[26];
  int contador[26], maior = 1;

  //nesse for eu preencho 3 vetores
  //um com o alfabeto em minusculo
  //outro om alfabeto maiusculo
  //e outro somente com zero pois contara as repetições de letras
  
  for(int i=0; i<26; i++){
    contador[i] = 0;
    abc_minusculo[i] = a_minusculo;
    abc_maiusculo[i] = a_maiusculo;
    a_maiusculo++;
    a_minusculo++;
  }

  
  
  //lê a palavra
  fgets(palavra, 20, stdin);

  //aqui é feita as comparações de quantas vezes cada letra do alfabeto é repetida na palavra, com letrar maiusculas e minusculas. o contador guarda o numero de repetições 
  for(int i=0; i<26; i++){
    for(int j =0; palavra[j] != '\0'; j++){
      if (abc_maiusculo[i] == palavra[j]) {
        contador[i]++;
      }
      if (abc_minusculo[i] == palavra[j]){
        contador[i]++;
      }
    }
    //condição pra já descobrir qual a maior repetição
    if(maior<contador[i]){
      maior = contador[i];
    }
  }

  for(int i=0;i<26;i++){
    if(maior==contador[i]){
      printf("%c: %d\n", abc_maiusculo[i], maior);
    }
  }

  return 0;
}