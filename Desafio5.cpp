//sem apontadores
/*#include <string.h>
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
}*/

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
