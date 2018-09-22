#include <stdio.h>
#include <stdlib.h>
int main(){
	int tamanio;
	printf("ingrese tamaño de la lista \n");
	scanf("%d",&tamanio);
	int lista[tamanio];
	int aux[tamanio];
	int i,valor;
	int *puntero;
	for(i=0;i<tamanio;i++){
		printf("ingrese valor de la posicion ");
		printf("%d",i+1);
		printf("\n");
		scanf("%d",&valor);
		lista[i]=valor;
		aux[i]=valor;
		
		}
	puntero = &aux;
	
	for(i=tamanio-1;i>=0;i--){
		lista[i]=*puntero;
		puntero++;
		}
		printf("\n lista al reves \n");
	for(i=0;i<tamanio;i++){
		
		printf("%d",lista[i]);
		printf("\n");
		
	
		
		}
	return 0;
	}
