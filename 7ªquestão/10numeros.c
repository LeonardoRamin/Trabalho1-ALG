#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10=0;
	float soma, mult=0;
	printf("Digite 10 numeros:");
	scanf("%i %i %i %i %i %i %i %i %i %i",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
	soma=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
	mult=n1*n2*n3*n4*n5*n6*n7*n8*n9*n10;
	printf("a soma dos numeros eh %f\nE o produto dos numeros eh %f",soma,mult);
	return 0;
}
