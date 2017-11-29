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
