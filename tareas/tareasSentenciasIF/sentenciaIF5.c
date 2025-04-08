#include <stdio.h>

int main(void)
{
	int numA = 0;

	printf("ingrese un numero: "); //se pide el ingreso del numero
	scanf("%d", &numA);

	if(numA % 2 == 0)  // si el cociente del numero dividido entre 2 es 0, entonces es par
	{
		printf("Par\n");
	}
	else
	{
		printf("Impar\n"); // si es el cociente del numero dividido entre 2 no es 0, entonces es impar
	}

	return 0;
}
