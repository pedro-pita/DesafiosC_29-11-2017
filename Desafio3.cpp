//sem apontadores
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

//Solução professor
#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	int ex3 = 13,ex3_=34;
	int *ex3p = &ex3,*ex3_p=&ex3_;
	printf("ex3=%d  ex3_=%d\n",&ex3,&ex3_);
	if(ex3p > ex3_p)
		printf("%d\n",*ex3p);
	else
		printf("%d\n",*ex3_p);
	/* Ex4 */
	int ex4 ,ex4_;
	int *ex4p= &ex4,*ex4p_ = &ex4_;
	scanf("%d %d",ex4p,ex4p_);
	printf("A->%d %d\n",*ex4p,*ex4p_);
	trocarEx4(ex4p,ex4p_);
	printf("D->%d %d\n",*ex4p,*ex4p_);
}
