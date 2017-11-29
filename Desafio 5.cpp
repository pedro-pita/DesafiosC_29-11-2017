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
