#include <stdio.h>


union {
   char array[8];
   double bigNum;
} myUnion;

double volt = 12575.343564;
static int data[5] = {0};
int test[8] = {0};
int i = 0;
int j = 0;


int main(int argc, char const *argv[])
{
    data[i++] = (((int)volt >> 16) & 0xFF);
    data[i++] = (((int)volt >> 8) & 0xFF);
    data[i++] = ((int)volt & 0xFF);

    myUnion.bigNum = volt;
    test[j++] = myUnion.array[j];
    test[j++] = myUnion.array[j];
    test[j++] = myUnion.array[j];
    test[j++] = myUnion.array[j];
    test[j++] = myUnion.array[j];
    test[j++] = myUnion.array[j];
    test[j++] = myUnion.array[j];
    test[j++] = myUnion.array[j];
    test[j++] = myUnion.array[j];
    printf("%lf",myUnion.bigNum);


    return 0;
}
