#include <stdio.h>

int main(){
	
	int numero = 58;
	double valor = 22.4;
	char letra = 'A';
	
	// ponteiro
	int *pNumero = &numero;
	double  *pValor = &valor;
	char *pLetra = &letra;
	
	//declarando sizeof pra calcular o tamanho
	int tamanho_double = sizeof(double), tamanho_ponteiro_double = sizeof (pNumero);
	int tamanho_float = sizeof (float), tamanho_ponteiro_float = sizeof (pValor);
	int tamanho_char = sizeof (char), tamanho_ponteiro_char = sizeof (pLetra);
	 
	// imprime os tamanhos
	printf("\n");
	printf("Tamanho do INT: %d bytes \n ", tamanho_double);
	printf("Tamanho do float: %d bytes \n", tamanho_float);
	printf("Tamanho do char: %d bytes \n ", tamanho_char);
	
	printf("\n");
		
	printf("Tamanho do ponteiro para INT: %d bytes \n", tamanho_ponteiro_double);
	printf("Tamanho do ponteiro para double: %d \n", tamanho_ponteiro_double);
	printf("Tamanho do ponteiro para char: %d bytes", tamanho_ponteiro_char);
	printf("\n");
	
	// imprime os valores usando ponteiros
	printf("\n");
	printf("Valor de numero: %d \n", *pNumero);
	printf("Valor do decimal: %.2f \n", *pValor);
	printf("Valor da letra: %c ", *pLetra);
	
	// modifica valores atraves de ponteiros
	*pNumero = 150;
	*pValor = 7.45;
	*pLetra = 'Q';
	
	//imprime os novos valores
	printf("\n");
	printf("Novo valor do numero: %d \n", *pNumero);
	printf("Novo valor do decimal: %.2f \n", *pValor);
	printf("Novo valor de letra: %c ", *pLetra);
	
	
}
