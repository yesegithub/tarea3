#include <stdio.h>
#include <stdlib.h>

int main(){
	int dimencion;
	printf("ingrese tamaño del vector \n");
	scanf("%d",&dimencion);
	int vector[dimencion];
	int aux[dimencion];
	int inicio,numero;
	int *puntero;
	for(inicio=0;inicio<dimencion;inicio++){
		printf("ingrese valor de la posicion ");
		printf("%d",inicio+1);
		printf("\n");
		scanf("%d",&numero);
		vector[inicio]=numero;
		aux[inicio]=numero;
		
		}
	puntero = &aux;
	
	for(inicio=dimencion-1;inicio>=0;inicio--){
		vector[inicio]=*puntero;
		puntero++;
		}
		printf("\n lista al reves \n");
	for(inicio=0;inicio<dimencion;inicio++){
		
		printf("%d",vector[inicio]);
		printf("\n");
		
	
		
		}
	return 0;
	}
