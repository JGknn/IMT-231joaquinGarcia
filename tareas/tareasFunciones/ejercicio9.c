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

		if(contardig(ingreso) == 1)
		{
			break;
		}

		printf("el numero invertido es %d\n",invertirnum(ingreso));
	}
}
