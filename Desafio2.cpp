//sem apontadores
/*#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	printf("Endereços: %d e %d\n", &n1, &n2);
	if(&n1>&n2)
		printf("O endereço do primeiro numero é maior do que o enderenço do segundo numero.");
	else
		printf("O endereço do segundo numero é maior do que o enderenço do primeiro numero");
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
	printf("Endereços: %d e %d\n", apN1, apN2);
	if(apN1>apN2)
		printf("O endereço do primeiro numero é maior do que o enderenço do segundo numero.");
	else
		printf("O endereço do segundo numero é maior do que o enderenço do primeiro numero");
}

