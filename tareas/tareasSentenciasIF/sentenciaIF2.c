#include <stdio.h>

int main(void)
{
	int numA = 0;

	printf("ingrese el numero entero: "); // se pide que ingrese el numero entero
	scanf("%d", &numA);

	if(numA > 0)
	{
		printf("el numero es positivo (+)\n"); //se verifica si es positivo
	}
	else if(numA == 0)
	{
		printf("el numero es cero\n"); //se verifica si es cero
	}
	else
	{
		printf("el numero es negativo (-)\n"); //se verifica si es negativo
	}

	return 0;
}
