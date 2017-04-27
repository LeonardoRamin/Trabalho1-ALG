#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[20];
	int n1, n2 ,n3, n4, mediapora, mediageral, maior, menor, cont;
	printf("Qual o nome do aluno?");
	scanf("%s",nome);
	printf("Qual a nota do primeiro bimestre?");
	scanf("%i",&n1);
	maior=n1;
	menor=n1;
	printf("Qual a nota do segundo bimestre?");
	scanf("%i",&n2);
	if(n2>maior){
		maior=n2;
	}
	if(n2<menor){
		menor=n2;
	}
	printf("Qual a nota do terceiro bimestre?");
	scanf("%i",&n3);
	if(n3>maior){
		maior=n3;
	}
	if(n3<menor){
		menor=n3;
	}
	printf("Qual a nota do quarto bimestre?");
	scanf("%i",&n4);
	if(n4>maior){
		maior=n4;
	}
	if(n4<menor){
		menor=n4;
	}
	mediapora=(n1+n2+n3+4)/4;
	mediageral=mediapora;
	for(cont=1;cont<3;cont++){
		printf("Qual o nome do aluno?");
		scanf("%s",nome);
		printf("Qual a nota do primeiro bimestre?");
		scanf("%i",&n1);
		if(n1>maior){
			maior=n1;
		}
		if(n1<menor){
			menor=n1;
		}
		printf("Qual a nota do segundo bimestre?");
		scanf("%i",&n2);
		if(n2>maior){
			maior=n2;
		}
		if(n2<menor){
			menor=n2;
		}									
		printf("Qual a nota do terceiro bimestre?");
		scanf("%i",&n3);
		if(n3>maior){
			maior=n3;
		}
		if(n3<menor){
			menor=n3;
		}
		printf("Qual a nota do quarto bimestre?");
		scanf("%i",&n4);
		if(n4>maior){
			maior=n4;
		}
		if(n4<menor){
			menor=n4;
		}
		mediapora=(n1+n2+n3+n4)/4;
		mediageral=mediapora+mediageral;	
	}
	printf("A media geral da turma eh %i e a nota maior eh %i e a menor eh %i",mediageral/3,maior,menor);
	return 0;
}
