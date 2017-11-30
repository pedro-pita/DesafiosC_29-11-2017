//sem apontadores
/*#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	int n1,n2;
	printf("Introduza o primeiro numero:");
	scanf("%d",&n1);
	printf("Introduza o segundo numero:");
	scanf("%d",&n2);
	printf("Endereços: %d e %d\n", &n1, &n2);
	if(&n1>&n2)
		printf("%d",n1);
	else
		printf("%d",n2);
}*/

// com apontadores
#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	int *apN1=&n1,*apN2=&n2;
	printf("Introduza o primeiro numero:");
	scanf("%d",&n1);
	printf("Introduza o segundo numero:");
	scanf("%d",&n2);
	printf("Endereços: %d e %d\n", apN1, apN2);
	if(apN1>apN2)
		printf("Numero:%d Apontador:%d",n1,apN1);
	else
		printf("Numero:%d Apontador:%d",n2,apN2);
}
