#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cont=0;
	cont=1;
	while(cont<=199){
		printf("\n%i",cont);
		cont=cont+2;
	}
	return 0;
}
