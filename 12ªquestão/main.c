#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2;
	n1=n2=1;
	while((n1!=0)&&(n2!=0)){
		printf("Digite dois numeros ou 0 e 0 para sair");
		scanf("%i %i",&n1,&n2);
		if((n1!=0)&&(n2!=0)){
			printf("A media eh %i\n",(n1+n2)/2);
		}
	}
	return 0;
}
