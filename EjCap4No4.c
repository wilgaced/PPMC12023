/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Arreglos                                    */
/*  Fecha:     9/11/2022                                   */
/***********************************************************/

/*4. Almacene los elementos de una matriz n3m (10310 como máximo) y posteriormente 
almacene toda la matriz en un vector. Imprimir el vector resultante.*/

//Inclucion de archivos cabecera
#include <stdio.h>
#include <stdlib.h>


//define
#define n 10
#define m 10

//prototipos de funciones
 void rellenarMatrix();

//Declaraciond de la matriz
int matriz[n][m];
int vector[ n * m];
int p = 0;


//programa

int main(int argc, char const *argv[])
{
    srand((unsigned) 10);
    rellenarMatrix();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
           vector[p] = matriz[i][j];
           p++;
        }
        
    }
    
    return 0;
}


void rellenarMatrix(void)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
           matriz[i][j] = rand() % 50;
        }
        
    }
}