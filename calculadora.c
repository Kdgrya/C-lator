#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"
#include <windows.h>

int cont(){
	char response;

	printf(" Desea continuar");
	scanf(" %c", &response);
	

	switch (response)
	{
	case 'y':
		printf("limpiando ... \n");
		Sleep(4);
		system("cls");
		return main(); 
		break;
	
	case 'n':
		
		Sleep(10);
		printf(" saliendo de la applicacion en 4 segundos \n");
		system("cls");
		exit(0);
		break;
	}
}

void calculadora(char val){

	operaciones op = val;

	int a;
	int b;

	if (op != suma && op != resta && op != multiplicacion && op != division){
			Sleep(4);
			printf("operacion no valida volviendo al  inicio");
			system("cls");
			main();
	}


	printf(" Digite el primer numero: ");
	scanf(" %d", &a);
	
	printf(" Digite el segundo numero: ");
	scanf(" %d", &b);


	switch(op){

		case suma:
			printf("=====================================\n");

			printf(" %d \n ", a + b );

			printf("===================================== \n");

			Sleep(2);

			cont();
		break;

		case resta:
			printf("=====================================\n");
		
			printf(" %d \n", a - b );

			printf("=====================================\n");

			Sleep(2);

			cont();
		break;

		case multiplicacion: 
		
			printf("=====================================\n");

			printf(" %d \n", a * b );

			printf("=====================================\n");

			Sleep(2);

			cont();

		break;

		case division:

			if (b !=0)
			{
				printf("=====================================\n");
				
				printf(" %d \n", a / b );

				printf("=====================================\n");

				Sleep(2);
				
				cont();

			}
			
			else{
				printf(" no es posible dividir entre 0 \n");
				calculadora(op);
			}
			
		break;

		
	}

	
}
