/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Modular                                     */
/*  Fecha:     1/03/2023                                   */
/***********************************************************/


#include <ventas.h>

int menu_ventas(int privelege)
{
    printf("ingreso al menu de ventas\n: %d", privelege);
    if (privelege == 0)
        printf("Como administrador\n");
}