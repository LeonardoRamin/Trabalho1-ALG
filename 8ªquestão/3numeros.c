#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, cont=0;
	for(cont=1;cont<=30;cont++){
		printf("Digite tres numeros:");
		scanf("%i %i %i",&n1,&n2,&n3);
		printf("\nA soma eh %i\n",n1+n2+n3);
	}
	return 0;
}
