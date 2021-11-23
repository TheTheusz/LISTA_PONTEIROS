contador/   valor   /    valor     /     endereco       /     endereco

i = 0  vet[0] = 1.1  *(f + 0) = 1.1  &vet[0] = 225D5F90  (f + 0) = 225D5F90
i = 1  vet[1] = 2.2  *(f + 1) = 2.2  &vet[1] = 225D5F94  (f + 1) = 225D5F94
i = 2  vet[2] = 3.3  *(f + 2) = 3.3  &vet[2] = 225D5F98  (f + 2) = 225D5F98
i = 3  vet[3] = 4.4  *(f + 3) = 4.4  &vet[3] = 225D5F9C  (f + 3) = 225D5F9C
i = 4  vet[4] = 5.5  *(f + 4) = 5.5  &vet[4] = 225D5FA0  (f + 4) = 225D5FA0

//As respostas obtidas condiz com as respostas esperadas, pois:

for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i); 
// i = i, então vai depender apenas do laço for realizar o incremento
  printf("vet[%d] = %.1f",i, vet[i]); 
/* vet[i] é justamente o valor do vetor em cada endereço, 
	 dependendo apenas do laço para o incremento 																		*/ 
  printf("*(f + %d) = %.1f",i, *(f+i)); 
/* *(f + i) é o conteudo do endereço de f, ou seja,
	 vet. Porém ele pula o endereço a cada incremento do laço
	 Portanto, no primeiro vai ser o conteúdo do endereço f pulando 0 endereço, 1.1;
	 no segundo, vai ser o conteúdo do endereço f pulando 1 endereço, ou seja, 2.2;
	 no terceiro, vai ser o conteúdo do endereço f pulando 2 endereço, ou seja, 3.3;
	 no quarto, vai ser o conteúdo do endereço f pulando 3 endereço, ou seja 4.4.	
	 e no quinto, vai ser o conteúdo do endereço f pulando 4 endereço, ou seja 5.5.	*/																	
  printf("&vet[%d] = %X",i, &vet[i]);
// &vet[i] é o endereço de cada termo do vetor vet, dependendo apenas do incremento
  printf("(f + %d) = %X",i, f+i);
/* (f + i) é o endeço de cada termo do vetor, porém agora utilizando o ponteiro f
	 e o i para pular o endereço a cada incremento. Então, como i é int, o endereço pula
	 de 4 em 4. Por isso (f + 0) = 225D5F90 e (f + 1) = 225D5F94. */
  }
