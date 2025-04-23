#include <stdio.h>
#include "funciones.h"

int main(void)
{
	int a=0;
	int ingreso;

	while(3)
	{
		printf("ingrese un numero entero positivo, por favor: ");
		scanf("%d",&ingreso);
		
		if(ingreso<=0)
		{
			break;
		}
		printf("el factorial es: %d\n",factorial(ingreso));
	}
}
