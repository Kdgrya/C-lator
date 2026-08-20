#include <stdio.h>
#include "calculadora.h"

int main() 
{
    char opcion;
    printf("saludos \n");

    do
    {
        printf( "que operacion desea hacer hoy \n" );
        printf("1: volver al inicio \n 2: hacer otra operacion \n 3: cambiar la operaccion \n 4: salir de la calculadora \n");

        scanf("%d", &operacion_deseada);

        calculadora(operacion_deseada);

        printf( "para salir escriba el 0 \n de lo contrario escriba cualquier otro numero " );
        scanf("%d",&opcion);

    } while (opcion == 0);

}
