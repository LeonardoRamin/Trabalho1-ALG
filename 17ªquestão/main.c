#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float km, consumo, media;
	printf("Quantos quilometros faz por hora?");
	scanf("%f",&km);
	printf("Qual o consumo que se deu nesse trajeto?");
	scanf("%f",&consumo);
	media=km/consumo;
	printf("A media do consumo eh %.2fkm/l",media);
	return 0;
}
