#include <stdio.h>
#include <stdlib.h>

void somavetor(int *resultado, int *valor1, int *valor2, int tamanho){

  for(int i = 0; i < tamanho; i++){
    resultado[i] = valor1[i] + valor2[i];
  }
  }

int main(void) {
  int *soma, *vetor1, *vetor2;
  int n;

  printf("Quantos termos deseja digitar?\n"); 
  scanf("%d",&n); // Recebe a quantidade de termos do vetor

  vetor1 = malloc(n * sizeof(int)); // Alocação dinâmica dos vetores
  vetor2 = malloc(n * sizeof(int));
  soma = malloc(n * sizeof(int));

  
  for(int i = 0; i < n; i++){ // Realiza a leitura dos valores de cada termo do vetor1
    printf("digite o valor do %d termo do vetor1:",i+1);
    scanf("%d",&vetor1[i]);
  }

  for(int i = 0; i < n; i++){ // Realiza a leitura dos valores de cada termo do vetor2
    printf("digite o valor do %d termo do vetor2:",i+1);
    scanf("%d",&vetor2[i]);
  }


  printf("vetor A + vetor B:\n");
  for (int i = 0; i < n; i++){ // Imprime o vetor1
    printf("%d ",vetor1[i]); 
  }

  printf("  +  \n");

  for (int i = 0; i < n; i++){ // Imprime o vetor2
    printf("%d ",vetor2[i]); 
  }
  
  somavetor(soma,vetor1,vetor2,n); // Função que soma os vetores


  printf("\n");
  for (int i = 0; i < n*3; i++){ // Tracinho da soma 
    printf("-"); 
  }
  printf("\n");

  for (int i = 0; i<n; i++){ // Imprime o resultado da soma
  printf("%d ",soma[i]);
  }

  free(soma); // Liberação das memorias
  free(vetor2);
  free(vetor1);
  return 0;
}
