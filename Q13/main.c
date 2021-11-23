#include <stdio.h>
#include <stdlib.h>

void crescente(float *valor, int tamanho){// Realiza a ordem crescente dos elementos
  for(int i = 0; i < tamanho; i++){ 
    for(int j = i+1; j < tamanho; j++){
      if(valor[i]>valor[j]){
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
  
  crescente(valores,n);// Realiza a ordem crescente dos elementos

  printf("\nOs numeros em ordem crescente é igual a: \n");//Imprime a ordem crescente do valores
  for(int k = 0; k < n; k++){
    printf("%.0f ",valores[k]);
  }
	free(valores);
  
return 0;
}
