#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portugues");
		
	int num1, num2, num3, maior = 3;
	
	printf("Insira tres numeros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if( num1 >= num2 && num1 >= num3){
		
		maior = 1;
		
	}
	
	if( num2 >= num1 && num2 >= num3){
		
		maior = 2;
		
	}
	
	
	printf("\nMaior posição: %d", maior);
	
}
