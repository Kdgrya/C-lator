#include <stdio.h>
#include "calculadora.h"

int main() 
{
    int opcion;
    printf("saludos \n");

    char operacion_deseada;
    printf( "que operacion desea hacer\n" );
    printf(" 1: suma \n 2: resta  \n 3: division \n 4: Multiplicacion\n");

    scanf(" %d", &operacion_deseada);

    calculadora(operacion_deseada);
}
