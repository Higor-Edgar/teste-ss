#include <stdio.h>

int main(){
	int idade = 0;
	float peso = 0.0;
	
	printf("Favor, insira sua idade abaixo: \n");
	scanf("%d", &idade);
	
	printf("Em seguida, digite seu peso:\n");
	scanf("%f", &peso);
	
	
	printf("Idade informada: %d.\n", idade);
	printf("Peso informado: %f.\n", peso);
	
}
