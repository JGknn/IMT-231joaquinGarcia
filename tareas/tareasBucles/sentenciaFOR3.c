#include <stdio.h>

int main(void)
{
	int N = 0; //se crea la variable para que guardar el numero ingresado por el usuario

	printf("ingrese un numero: ");
	scanf("%d",&N); //se guarda el numero ingresado

	for(int i=1;i<=10;i++) //bucle for con variable de control i, que va del 1 al 10
	{
		printf("%d x %d = %d\n", N, i, (N*i)); //se imprime el numero N, el numero de iteración i, y el resultado de la multiplicacion
	}

	return 0;
}
