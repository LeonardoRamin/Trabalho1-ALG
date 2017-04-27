#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int codigo;
	printf("Digite um Codigo de 1 ate 15 para ver sua classificacao. 0 para sair.");
	scanf("%i",&codigo);
	if(codigo==1){
		printf("Alimento nao perecivel");
	}
	else{
		if(codigo>=2&&codigo<=4){
			printf("Alimento perecivel");
		}
		else{
			if((codigo>=5)&&(codigo<=7)){
				printf("Vestuario");
			}
			else{
				if(codigo==8){
					printf("Higiene pessoal");
				}
				else{
					if((codigo>=9)&&(codigo<=15)){
						printf("Limpeza e utensilios domesticos");
					}
					else{
						if((codigo<0)||(codigo>15)){
							printf("Invalido");
						}
					}
				}
			}
		}
	}
	return 0;
}
