#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char vinho;
	int t ,b, r=0;
	t=b=r;
	while(vinho!='f'){
		printf("\nDigite para vinho tinto \"t\" para branco \"b\" para rose \"r\" e \"f\"");
		scanf("%c",&vinho);
		fflush(stdin);
		if(vinho!='f'){
			if(vinho=='t'){
				t++;
			}
			else if(vinho=='b'){
				b++;
			}
			else if(vinho=='r'){
				r++;
			}
			printf("Vinhos:\nTinto %i\nBranco %i e\nRose %i",t,b,r);
		}
	}
	return 0;
}
