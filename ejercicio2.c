#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n ingrese el numero de alementos para las dos listas \n");
	int tamanio,seleccion;
	scanf("%d",&tamanio);
	int list1[tamanio];
	int list2[tamanio];
	int aux1[tamanio];
	int aux2[tamanio];
	int *puntero1,*puntero2;
	//aqui lleno la primera lista
	
	for(int i=0; i<tamanio;i++){
		printf("lista1: ingrese dato para la posicion ");
		printf("%d",i+1);
		printf("\n");
		scanf("%d",&seleccion);
		list1[i]=seleccion;
		aux1[i]=seleccion;
		}
	
	for(int i=0; i<tamanio;i++){
		printf("lista 2: ingrese dato para la posicion ");
		printf("%d",i+1);
		printf("\n");
		scanf("%d",&seleccion);
		list2[i]=seleccion;
		aux2[i]=seleccion;
		
		}
		
		puntero1 = &aux1;
		puntero2 = &aux2;
		
	for(int i=0; i<tamanio;i++){
		list1[i]=*puntero2;
		list2[i]=*puntero1;
		puntero1++;
		puntero2++;
		}
	
	
	printf("lista A \n");
	for(int i=0; i<tamanio;i++){
		
		printf("%d" , list1[i]);
		printf("\t");
		}
		printf("\n");
		printf("lista B \n");
	for(int i=0; i<tamanio;i++){
		
		printf("%d" , list2[i]);
		printf("\t");
		}
	

	}

