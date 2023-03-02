/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Modular                                     */
/*  Fecha:     1/03/2023                                   */
/***********************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ALMACEN_H
#define __ALMACEN_H

typedef struct
{
    int items;                      /* number of items*/
    char description[20];           /* description*/
    int cantidad;                   /* cantidad de producto */
    int precioCompras;              /* precio al que se compro el producto */
    int precioVentas;               /* precio al que se vende el producto */
    char fechaCompras[20];          /* fecha en que se compro el producto */
    char fechaVencimiento[20];      /* fecha en que se*/
}producto;                          /* Estructura de tipo producto */

int menu_almacen(int privelege);



#endif /* __ALMACEN_H */