#include <stdio.h>
#include "funciones.h"

#define     MENU  "\nMenú\n1. Verificar si un número es primo\n2. Calcular el factorial de un número\n3. Contar números pares e impares entre 1 y N\n4. Mostrar múltiplos de 3 entre 1 y N.\n5. Salir del programa.\nSeleccione una opción\n\n" //macros para menu

int main(void)
{
	while(30)
	{
		printf(MENU);
		int ingreso;
		int a;
		scanf("%d",&ingreso);

		switch(ingreso)
		{
			case 1:
				printf("ingrese numero entero positivo: ");
				scanf("%d",&a);
				if(a>=0) //condicion para validar si el numero es entero positivo >0, se repite en cada caso
				{
					if(esPrimo(a)>2) //la funcion devuelve el numero de numeros que dividen a la entrada, si es mayor a 2 entonces no es primo
					{
						printf("el numero %d no es primo\n",a);
						break;
					}
					else
					{
						printf("el numero %d es primo\n",a);
						break;
					}
				}
				else
				{
					printf("ingrese un numero entero positivo\n");
					break;
				}
			case 2:
				printf("ingrese numero entero positivo: ");
				scanf("%d",&a);
				if(a>=0)
				{
					printf("el factorial del numero %d es: %d\n",a,factorial(a));
					break;
				}
				else
				{
					printf("ingrese un numero entero positivo\n");
					break;
				}
			case 3: //el numero de pares, lo calcula la funcion al dividir a la entrada, el numero de impares es la entrada a menos el numero de pares
				printf("ingrese numero entero positivo: ");
				scanf("%d",&a);
				if(a>=0)
				{
					printf("el numero de numeros pares es %d y de impares es %d\n",contarDigitos(a),a-contarDigitos(a));
					break;
				}
				else
				{
					printf("ingrese un numero entero positivo\n");
					break;
				}
			case 4:
				printf("ingrese numero entero positivo: "); // se tiene una logica similar a la anterior
				scanf("%d",&a);
				
				if(a>=0)
				{
					int i=0;
					int c=0;
					while(i<=a)
					{
						if((a%3)==0) //si el cociente de la division de la entrada entre 3 es 0, entonces es multiplo de tres
						{
							c++;	//esto aumenta un contador
							a /= 3; //muta la variable de entrada a, en su division entre tres
						}
						i++;
					}
					printf("el numero de multiplos de 3 es de %d\n",c);
					break;
				}
				else
				{
					printf("ingrese un numero entero positivo\n");
					break;
				}
			case 5:
				printf("Usted ha salido del programa.\n");
				return 0; //acaba el programa
		}
	}
	return 0;
}
