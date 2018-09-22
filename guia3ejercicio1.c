#include <stdio.h>
#include <stdlib.h>

int main() {
		system("color 1f");
    	system("title Ejercicio 1 suma, resta");
    	
	//variables
	
	int num1,num2;
	
	//Menu para pedir numeros a operar
	
	printf("Ingrese el primer numero a operar \n\t");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero a operar \n\t");
	scanf("%d",&num2);
	
	//llama a la funcion operacion
	
	operacion(&num1,&num2);
	
	return 0;
	
	
	}
	
	//Inicio de funcion de suma y resta
	
	void operacion(int *p_num1,int *p_num2){
		
		int *suma= *p_num1+*p_num2;
		int *resta= *p_num1-*p_num2;
		
		printf("\nSUMA \n\n");
		printf("Resultado:\t%d", suma);
		printf("\n");
		printf("Direccion:\t%p", suma);
		printf("\n");
		printf("\nRESTA \n\n");
		printf("Resultado:\t%d", resta);
		printf("\n");
		printf("Direccion:\t%p", resta);
		printf("\n");
		
		}
