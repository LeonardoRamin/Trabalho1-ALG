#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ipi, c1, q1, c2, q2;
	float v1, v2, formula;
	printf("Qual a percentagem de IPI a ser acrescida no valor das pecas?");
	scanf("%i",&ipi);
	printf("Digite o codigo, o valor e a quantidade de pecas:");
	scanf("%i %f %i",&c1,&v1,&q1);
	fflush(stdin);
	printf("Digite o codigo, o valor e a quantidade de pecas:");
	scanf("%i %f %i",&c2,&v2,&q2);
	fflush(stdin);
	formula=((v1*q1+v2*q2)*(ipi/100+1);
	printf("O valor total eh R$ %.2f",formula);
	return 0;
}
