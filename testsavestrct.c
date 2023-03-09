

// C program for writing
// struct to file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a struct to read and write
typedef struct
{
    int items;                 /* number of items*/
    char description[20];      /* description*/
    int cantidad;              /* cantidad de producto */
    int precioCompras;         /* precio al que se compro el producto */
    int precioVentas;          /* precio al que se vende el producto */
    char fechaCompras[20];     /* fecha en que se compro el producto */
    char fechaVencimiento[20]; /* fecha en que se*/
} producto;                    /* Estructura de tipo producto */

int main()
{
    FILE *outfile;

    // open file for writing
    outfile = fopen("almacen.txt", "w+");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opened file\n");
        exit(1);
    }

    producto input1 = {1, "papa", 10, 12, 20, "20/2/2023"};


    // write struct to file
    fwrite(&input1, sizeof(producto), 1, outfile);

    if (fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");

    // close file
    fclose(outfile);

     FILE *infile;
     producto input;
     
    // Open person.dat for reading
    infile = fopen ("almacen.txt", "r");
    if (infile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }
     
    // read file contents till end of file
    while(fread(&input, sizeof(producto), 1, infile))
        printf ("items = %d dec = %s cant %d pre %d\n", input.items, input.description, input.cantidad, input.precioCompras);
 
    // close file
    fclose (infile);

    return 0;
}