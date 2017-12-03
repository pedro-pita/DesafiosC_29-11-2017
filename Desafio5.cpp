//sem apontadores
#include <string.h>
#include <locale.h>
#include <stdlib.h>
void soma(int &a, int b){
	a=a+b;
}
int main(){
	int a=2,b=3;
	printf("Antes: A=%d e B=%d\n",a,b);
	soma(a,b);
	printf("Depois: A=%d e B=%d\n",a,b);
}

//com apontadores
#include <string.h>
#include <locale.h>
#include <stdlib.h>
void soma(int *a,int *b) {
	*a += *b;
}
int main(){
int a,b;
	printf("Introduza o valor de A:\n");
	scanf("%d",&a);
	printf("Introduza o valor de B:\n");
	scanf("%d",&b);
	printf("Antes:\nValor de A: %d\nValor de b:%d\n\n",a,b);
	soma(&a,&b);
	printf("Depois:\nValor de B: %d\nValor de b:%d",a,b);
}

//Solução professor
#include <string.h>
#include <locale.h>
#include <stdlib.h>
void somarEx5(int *v1, int v2){
	int soma = *v1 + v2;
	*v1 = soma;
}
int main(){
	int ex5 ,ex5_;
	int *ex5p= &ex5,*ex5p_ = &ex5_;
	scanf("%d %d",ex5p,ex5p_);
	printf("A->%d %d\n",*ex5p,*ex5p_);
	somarEx5(ex5p,*ex5p_);
	printf("D->%d %d\n",*ex5p,*ex5p_);
	/* OU */
	somarEx5(ex5p,ex5_);
	printf("D->%d %d\n",*ex5p,ex5_);
}
