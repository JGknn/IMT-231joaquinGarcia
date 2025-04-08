#include <stdio.h>

int main(void)
{
	int numA = 0;

	printf("ingrese la edad: "); //se pide el ingreso de la edad
	scanf("%d", &numA);

	if(numA >= 18)
	{
		printf("Adultez\n"); //se verifica si es mayor o igual a 18
	}
	else if(numA < 13)
	{
		printf("Infancia\n"); //se verifica si es menor a 13
	}
	else
	{
		printf("Adolescencia\n"); //si no cumple con ninguna de las dos, se encuentra en la adolescencia
	}

	return 0;
}
