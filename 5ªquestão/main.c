#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cont, idade, somaidade, maioridade, menoridade=0;
	float peso, altura=0;
	float somapeso, somaaltura=0;
	float maiorpeso, menorpeso, maioraltura, menoraltura=0;
	printf("Qual a idade?");
	scanf("%i",&idade);
	somaidade=idade+somaidade;
	maioridade=idade;
	menoridade=idade;
	printf("Qual o peso?");
	scanf("%f",&peso);
	fflush(stdin);
	somapeso=peso+somapeso;
	maiorpeso=peso;
	menorpeso=peso;
	printf("Qual a altura?");
	scanf("%f",&altura);
	fflush(stdin);
	somaaltura=altura+somaaltura;
	maioraltura=altura;
	menoraltura=altura;
	while(cont<49){
		printf("Qual a idade?");
		scanf("%i",&idade);
		fflush(stdin);
		somaidade=idade+somaidade;
		if(idade>maioridade){
			maioridade=idade;
		}
		if(idade<menoridade){
			menoridade=idade;
		}
		printf("Qual o peso?");
		scanf("%f",&peso);
		fflush(stdin);
		somapeso=peso+somapeso;
		if(peso>maiorpeso){
			maiorpeso=peso;
		}
		if(peso<menorpeso){
			menorpeso=peso;
		}
		printf("Qual a altura?");
		scanf("%f",&altura);
		fflush(stdin);
		somaaltura=altura+somaaltura;
		if(altura>maioraltura){
			maioraltura=altura;
		}
		if(altura<menoraltura){
			menoraltura=altura;
		}
		cont++;
	}
	printf("A media da idade eh %i, do peso eh +/- %.2f, da altura eh %.2f",somaidade/50,somapeso/50,somaaltura/50);
	printf("\nA maior idade, peso e altura sao %i, %.2f e %.2f e as menores sao %i, %.2f e %.2f",maioridade,maiorpeso,maioraltura,menoridade,menorpeso,menoraltura);
	return 0;
}
