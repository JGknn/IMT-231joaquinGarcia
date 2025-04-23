#include <stdio.h>

int main(void)
{
	int N = 0; //se crea la variable donde se guardara el valor ingresado por el usuario

	printf("ingrese un numero N: ");
	scanf("%d",&N); //se captura el valor ingresado

	int i = 1; //variable de control para el bucle while
	int acumulador = 0; //variable de acumulacion para la suma
	while(i<=N) //bucle while que va de 1 a N
	{
		printf("%d ",i); //se muestran los valores que se sumaran
		acumulador = acumulador + i; //se realiza la suma de la variable acumulador que inicia en 0 y la variable i que inicia en 1
		i++; 
	}

	printf("\nSumatoria: %d\n",acumulador); //se muestra el valor de la sumatoria total
	return 0;
}
