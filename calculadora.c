#include <stdio.h>
#include "calculadora.h"

void calculadora(char val){

	op = val;
	numeros n;

	switch(op){

		default:
			printf("operacion no valida volviendo al  inicio");
			main();

		case suma:
			n.r = n.a + n.b;
			printf("%d",n.r, "\n");
			break;

		case resta:
			n.r = n.a - n.b;
			printf("%d",n.r, "\n");
			break;

		case multiplicacion: 
			n.r = n.a * n.b;
			printf("%d",n.r, "\n");
			break;

		case division:
			if (n.b !=0)
			{
				n.r = n.a / n.b;
				printf("%d",n.r, "\n");
			}
			
			else{
				printf(" no es posible dividir entre 0");
			}
			
			break;

		
	}

}

			
