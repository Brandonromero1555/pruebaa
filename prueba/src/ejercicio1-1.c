/*
 ============================================================================
 Name        : ejercicio1-1.c
 Author      : brandon romero
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	//fflush(stdin);


		int numeroUno;
		int numeroDos;
		int suma;


		printf("\nIgrese el numero uno: \n");
		scanf("%d",&numeroUno);
		printf("\nIgrese el numero dos: \n");
		scanf("%d",&numeroDos);

		suma = numeroUno + numeroDos;

		printf("\nLa suma del numero es %d", suma);

	return 0;
}
