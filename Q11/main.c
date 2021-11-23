a. aloha[2] = value;
/* COMANDO VÁLIDO - um termo vetor aloha vai receber o valor de value. 
Ambos são float 
*/
b. scanf("%f", &aloha);
/* COMANDO VÁLIDO - a função scanf vai fazer a leitura do valor e vai armazenar
no endereço do primeiro termo de aloha.
*/
c. aloha = "value";
/* COMANDO INVÁLIDO - primeiro, aloha é uma variavel do tipo float, portanto não recebe
texto. Segundo, caso a expressão fosse aloha = value; sem aspas, ela também seria invalida
pois, seria aloha sem * referencia ao endereço do primeiro termo, portanto, inválido.
*/
d. printf("%f", aloha);
/* COMANDO INVÁLIDO - apesar do codigo compilar, esse comando é inválido, pois aloha
sem o * indica o endereço do primeiro termo do vetor, portanto é necessário usar o
%p para referenciar um endereço, logo, o comando compila porém não faz nada.
*/
e. coisas[4][4] = aloha[3];
/* COMANDO VÁLIDO - O comando é válido, pois esta atribuindo um valor do tipo float
a outro valor do tipo float.
*/
f. coisas[5] = aloha;
/* COMANDO INVÁLIDO - pois a coisas é uma matriz, portanto, tem que definir tanto as
linhas como colunas. Ou você não declara nada ou tem que declarar ambos.
*/
g. pf = value;
/* COMANDO INVÁLIDO - pois pf é um ponteiro, logo, para esse comando ser válido teria 
que ser &value ou *pf.
*/
h. pf = aloha;
/* COMANDO VÁLIDO - pois aloha referencia o endereço do primeiro termo do vetor aloha
e pf é um ponteiro, então, é válido.
*/
