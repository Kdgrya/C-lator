#pragma once

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


 void calculadora(char val );
 int  main();
 //change();

