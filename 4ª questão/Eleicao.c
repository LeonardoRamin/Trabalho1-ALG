#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c1, c2, c3, c4, nulo, branco, recebe;
	float porcentagem;
	c1=0;
	c2=0;
	c3=0;
	c4=0;
	nulo=0;
	branco=0;
	recebe=0;
	porcentagem=0;
	printf("\n1-Lula\n2-Obama\n3-Jose Serra\n4-Dr.Robotnik\n5-Voto nulo\n6-Voto em branco\n0-Sair");
	printf("\nDigite o numero do cadidato que recebera o seu voto");
	scanf("%i",&recebe);
	if(recebe==1){
		c1=c1+1;
	}
	else if(recebe==2){
		c2=c2+1;
	}
	else if(recebe==3){
		c3=c3+1;
	}
	else if(recebe==4){
		c4=c4+1;
	}
	else if(recebe==5){
		nulo=nulo+1;
	}
	else if(recebe==6){
		branco=branco+1;
	}
	else if((recebe<0)||(recebe>6)){
		printf("Candidato nao existe\n");
	}
	if(recebe!=0){
		printf("1-Total de votos para cada canditado, nulos e em braco\n2-Percentual dos votos nulos e em branco sobre o total \n0-Sair");
		printf("\nDigite a sua acao");
		scanf("%i",&recebe);
		if(recebe==1){
		printf("Lula tem %i votos \nObama tem %i votos \nJose Serra tem %i votos \nDr.Robotnik tem %i votos \nSao %i votos nulos e %i votos em branco",c1,c2,c3,c4,nulo,branco);
		}
		else if(recebe==2){
			porcentagem=((nulo+branco)*100)/(c1+c2+c3+c4+nulo+branco);
			printf("A porcentagem dos votos nulos e brancos eh %f%%",porcentagem);
		}
		else if((recebe<0)||(recebe>2)){
			printf("O que quer fazer?");
		}
	}
	return 0;
}
