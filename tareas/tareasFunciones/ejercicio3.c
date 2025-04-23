#include <stdio.h>
#include "funciones.h"

int main(void)
{
	semaforo color = ROJO;
	int c = 0;

	while(c<10)
	{
		switch(color)
		{
			case ROJO:
				printf("ROJO\n");
				color = VERDE;
				break;
			case VERDE:
				printf("VERDE\n");
				color = AMARILLO;
				break;
			case AMARILLO:
				printf("AMARILLO\n");
				color = ROJO;
				c++;
				break;
		}
	}

	printf("ciclo completado\n");
	return 0;
}
