#include <stdio.h>
#include "calculadora.h"

int main() 
{
    int opcion;
    printf("saludos \n");

    char operacion_deseada;
    printf( "que operacion desea hacer\n" );
    printf(" + o 1: suma \n - o 2: resta  \n / o 3: division \n 4 o *: Multiplicacion\n");

    scanf(" %d", &operacion_deseada);

    calculadora(operacion_deseada);
}
