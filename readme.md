# C-lator

es una herramienta que te permite hacer calculos desde tu terminal, con una estructura muy intuitiva para que siempre puedas hacer tus operaciones incluso si has tenido mas de 2 años sin usarla u esta haya sido modificada para hacerla mas compleja y mas extensa

## Instalacion Windows 

### facil instalacion

para instalar solo tienes que descargar el .exe que se encuentra en este url  [C-lator](https://pip.pypa.io/en/stable/) y añadirlo como una variante de entorno
_______________________________


### intalacion Fachera Fachosa

#### 1 Crear la carpeta para los repos


``` bash
mkdir githubrepos
```

Este comando creará una carpeta en tu disco C: para que localices tus repositorios clonados fácilmente.


#### 2. Accede a la carpeta
Ahora, usa el siguiente comando para entrar en el directorio que acabas de crear:

```Bash
cd githubrepos 
```

(Nota: Asegúrate de que el nombre de la carpeta sea el correcto; si el nombre es distinto, cámbialo en el comando para evitar errores).

#### 3. Clona el repositorio
Descarga el código fuente directamente desde GitHub:

```Bash
git clone https://github.com/Kdgrya/C-lator.git
```
#### 4. Compila y crea tu ejecutable
¡Es hora de darle vida! No tengas miedo, el proceso es muy sencillo. Escribe este comando en la misma terminal para compilar el código y generar tu .exe:

``` Bash
gcc -c main.c calculator.c calculator.h -o C-lator.exe
```
#### 5. ¡Listo para usar!
¡Ya lo tienes! Solo falta añadirlo como variable del sistema y estarás listo para disfrutar de una calculadora increíble, rápida y con mucho estilo directamente en tu terminal

_______________________________

## entendiendo un poco el codigo

### main.c

```c
#include <stdio.h>
#include "calculadora.h"

int main() 
{
 =================================================   
    /* se inicia declarando la variable privada que es para declarar que operacion el usuario deseaara hacer 
    luego esta el primer print*/ 
    {
    char operacion_deseada;
    printf("saludos \n");
    }
==================================================
    
    {
        /*
        en esta se ejecuta los printeos de inicio y de seleccion de opciones de operaciones
        
        luego se le asigna a la variable de operacion deseada  que se encuentra en nuestro header 

        y acontinuacion este procede a pasarlo a la funcion claculadora con el valor de lo que se especifico 

        una vez ya completada  retornara con la preguntra de si se desea continuar o no y una vez dicho que no procederra a cerrarse  

        */
{

    
    printf( "que operacion desea hacer\n" );
    printf(" + o 1: suma \n - o 2: resta  \n / o 3: division \n 4 o *: Multiplicacion\n");

    scanf(" %d", &operacion_deseada);

    calculadora(operacion_deseada);
}


```

### calculator.c

```c

#include <stdio.h>
#include "calculadora.h"

void calculadora(char val){
    {
    // se le asigna el cvalor al enum op con el valor recibido desde main
	operaciones op = val;

    // se crean variables sin declarar 
	int a;
	int b;

    // condicional si el valor recibido desde main es valido con los valores ya declarados en el enum si este no es correcto limpia y devuelve a main

	if (op != suma && op != resta && op != multiplicacion && op != division){
			Sleep(4);
			printf("operacion no valida volviendo al  inicio");
			system("cls");
			return main();
	}

// se piden los dos numeros que seran usados para hacer la operacion

	printf(" Digite el primer numero: ");
	scanf(" %d", &a);
	
	printf(" Digite el segundo numero: ");
	scanf(" %d", &b);


    }

    /*
       aqui solo se estaran asignando que hacer en cada caso cuando el enum sea suma resta mult o division 
    */
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

			


```

### calculator.h

```c

// evita que este se a;ada mas de una vez 
#pragma once

// usando una definicion enum para gestionar el switch 

typedef enum 
{
    suma = 1,
    resta ,
    division ,
    multiplicacion,
} operaciones ;


// nombrando el enum para ser usado en calculaddora.c
extern operaciones op;


 void calculadora(char val);
 int  main();

```

## Contributing

Las solicitudes de extracción (Pull Requests) son bienvenidas. Para cambios importantes, abre primero un asunto o (issue) para discutir lo que te gustaría cambiar.

Asegúrate de actualizar las pruebas (tests) según corresponda.

## License

[MIT](https://choosealicense.com/licenses/mit/)