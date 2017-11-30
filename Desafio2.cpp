//sem apontadores
/*#include <string.h>
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
*/

//com apontadores
#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	int *apN1=&n1,*apN2=&n2;
	printf("Endere�os: %d e %d\n", apN1, apN2);
	if(apN1>apN2)
		printf("O endere�o do primeiro numero � maior do que o enderen�o do segundo numero.");
	else
		printf("O endere�o do segundo numero � maior do que o enderen�o do primeiro numero");
}

