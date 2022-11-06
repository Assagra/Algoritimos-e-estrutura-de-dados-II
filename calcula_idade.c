#include <stdio.h>
#include <locale.h>


int get_idade(){
	
	int idade;
	
	do{
	
	printf("Incira uma idade: \n");
	scanf("%d", &idade);

	}while ( idade < 0 || idade > 100);
	
	return idade;
	
}

int change_positive_number(int number){
	
	if( number < 0){
		number = number * -1;
	}
	
	return number;
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade1, idade2, diferenca;
	
    idade1 = get_idade();
    idade2 = get_idade();
    
    diferenca = idade1 - idade2;
    
    diferenca =  change_positive_number(diferenca);
    
    printf("Diferença: %d", diferenca);
    
    return 0;
    
}
