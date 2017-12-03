//sem apontadores
#include <string.h>
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

//Solução professor
//sem apontadores
#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	int x2,x3;
	printf("x2=%d  x3=%d\n",&x2,&x3);
	if(&x2 > &x3)
		printf("%d\n",&x2);
	else
		printf("%d\n",&x3);
}

//com apontadores
#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	int x2_,x3_;
	int *x2p = &x2_,*x3p=&x3_;
	printf("x2=%d  x3=%d\n",&x2_,&x3_);
	if(x2p > x3p)
		printf("%d\n",&x2_);
	else
		printf("%d\n",&x3_);	
}
