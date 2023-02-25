/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Arreglos                                    */
/*  Fecha:     9/11/2022                                   */
/***********************************************************/


#include <stdio.h>

int numbers[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

int matrix[3][3]= {{1,2,3},
                   {4,5,6},
                   {7,8,9}};

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
            printf("%d ", matrix[i][j]);
       }
       printf("\n");
       
    }
    
    
    return 0;
}


