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
