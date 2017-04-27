#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor;
	int condicao;
	float resultado;
	printf("Digite o valor do produto");
	scanf("%f",&valor);
	printf("Digite a condicao de pagamento \n1-A vista em dinheiro ou cheque, recebe 10%% de desconto \n2-A vista no cartao de credito, recebe 7%% de desconto \n3-Em 2 vezes, preco normal de etiqueta sem juros \n4-Em 3 vezes, preco normal de etiqueta mais juros de 10%%\n");
	scanf("%i",&condicao);
	if(condicao==1){
		resultado=valor*0.1;
		printf("%f",valor-resultado);
	}
	else if(condicao==2){
		resultado=valor*0.07;
		printf("%f",valor-resultado);
	}
	else if(condicao==3){
		printf("%f",valor);
	}
	else if(condicao==4){
		resultado=valor*0.1;
		printf("%f",valor+resultado);
	}
	return 0;
}
