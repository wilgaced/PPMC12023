/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Arreglos                                    */
/*  Fecha:     9/11/2022                                   */
/***********************************************************/


#include <stdio.h>
#include "matrix.h"

int matrix_multiply(int matrixA[][3], int matrixB[][3])
{
      int matrixR[3][3] ={0};

     for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            matrixR[i][j] = matrixA[i][j] * matrixB[i][j];
            printf("%d  ", matrixR[i][j]);
       }
       printf("\n");
       
    }
}
   
    
    

