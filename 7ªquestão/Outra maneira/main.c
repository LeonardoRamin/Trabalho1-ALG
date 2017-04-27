#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cont=0,num=0, soma=0, mult=1;
	printf("Digite um numero:");
	scanf("%i",&num);
	soma=num+soma;
	mult=num*mult;
	while(cont<9){
		printf("Digite um numero:");
		scanf("%i",&num);
		soma=soma+num;
		mult=mult*num;
		cont++;
	}
	printf("A soma eh %i",soma);
	printf("\nO produto eh %.2f",mult);
	return 0;
}
