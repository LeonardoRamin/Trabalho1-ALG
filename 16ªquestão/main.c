#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float temperatura=0, celsius=0, fahrenheit=0;
	int conversao=0;
	printf("Qual o valor da temperatura?");
	scanf("%f",&temperatura);
	printf("1-Celsius para Fahrenheit\n2-Fahrenheit para celsius\n");
	printf("Em qual temperatura?");
	scanf("%i",&conversao);
	if(conversao==1){
		celsius=temperatura*1.8+32;
		printf("A temperatura eh %.3f F",celsius);
	} 
	else if(conversao==2){
		fahrenheit=(temperatura-32)/1.8;
		printf("A temperatura eh %.3f C",fahrenheit);
	}
	return 0;
}
