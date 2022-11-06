#include <stdio.h>
#include <locale.h>


typedef struct produtos{
	long codigo;
	char nome[100];
	float preco;
	
} produto;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	produto p;
	
	printf("Digite o codigo, nome e preço do produto\n"); 
	scanf("%ld %s %f", &p.codigo, &p.nome, &p.preco);
	printf("%ld %s %1.f\n\n", p.codigo, p.nome, p.preco);
		
	if(p.preco < 4 ){
		printf("Produto %ld em promoção", p.codigo);
	}else{
		printf("Produto %ld Cadastrado", p.codigo);
	}	
	
	return 0;
	
}
