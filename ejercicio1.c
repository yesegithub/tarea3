#include <stdio.h>
#include <stdlib.h>
//VM15028 Jose Alvaro Vasquez Marroquin
int main() {
	int numero1,numero2;
	printf("ingrese el primer numero \n");
	scanf("%d",&numero1);
	printf("ingrese el segundo numero \n");
	scanf("%d",&numero2);
	
	
	numeros(&numero1,&numero2);
	
	return 0;
	
	
	}
	void numeros(int *p_numero1,int *p_numero2){
		
		int *suma= *p_numero1+*p_numero2;
		int *resta= *p_numero1-*p_numero2;
		
		printf("SUMA \n");
		printf("%d", suma);
		printf("\t");
		printf("%p", suma);
		printf("\n");
		printf("RESTA \n");
		printf("%d", resta);
		printf("\t");
		printf("%p", resta);
		printf("\n");
		
		}
