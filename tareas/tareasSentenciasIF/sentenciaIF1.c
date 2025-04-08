#include <stdio.h>

int main(void)
{
	int numA = 0;
	int numB = 0;

//se piden los numeros a y b
	printf("ingrese el numero a: ");
	scanf("%d", &numA);
	printf("ingrese el numero b: ");
	scanf("%d", &numB);


//se compara si a es mayor
	if(numA > numB)
	{
		printf("el numero mayor es %d\n", numA);
	}
	else if(numA == numB) //se revisa si son iguales
	{
		printf("son iguales\n");
	}
	else //si ninguna de las dos es valida solo queda que a sea menor
	{
		printf("el numero mayor es %d\n",numB);
	}

	return 0;
}

