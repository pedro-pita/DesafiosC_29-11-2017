#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	printf("Endere�os: %d e %d\n", &n1, &n2);
	if(&n1>&n2)
		printf("O endere�o do primeiro numero � maior do que o enderen�o do segundo numero.");
	else
		printf("O endere�o do segundo numero � maior do que o enderen�o do primeiro numero");
}
