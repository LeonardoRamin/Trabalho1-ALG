#include <stdio.h>
#include <stdlib.h>

/* Qual animal é? */

int main(int argc, char *argv[]) {
	char animal;
	printf("Digite \"s para sim e \"n para nao");
	printf("O animal eh mamifero?");
	scanf("%c",&animal);
	fflush(stdin);
	if(animal=='s'){
		printf("O animal eh quadrupede?");
	    scanf("%c",&animal);
	    fflush(stdin);
	    if(animal=='s'){
	    	printf("O animal eh carnivoro?");
	        scanf("%c",&animal);
	        fflush(stdin);
	        if (animal=='s'){
	        	printf("O animal eh o Leao.");
	        }
	        else{
	        	printf("O animal eh herbivoro?");
	  			scanf("%c",&animal);
				  if(animal=='s'){
				  	printf("O animal eh o cavalo.");
				  } 	
	        }
	    }
	    else{
	    	printf("O animal eh bipede?");
	        scanf("%c",&animal);
	        if (animal=='s'){
	        	printf("O animal eh onivero?");
	            scanf("%c",&animal);
	        }
	        else{
	        	printf("O animal eh Voador?");
	  			scanf("%c",&animal);
	  			if(animal=='S'||'s'){
	  				printf("O animal eh o Macaco.");
	  			}
	        }
	    }
	}
	else{
		printf("Att.");
	}
	return 0;
}
