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
    /* se inicia declarando la variable privada que es para declarar si se sigue ejecutando o se cierra 
    luego esta el primer print*/ 
    {
    int opcion;
    printf("saludos \n");
    }
==================================================
    
    {
        /*luego continuamos declarando un loop do el cual me estara ejecutando el codigo hasta que la variable de ejecucion (opcion) sea 0

        en esta se ejecuta los printeos de inicio y de seleccion de opciones de operaciones
        
        luego se le asigna a la variable de operacion deseada  que se encuentra en nuestro header 

        y acontinuacion este procede a pasarlo a la funcion claculadora con el valor de lo que se especifico 

        una vez ya completada  retornara con la preguntra de si se desea continuar o no y una vez dicho que no procederra a cerrarse  

        */
    do 
    {
        printf( "que operacion desea hacer\n" );
        printf(" suma \n resta  \n division \n 4: Multiplicacion\n");

        scanf("%d", &operacion_deseada);

        calculadora(operacion_deseada);

        printf( "para salir escriba el 0 \n de lo contrario escriba cualquier otro numero " );
        scanf("%d",&opcion);

    } while (opcion == 0);

    exit();

    }

}

```

### calculator.c

```c

#include <stdio.h>
#include "calculadora.h"

void calculadora(char val){
    {
    // se le asigna el valor al enum con el parametro pasado 
	op = val;

    // se invoka y se asigna un nombre a la estructura type def el cual contendra los valores que necesitaremos guardar para las operaciones 

	numeros n;
    }

    /*
       aqui solo se estaran asignando que hacer en cada caso cuando el enum sea suma resta mult o division 
    */
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

			


```

### calculator.h

```c

// evita que este se a;ada mas de una vez 
#pragma once


// variable global que se usara para pasar los parametros deseados para realizar las diferentes operaciones
char operacion_deseada;


enum operaciones
{
    suma,
    resta,
    division,
    multiplicacion,
    exit,
} op;

typedef struct num
{
    int a;
    int b;
    int r;
    int endl;
}numeros;

enum operaciones op;

// llmando las diferentes funciones para que se puedan invocar en cualquier parte  del proyecto sin tener que estar llamando al archivo directamente 

 void calculadora(char val );
 int  main();
 //change();

 


```

## Contributing

Las solicitudes de extracción (Pull Requests) son bienvenidas. Para cambios importantes, abre primero un asunto o (issue) para discutir lo que te gustaría cambiar.

Asegúrate de actualizar las pruebas (tests) según corresponda.

## License

[MIT](https://choosealicense.com/licenses/mit/)