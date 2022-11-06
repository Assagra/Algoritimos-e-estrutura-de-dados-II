#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario_hora, salario_final;
	int horas_trabalhadas;
	
	
	printf("Insira o salario por hora: ");
	scanf("%f", &salario_hora);
	
	printf("\n Aponte Suas Horas: ");
	scanf("%d", &horas_trabalhadas);
	
		
	salario_final = salario_hora * horas_trabalhadas;
	
	printf("\n Total a receber: %.2f ", salario_final);
	
	
	 return 0;
	 
}
