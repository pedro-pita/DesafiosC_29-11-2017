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
