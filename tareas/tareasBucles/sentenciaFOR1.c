#include <stdio.h>

int main(void)
{
	int N = 0; //variable donde se guardará el numero entero

	printf("Ingrese un numero entero: ");
	scanf("%d",&N); //se guarda el numero ingresado por el usuario

	for(int i=1;i<=N;i++) //bucle for donde una variable i va de 1 a N
	{
		printf("%d ",i); //se imprime el valor de i en cada iteración
	}

	printf("\n"); //salto de linea
	return 0;
}
