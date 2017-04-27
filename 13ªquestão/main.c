#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int l1, l2, l3;
	printf("Digite tres numeros:");
	scanf("%i %i %i",&l1,&l2,&l3);
	if((l1<l2+l3)&&(l2<l1+l3)&&(l3<l1+l2)){
		printf("Formam um triangulo");	
		if((l1==l2)&&(l2==l3)){
			printf(" Equilatero");
		}
		else if((l1==l2)||(l2==l3)||(l1==l3)){
			printf(" Isosceles");
		}
		else{
			printf(" Escaleno");
		}
	}
	else{
		printf("Nao formam um triangulo");
	}
	
	return 0;
}
