#include <stdio.h>

//função para imprimir os numeros de A ate B

void M (int A, int B){
  for (int i = A;i<=B;i++){
    printf("%d\n",i);
    }
  }

int main(void) {
  void (*N)(int,int) = &M; // ponteiro para a função VOID.
  int c,d;

  printf("Digite o intervalo de numeros que você deseja imprimir o intervalo: \n");
  
  scanf("%d \n", &c);
  scanf("%d", &d);

  (*N)(c, d);
    
  return 0;
}
