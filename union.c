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
#include <stdint.h>

union {
   uint8_t array[16];
   double bigNum;
} myUnion;

hex[8] = {0xEF,0xBF,0xBD,0xEF,0xBF,0xBD,0x6D,0x54,0xEF,0xBF,0xBD,0x69,0x40};

int main(int argc, char const *argv[])
{
    myUnion.bigNum = 212.2545658;
    
    for (int i = 0; i < 16; i++)
    {
       myUnion.array[i] = hex[i];
    }
    printf("%lf\n", myUnion.bigNum);
    
    return 0;
}
