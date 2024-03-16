#include <stdio.h>

#define texto "Central de Cadastro Unificado a Saude."

int main (){
	
	printf("%s\n", texto);
	
	char nome[200] = "";
	int idade = 0;
	float renda = 0.0;
	char plano[200] = "";
	
	printf("Digite seu nome:\n");
	scanf("%s", &nome);
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Digite sua renda mensal:\n");
	scanf("%f", &renda);
	
	printf("Digite o plano de saude que deseja contratar:\n");
	scanf("%s", &plano);
	
	printf("Para finalização do cadastro, confirme seus dados:\n");
	
	printf("nome: %s\n", nome);
	
	printf("idade: %d\n", idade);
	
	printf("renda: %.3f\n", renda);
	
	printf("plano: %s\n", plano);
	
	printf("Confirmar\n");
	
}
