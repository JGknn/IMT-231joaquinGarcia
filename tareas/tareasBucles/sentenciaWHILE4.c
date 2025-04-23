#include <stdio.h>

int main(void)
{
	int N = 0; //variable que guardara el numero ingresado por el usuario, rango de -2147483648 a 2147483647

	printf("ingrese un numero: ");
	scanf("%d",&N); //se almacena el numero ingresado

	int i = 0; //variable contadora de digitos
	if(N==0) //primera condicion, si el numero es igual a 0, entonces solo tiene un digito
	{
		i = 1;
	}
	else //en caso de no ser 0
	{
		while(N!=0) //mientras N no sea 0
		{
			N/=10; // N actualiza su valor a N/10, el resultado sera un entero sin decimales
			i++; //se aumenta el valor del contador 
		}
	}

	printf("El numero ingresado tiene %d digitos\n", i); //se indica el numero de digitos, como el valor del contador i
	return 0;
}
