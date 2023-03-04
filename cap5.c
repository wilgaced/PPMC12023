/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Programacion modular                        */
/*  Fecha:     9/11/2022                                   */
/***********************************************************/

/*4. Almacene los elementos de una matriz n3m (10310 como máximo) y posteriormente
almacene toda la matriz en un vector. Imprimir el vector resultante.*/

// Inclucion de archivos cabecera
#include <stdio.h>
#include <stdlib.h>

enum
{
    entero,
    caracter,
    flotante,
};

/*Variables globales*/
float array[18] = {0.25,0.245,1.25,25.3,8.4,3.33};
void *ptr;

/*Prototipo de funcion*/
int printarray(int type,  void *pointer, int size);

int main(int argc, char const *argv[])
{
    int sizeArray = sizeof(array) / sizeof(array[0]);
    ptr = &array[0];
    printarray(flotante, ptr, sizeArray);
    return 0;
}

int printarray(int type,  void *pointer, int size)
{
    switch (type)
    {
    case caracter:
        for (int i = 0; i < size; i++)
        {
            printf("%c", *(char *)pointer++);
        }
        break;
    case entero:
        for (int i = 0; i < size; i++)
        {
            printf("%d", *(int *)pointer++);
        }
        break;
    case flotante:
        for (int i = 0; i < size; i++)
        {
            printf("%f\n", *(float *)pointer++);
        }
        break;

    default:
        break;
    }
}