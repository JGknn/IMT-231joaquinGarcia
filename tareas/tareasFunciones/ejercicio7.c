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

		if(ingreso==-1)
		{
			break;
		}
		a += multiplo3(ingreso);
	}
	printf("numero total de multiplos de 3: %d\n",a);
	return 0;
}
