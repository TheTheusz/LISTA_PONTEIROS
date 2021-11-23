#include <stdio.h>
#include <stdlib.h>

int comparar (const void *a, const void *b) { // função comparador que serve para comparar os termos do vetor valores na função qsort.
  return ( *(int*)a - *(int*)b );  
} 

void fakeqsort(float *valor, int tamanho, int (*comparador)(const void *p1, const void *p2)){ // função qsort

  for(int i = 0; i < tamanho; i++){ 
    for(int j = i+1; j < tamanho; j++){
      if(comparador(valor+i,valor+j)>0){ // realiza a função comparador com os endereços de memorias a ser comparado.
        float aux;
        aux = valor[j];
        valor[j] = valor[i];
        valor[i] = aux;
      }
    }
  }
}

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

  fakeqsort(valores,n,comparar); // Reordena o vetor em ordem crescente


  printf("\nOs numeros em ordem crescente é igual a: \n");//Imprime a ordem crescente do valores
  for(int k = 0; k < n; k++){
    printf("%.1f ",valores[k]);
  }
	free(valores);
  
return 0;
}
