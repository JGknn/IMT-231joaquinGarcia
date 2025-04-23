#include <stdio.h>
#include "funciones.h"

int main(void)
{
	int ingreso;

	while(3)
	{
		printf("ingrese un numero entero, por favor: "); //se pide al usuario ingresar un numero
		scanf("%d",&ingreso); //se captura el numero ingresado

		if(ingreso == -1) //se verifica si el numero ingresado es -1, en caso de serlo, se sale del ciclo y el programa termina
		{
			break;
		}
		else
		{
			printf("%c\n",verifparimpar(ingreso)); //en caso contrario, se imprime la verificacion del numero en este caso la devolucion de 'p' o 'i'
		}
	}
}
