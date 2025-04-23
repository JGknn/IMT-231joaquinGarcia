#include <stdio.h>

int main(void)
{
	char palabra[100];  //se crea un vector para caracteres de un tamaño de 100
	printf("ingrese una palabra: ");
	scanf("%s",palabra); //se almacena el texto introducido por el usuario, el vector adopta el tamaño de la palabra ingresada

	int i = 0; //se utilizan dos contadores, llamados i y c
	int c = 0;
	while(palabra[i] != '\0') //para determinar el tamaño, se hace la iteración de manera que cada caracter de la cadena no sea el caracter de finalización '\0'
	{
		i++; //mientras esto se cumpla, cada contador aumenta en 1
		c += 1;
	}

	char guarda;
	for(int j=0;j<(c/2);j++) //se utiliza el bucle for con la variable de control j que va de 0 a c/2, es decir, la mitad del tamaño de la cadena 
	{
		guarda=palabra[j];  //se guarda el primer caracter de la cadena en la variable char guarda, ej. hola -> guarda=h
		palabra[j]=palabra[i-1]; //se asigna al primer caracter el valor del ultimo caracter de la cadena ej. hola -> aola
		palabra[i-1]=guarda; //se asigna al ultimo caracter el valor guardado en la variable guarda ej. aola -> aolh
		i--; //se disminuye la variable i, que hace de control
	}
	//se realiza la misma logica en la segunda iteración donde se intercambia los caracteres que faltan ej. aolh -> aloh

	printf("%s\n",palabra); //se imprime la palabra invertida
	return 0;
}
