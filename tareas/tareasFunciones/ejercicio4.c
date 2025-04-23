#include <stdio.h>
#include "funciones.h"

int main(void)
{
	int ingreso;
	int a=0;

	while(3)
	{
		printf("ingrese un numero entero positivo, por favor: "); //se pide al usuario ingresar un numero
		scanf("%d",&ingreso); //se captura el numero ingresado

		if(ingreso<0)
		{
			break;
		}

		a += ingreso;
	}
	printf("suma total acumulado: %d\n",a);
	return 0;
}
