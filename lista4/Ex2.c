#include <stdio.h>
#include <stdlib.h>

int main(){
	float peso, altura;
	double imc;
	
	printf("Qual seu peso?\n");
	scanf("%f",&peso);
	printf("Qual sua altura?\n");
	scanf("%f",&altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5){
		printf("Abaixo o peso\n");
	}
	else if (imc >= 18.5 && imc <= 24.9){
		printf("Peso normal\n");
	}
	else if (imc >= 25.0 && imc <= 29.9){
		printf("Sobrepeso\n");
	}
	else if (imc >= 30.0 && imc <= 34.9){
		printf("Obesidade de Grau I\n");
	}
	else if (imc >= 35.0 && imc <= 39.9){
		printf("Obesidade de Grau II\n");
	}
	else {
		printf("Obesidade de Grau III\n");
	}
	system("pause");
	return 0;
}
