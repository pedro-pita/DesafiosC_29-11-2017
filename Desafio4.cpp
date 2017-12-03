//sem apontadores
#include <string.h>
#include <locale.h>
#include <stdlib.h>
void troca(int &a, int &b){
	int aux;
	aux=a;
	a=b;
	b=aux;
}
int main(){
	int a=2,b=3;
	printf("Antes: A=%d e B=%d\n",a,b);
	troca(a,b);
	printf("Depois: A=%d e B=%d\n",a,b);
}

//com apontadores
#include <string.h>
#include <locale.h>
#include <stdlib.h>
void trocar(int *a,int *b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}
int main(){
	int a,b;
	int *apA=&a;
	int *apB=&b;
	printf("Introduza o primeiro valor:");
	scanf("%d",&a);
	printf("Introduza o segundo valor:");
	scanf("%d",&b);
	trocar(&(*apA),&(*apB));
	printf("a : %d",a);
	printf("b : %d",b);
}

//Solução professor
#include <string.h>
#include <locale.h>
#include <stdlib.h>
void trocarEx4(int *v1, int *v2){
	int aux = *v1;
	*v1 = *v2;
	*v2 = aux;
}
int main(){
	int ex4 ,ex4_;
	int *ex4p= &ex4,*ex4p_ = &ex4_;
	scanf("%d %d",ex4p,ex4p_);
	printf("A->%d %d\n",*ex4p,*ex4p_);
	trocarEx4(ex4p,ex4p_);
	printf("D->%d %d\n",*ex4p,*ex4p_);
}
