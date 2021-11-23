#include <stdio.h>
#include <stdlib.h>

int comparador (const void * a, const void * b) { // função comparador que serve para comparar os termos do vetor valores na função qsort.
  return ( *(int*)a - *(int*)b ); 
  // Caso o resultado dessa subtração seja maior que 0, indica que a > b, portanto, o elemento a fica depois do elemento b. 
  // Caso o resultado dessa subtração seja menor que 0, indica que a < b, portanto, o elemento a fica antes do elemento b. 
  // E caso o resultado dessa subtração seja igual a 0, indica que a = b, portanto, o elemento a e b permanecem na mesma posição. 
} // IMPORTANTE RESSALTAR QUE QUEM FAZ A TROCA DA POSIÇÃO DOS ELEMENTOS É A FUNÇÃO QSORT, COMPARADOR APENAS RETORNA UM VALOR QUE PODE SER 0, >0 OU <0.

int main(void){
  int n;
  
  printf("Quantos termos deseja digitar?\n"); 
  scanf("%d",&n); // Recebe a quantidade de termos do vetor

  float *valores;
  valores = malloc(n * sizeof(float)); // Alocacao dinamica do vetor

  for(int z = 0; z < n; z++){ // Realiza a leitura dos valores de cada termo do vetor
    printf("digite o valor do %d termo:",z+1);
    scanf("%f",&valores[z]);
  }

  qsort (valores, n, sizeof(float), comparador); // Reordena o vetor em ordem crescente

  printf("\nOs numeros em ordem crescente é igual a: \n");//Imprime a ordem crescente do valores
  
  for(int k = 0; k < n; k++){
    printf("%.0f ",valores[k]);
  }
	free(valores);
  
return 0;
}
