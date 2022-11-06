#include <stdio.h>
#include <locale.h>

#define quantidade_bandas 3

typedef struct banda{
	
	char nome[50];
	char estilo[15];
	int integrantes;
	int rank;
		
}BANDA;

void lebandas(BANDA *v){
	
	int i;
	
	printf("|||||||||||INSIRA AS BANDAS|||||||||||\n\n");
	
	for(i=0; i<quantidade_bandas; i++){
		
		printf("\n\nNome da Banda: ");
		scanf("%s", &v[i].nome);
		
		printf("Estilo da banda: ");
		scanf("%s", &v[i].estilo);
		
		printf("Numero de integrantes: ");
		scanf("%d", &v[i].integrantes);
		
		printf("Rank: ");
		scanf("%d", &v[i].rank);
		
	}
	
}

void printbandas(BANDA *v){
	
	int i;
	
	printf("\n\n\n|||||||||||||BANDAS INSERIDAS||||||||||\n");
	
	for(i=0; i<quantidade_bandas; i++){
		
		printf("\n\n||||BANDA %d||||\n", i+1 );
		
		printf("Nome da Banda: %s\n", v[i].nome);
		printf("Estilo da banda: %s\n", v[i].estilo);
		printf("Numero de integrantes: %d\n", v[i].integrantes);
		printf("Rank: %d", v[i].rank);
		
	}
	
}

void filtrabanda(BANDA *v){
	
	int i, j = 0;
	char l_estilo[15];
	
	printf("\n\n\n||||Qual seu estilo de musica||||\n");
	scanf("%s", &l_estilo);
	
	for(i=0; i<quantidade_bandas; i++){
		
		if( strcmp(v[i].estilo,l_estilo) == 0){
			
			printf("\n\n||||||BANDA ENCONTRADA||||||\n\n");
			
			printf("Nome da Banda: %s\n", v[i].nome);
			printf("Estilo da banda: %s\n", v[i].estilo);
				
			j = 1;	
		} 
		
		
	}
	
	if(j == 0){
			
		printf("\n\n||||||NENHUMA BANDA ENCONTRADA :( ||||||");
			
	}
	
}



int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	BANDA bandas[quantidade_bandas];
	
	lebandas(bandas);	
	
	printbandas(bandas);
	
	filtrabanda(bandas);
	
	return 0;
	
	
}





