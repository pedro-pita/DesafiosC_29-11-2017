//com apontadores
#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	int nInt=10;
	float nFloat=27.0;
	char cChar='A';
	printf("Antes:\nInteiro=%d\nFloat=%f\nChar=%c\n",nInt,nFloat,cChar);
	
	int *aInt=&nInt;
	float *aFloat=&nFloat;
	char *aChar=&cChar;
	*aInt=76023;
	*aFloat=907.7;
	*aChar='S';
	printf("\nDepois:\nInteiro=%d\nFloat=%f\nChar=%c\n",nInt,nFloat,cChar);	
}

//Solução professor
#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	int x = 10;
	float f = 12.5;
	char c = 'd';
	int *xp;
	float *fp;
	char *cp;
	
	xp = &x;
	fp = &f;
	cp = &c;
	
	printf("A->x=%d\n",x);// 10
	printf("A->f=%.2f\n",f);// 10
	printf("A->c=%c\n",c);// 10
	*xp = 20;
	*fp = 24.45;
	*cp = 'g';
	printf("D->x=%d\n",x);// 10
	printf("D->f=%.2f\n",f);// 10
	printf("D->c=%c\n",c);// 10
}
