#include<stdio.h>
#include<stdlib.h>

int main () {

int suma=0;
int resta=0;
int opcion=1;
int numero1=0;
int *p_numero1=&numero1;
int numero2=0;
int *p_numero2=&numero2;

while (opcion==1 || opcion==2 || opcion==3 || opcion==4){
	printf ("escoja una opcion.\n");
	printf ("\n");
		printf ("1-Ingresar los dos valores.\n");
		printf ("2-Calcular suma de los valores.\n");
		printf ("3-Calcular la resta de los datos.\n");
		printf ("4-Imprimir la direccion de memoria de cada variable.\n");
		printf ("5-Salir del programa.\n");
		scanf ("%d",&opcion);
		printf ("\n");
	
	switch (opcion){
	
		case 1:
		printf ("Ingrese el primer numero.\n");
		scanf("%d",&numero1);
		printf ("Ingrese el segundo numero.\n");
		scanf("%d",&numero2);
		break;
		
		case 2:
			suma = *p_numero1 + *p_numero2;
			printf("%d",suma);
			printf ("\n");
			break;
		
		case 3:
			resta = *p_numero1 - *p_numero2;
			printf("%d",resta);
			printf ("\n");
			break;
			
		case 4:
			printf ("La direccion del primer valor:\n %p",&numero1);
			printf ("\n");
			printf ("La direccion del segundo valor:\n %p",&numero2);
			printf ("\n");
			break;
	}
	
}


}

