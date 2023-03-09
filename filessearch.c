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
int findAndReplaceInFile(producto producto, int valor);


producto productos;

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
            printf("para crear producto precione el.. 1\n");
            printf("para eliminar precione el... 2\n");
            printf("para visulizar precione el.... 3\n");
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

    guardar_productos(&productos[0], index_product);

}

int guardar_productos(producto *product[], int index)
{
   FILE *ifp, *ofp;
	int word_len, i, p = 0;
    int linecounter, actual_line =0;
    char ch;

	ifp = fopen("amacen.txt", "w+");
	if (ifp == NULL || ofp == NULL) 
    {
		printf("Can't open file.");
		exit(0);
	}

    while (!feof(ifp)) 
    {
        if((ch = fgetc(ifp)) == '\n')
            linecounter++;
            actual_line = linecounter - 1;
    }
    linecounter = 0;

     while (actual_line >= linecounter)
    {
        if((ch = fgetc(ifp)) == '\n')
            linecounter++;
    }
    for (int i = 0; i < 10; i++)
    {
          fwrite (&product[index], sizeof(producto), 1, "almacen.txt");
    }
     if(fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");
 
    // close file
    fclose ("almacen.txt");
}


static int menu_eliminar_producto(int previlage)
{
    printf("funcion no mimplementada aun");
}


static int menu_visulizar_producto(int previlage)
{
    printf("funcion no mimplementada aun");
}

int MostrarProducto(int codigo)
{
    char read[200];
    int ret = -1;
    FILE *f = fopen;
    f = fopen("almacen.txt", "r");
    rewind(f);
	while (!feof(f)) {

		fscanf(f, "%s", read);

		if (strcmp(read, codigo) == 0) 
        {
            ret = f;
            return ret;			
		}

		// In last loop it runs twice
		fprintf(fgets, "%s ", read);
	}

}

// Function to find and
// replace a word in File
int findAndReplaceInFile(producto producto, int valor)
{
	FILE *ifp, *ofp;
	char word[100], ch, read[100], replace[100];
	int word_len, i, p = 0;

	ifp = fopen("amacen.txt", "w+");
	ofp = fopen("amacencp.txt", "w+");
	if (ifp == NULL || ofp == NULL) {
		printf("Can't open file.");
		exit(0);
	}
	puts("THE CONTENTS OF THE FILE ARE SHOWN BELOW :\n");

	// displaying file contents
	while (1) {
		ch = fgetc(ifp);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	puts("\n\nEnter the word to find:");
	fgets(word, 100, stdin);

	// removes the newline character from the string
	word[strlen(word) - 1] = word[strlen(word)];

	puts("Enter the word to replace it with :");
	fgets(replace, 100, stdin);

	// removes the newline character from the string
	replace[strlen(replace) - 1] = replace[strlen(replace)];

	fprintf(ofp, "%s - %s\n", word, replace);

	// comparing word with file
	rewind(ifp);
	while (!feof(ifp)) {

		fscanf(ifp, "%s", read);

		if (strcmp(read, word) == 0) {

			// for deleting the word
			strcpy(read, replace);
		}

		// In last loop it runs twice
		fprintf(ofp, "%s ", read);
	}

	// Printing the content of the Output file
	rewind(ofp);
	while (1) {
		ch = fgetc(ofp);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(ifp);
	fclose(ofp);
}

int main(int argc, char const *argv[])
{
    menu_crear_producto(0);
    MostrarProducto(2);

    return 0;
}
