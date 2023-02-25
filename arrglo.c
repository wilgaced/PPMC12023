/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Arreglos                                    */
/*  Fecha:     9/11/2022                                   */
/***********************************************************/

//Inclucion de archivos cabecera
#include <stdio.h>

//Declaracion de funcones prototipos
 void multiplica_matrix(int mA[][3], int mB[][3]);

int numbers[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

int matrixA[3][3]= {{1,2,3},
                   {4,5,6},
                   {7,8,9}};

int matrixB[3][3] = {0};
int matrixR[3][3] = {0};

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 20; i++)
    {
       printf("%d", numbers[i]);
    }
    printf("\n");
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            scanf("%d", &matrixB[i][j]);
       }
       
    }

    multiplica_matrix(matrixA, matrixB);

    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            printf("%d ", matrixB[i][j]);
       }
       printf("\n");
       
    }
    
    
    return 0;
}


void multiplica_matrix(int mA[][3], int mB[][3])
{
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      matrixR[i][j] = mA[i][j] * mB[i][j];

   }

   for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            printf("%d ", matrixR[i][j]);
       }
       printf("\n");
       
    }
    
}