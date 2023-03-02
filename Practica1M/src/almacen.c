/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Modular                                     */
/*  Fecha:     1/03/2023                                   */
/***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <almacen.h>


producto productos[100];
int index_product;

//Prototipo de funciones
static int menu_crear_producto(int privelege);
static int menu_eliminar_producto(int previlage);
static int menu_visulizar_producto(int previlage);

int menu_almacen(int previlage)
{
    int opcion = 0;
    printf("ingreso al menu de almacen\n: %d", previlage);
    if (previlage == 0)
        printf("Como administradorn\n");
    
    system("cls");
            printf("Elija el modulo que desea accesar\n");
            printf("para alamacen precione el.. 1\n");
            printf("para compras precione el... 2\n");
            printf("para ventas precione el.... 3\n");
            scanf("%d", &opcion);
            switch (opcion)
            {
            case 1:
                menu_crear_producto(previlage);
                break;
            case 2:
                menu_eliminar_producto(previlage);
                break;
            case 3:
                menu_visulizar_producto(previlage);
                break;

            default:
                printf("Opcion no valida");
                break;
            }
}

static int menu_crear_producto(privilegio)
{
    FILE * fp;
    system("cls");
    printf("Menu crear producto\n");
    printf("---------------------------------------------\n");
    printf("Introduce la descripción del producto\n");
    scanf("%s", &productos[index_product].description);
    printf("Introduce la descripción del producto\n");
    scanf("%d", &productos[index_product].cantidad);
    printf("Introduce la descripción del producto\n");
    scanf("%d", &productos[index_product].precioCompras);
    printf("Introduce la descripción del producto\n");
    scanf("%d", &productos[index_product].precioVentas);
    printf("Introduce la descripción del producto\n");
    scanf("%s", &productos[index_product].fechaCompras);
    printf("Introduce la descripción del producto\n");
    scanf("%s", &productos[index_product].fechaVencimiento);

   fp = fopen ("file.txt", "w+");
   fprintf(fp, "%s %s %s %d", "We", "are", "in", 2012);
   
   fclose(fp);
   
   return(0);
}

void crea_fich(struct producto *productos)
{
   FILE *f;
   size_t nwritten;

   f = fopen("futilis.dat","wb");

   if (f == NULL)
   {
      fprintf(stderr, "Cannot open file for writing.\n");
      exit(1);
   }

   nwritten = fwrite(productos, sizeof productos, 1, f);
   fclose(f);

   if (nwritten < 1)
   {
      fprintf(stderr, "Writing to file failed.\n");
      exit(1);
   }
}