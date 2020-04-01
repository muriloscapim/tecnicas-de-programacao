#include <stdio.h>
#include <stdlib.h>
int main(){
	// declaramos um char com tamanho 30
	char nome[30];
	int idade, bemAlimentado, resfriado;
	float peso;
	
	printf("Informe o nome: ");
	//scanf("%s",&nome);
	gets(nome);
	printf("Informe o peso: ");
	scanf("%f",&peso);
	printf("Iforme a idade: ");
	scanf("%i",&idade);
	printf("Esta bem alimentado? 1 - Sim \ 0 - Nao ");
	scanf("%i",&bemAlimentado);
	printf("Esta resfriado? 1 - Sim \ 0 - Nao ");
	scanf("%i",&resfriado);
	
	if (peso >= 50 && (idade >= 16 && idade <= 69)
	&& bemAlimentado && resfriado)
		printf("O voluntario %s esta apto!\n",nome);
	else
		printf("O voluntario %s nao esta apto!\n",nome);
	system("pause");
	return 0;
}
