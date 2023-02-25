#include <stdio.h>
#include "mate.h"
#include "matrix.h"

int result = 0;

int array1[3][3] = { {1,2,3},
                     {5,4,6},
                     {7,8,9},};

int array2[3][3] = { {1,2,3},
                     {5,4,6},
                     {7,8,9},};

int main(int argc, char const *argv[])
{
    printf("Hello World!\n");
    result = suma('a' , 5);
    printf("result: %d\n", result);

    matrix_multiply(array1 ,array2);

    return 0;
}
