#include <stdio.h>
#include "funciones.h"

int main(void)
{
	int a, b, sel;

	while(3)
	{
		printf("Ingrese el numero 1: ");
		scanf("%d",&a);
		printf("Ingrese el numero 2: ");
		scanf("%d",&b);
		printf("1. Sumar dos numeros\n2. Restar dos números\n3. Multiplicar dos números\n4. Salir\n");
		scanf("%d",&sel);

		switch(sel)
		{
			case 1:
				printf("La suma es %d\n", sumar(a,b));
				break;
			case 2:
				printf("La resta es %d\n", restar(a,b));
				break;
			case 3:
				printf("La multiplicación es %d\n", multiplicar(a,b));
				break;
			case 4:
				return 0;
		}
	}
	return 0;
}
