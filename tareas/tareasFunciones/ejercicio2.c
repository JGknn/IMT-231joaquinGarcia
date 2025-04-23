#include <stdio.h>
#include "funciones.h"

int main(void)
{
	int ingreso;

	while(3)
	{
		printf("ingrese un numero entero positivo, por favor: "); //se pide al usuario ingresar un numero
		scanf("%d",&ingreso); //se captura el numero ingresado

		if(ingreso == 0) //se verifica si el numero ingresado es 0, en caso de serlo, se sale del ciclo y el programa termina
		{
			break;
		}
		else
		{
			printf("%d\n",verifdigitos(ingreso)); //en caso contrario, se imprime la verificacion de los digitos del numero
		}
	}
}
