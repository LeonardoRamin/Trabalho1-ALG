#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	num=1;
	while(num!=0){
		printf("Digite um numero ou 0 para sair:");
		scanf("%i",&num);
		if(num!=0){
			if(num%2==0){
				printf("Eh par\n");
			}
			else{
				printf("Eh impar\n");
			}
		}
	}
	return 0;
}
