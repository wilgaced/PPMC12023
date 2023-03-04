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

#define Equivalencia_gal  0.264589 // Equivalencia de litro a galon

/*Variables globales*/
float kilometros = 0.0;
float litros = 0.0;

float kilometrosPorGalorn = 0.0;


/*protipo de funcion*/
float calula_galones_por_kilometros_recorido(float kilometers, float liters);

    int main(int argc, char const *argv[])
{
    char opcion = 0;
    do
    {
        printf("Bienbenido a la calculadora de kilometros por galon\n");
        printf("Introducca los kilometros recoridos");
        scanf("%f", &kilometros);
        printf("Introducca los litros consumidos");
        scanf("%f", &litros);
        kilometrosPorGalorn = calula_galones_por_kilometros_recorido(kilometros, litros);
        printf("el vehiculo recorre %f galones por kilometros\n", kilometrosPorGalorn);
        printf("par salir precione x");
        scanf("%c", &opcion);
    } while (opcion = 'x');
}

float calula_galones_por_kilometros_recorido(float kilometers, float liters)
{
    float galones = liters * Equivalencia_gal;
    return kilometers / galones;
}