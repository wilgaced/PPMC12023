/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Modular                                     */
/*  Fecha:     1/03/2023                                   */
/***********************************************************/


#include <almacen.h>

int menu_almacen(int privelege)
{
    printf("ingreso al menu de almacen\n: %d", privelege);
    if (privelege == 0)
        printf("Como administradorn\n");
}