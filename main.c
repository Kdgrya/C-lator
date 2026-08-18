#include <stdio>

int main<void> 
{
    if  (calaculadora() == -1){
        printf("error al inicializar calculadora\n");
        return -1;
    }
    
    char operacion;	
    printf( que operacion desea hacer hoy );
	scanf(%d, &operacion);

    calculadora(operacion);
    return 0

}