#include <stdio.h>
#include <stdlib.h>

int main(){
		system("color 1f");
    	system("title Reversa de Array");
    	
    //variables 
    	
		int tamano;
		printf("ingrese tamaño del vector \n");
		scanf("%d",&tamano);
		int vector[tamano];
		int vectoraux[tamano];
		int i,valor;
		int *puntero;
	
	//for para llenar vector
	
	for(i=0;i<tamano;i++){
		printf("Ingrese la pocicion %d",i+1);
		printf(" del vector \n");
		scanf("%d",&valor);
		vector[i]=valor;
		vectoraux[i]=valor;
		
		}
	puntero = &vectoraux;
	
	//Vector llenando al reves
	
	for(i=tamano-1;i>=0;i--){
		vector[i]=*puntero;
		puntero++;
		}
		
	//imprimiendo vector al reves
	
		printf("\n vector al reves \n");
	for(i=0;i<tamano;i++){
		printf("%d",vector[i]);
		printf("\n");
		
	
		
		}
	return 0;
	}
