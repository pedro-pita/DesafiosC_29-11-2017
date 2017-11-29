#include <string.h>
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
}
