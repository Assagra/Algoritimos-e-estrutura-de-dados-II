#include <stdio.h>
#include <locale.h>

#define c_aluno 2

float calcula_media(float nota1, float nota2){
	
	float media;
	
	media = (nota1 + nota2) / 2;
	
	return media;
	
}


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//estruturas
	
	struct st_aluno{
	
		char nome[30];
		int matricula;
		float nota1;
		float nota2;
		float media;	
		
	};
	
	//variaveis
	
	//int c_aluno = 2;
	struct st_aluno alunos[c_aluno];
	
	int i, contador = 0;
	float total_notas = 0, media_sala = 0;
	
	
	
	printf("|||||||||||||||||||| MEDIA DOS ALUNOS |||||||||||||||||||||||\n\n\n\n");
	
	for(i = 0; i < c_aluno; i++){
		
		printf("----------INSIRA A NOTAS DO ALUNO--------\n");
		
		printf("Nome: ");
		scanf("%s", &alunos[i].nome);
		
		printf("Matricula: ");
		scanf("%i", &alunos[i].matricula);
		
		printf("Nota 1: ");
		scanf("%f", &alunos[i].nota1);
		
		printf("Nota 2: ");
		scanf("%f", &alunos[i].nota2);
		
		alunos[i].media = calcula_media(alunos[i].nota1, alunos[i].nota2);
		
		total_notas = total_notas + alunos[i].media;
		contador++;
			
	}
	
	media_sala = total_notas / contador;
	
	for(i = 0; i < c_aluno; i++){
		
		
		printf("\n\n|||||||||||||||||| ALUNO %d |||||||||||||||||||||\n\n", alunos[i].matricula);
		
		printf("Nome do aluno: %s\n", alunos[i].nome);
		printf("Nota 1: %1.f\n", alunos[i].nota1);
		printf("Nota 2: %1.f\n", alunos[i].nota2);
		
		
		if(alunos[i].media >= 6){
		
			printf("Media: %1.f (ACIMA)\n", alunos[i].media);	
		}else{
			printf("Media: %1.f (ABAIXO)\n", alunos[i].media);
		}
		
		
	}
	
	printf("\n---------------------------------------------------------------\n\n");
	printf("Media total da Sala: %1.f\n", media_sala);
	printf("Total de Alunos: %d\n", contador);
	
	

	
	return 0;
}
