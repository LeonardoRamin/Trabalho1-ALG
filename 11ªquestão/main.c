#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[40], ct[20];
	char sexo;
	int cont=0;
	for(cont=0;cont<3;cont++){
		printf("Qual o seu nome?");
		gets(nome);
		fflush(stdin);
		printf("Qual o seu sexo?");
		scanf("%c",&sexo);
		if(sexo=='m'){
			printf("Qual time voce torce?");
			scanf("%s",ct);			
		}
		else if(sexo=='f'){
			printf("Seu estado civil?");
			scanf("%s",ct);
		}
		else{
			printf("Sexo nao existe");
		}
		printf("%s\n%s\n",nome,ct);
		fflush(stdin);
	}
	return 0;
}
