#include <stdio.h>
#include <stdlib.h>

int main(){
		system("color 1f");
    	system("title Intercambio de dos array ");

	printf("\n Ingrese el tamaño del vector \n");
	int tamano,seleccion,i;
	scanf("%d",&tamano);
	int vector1[tamano],vector2[tamano];
	int aux1[tamano],aux2[tamano];
	int *puntero1,*puntero2;

	
	//llenado del vector A
	for( i=0; i<tamano;i++){
		printf("Vector 1: ingrese dato para la posicion ");
		printf("%d",i+1);
		printf("\n");
		scanf("%d",&seleccion);
		vector1[i]=seleccion;
		aux1[i]=seleccion;
		}
	//llenado del vector B
	for( i=0; i<tamano;i++){
		printf("Vector 2: ingrese dato para la posicion ");
		printf("%d",i+1);
		printf("\n");
		scanf("%d",&seleccion);
		vector2[i]=seleccion;
		aux2[i]=seleccion;
		
		}
	//dando valores a punteros	
		puntero1 = &aux1;
		puntero2 = &aux2;
	
	//for pata punteros	
	for( i=0; i<tamano;i++){
		vector1[i]=*puntero2;
		vector2[i]=*puntero1;
		puntero1++;
		puntero2++;
		}
	
	//imprimiendo vectores intercanviados
	printf("Vector A \n");
	for( i=0; i<tamano;i++){
		
		printf("%d" , vector1[i]);
		printf("\t");
		}
		printf("\n");
		printf("Vector B \n");
	for(i=0; i<tamano;i++){
		
		printf("%d" , vector2[i]);
		printf("\t");
		}
		
	return 0;

	}

