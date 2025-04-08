#include <stdio.h>

int main(void)
{
	int numA = 0;

	printf("ingrese el año: "); //se pide el ingreso del año
	scanf("%d", &numA);

	if( ((numA%4) == 0) && ((numA%100 != 0) || (numA%100 != 0)) )	//primero se verifica si el cociente del numero divido por 100 o 400, no es equivalente a 0 
	{								//despues se verifica si aparte de la anterior condicion, el cociente del numero divido por 4 es 0
		printf("el año es bisiesto\n"); //en caso que se cumpla todo, es bisiesto, en caso que no, pues no
	}
	else
	{
		printf("el año no es bisiesto\n");
	}

	return 0;
}
