#include <stdio.h>

int main () {

	int AnoAtual, AnoNasc, Idade = 0;
	char Nome[40];
	 
	printf("Informe o seu Nome:\n");
	scanf("%s", Nome);
	 
	printf("Informe o ano de nascimento:\n");
	scanf("%d", &AnoNasc);
	
	printf("Informe o Ano Atual:\n");
	scanf("%d", &AnoAtual);
	
	Idade =  AnoAtual - AnoNasc;
	
	printf("Sua idade: %d", Idade);

}
