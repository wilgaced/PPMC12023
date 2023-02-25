/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 0696                                        */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Estructuras                                 */
/*  Fecha:     9/11/2022                                   */
/***********************************************************/

/*Usted acaba de comprar un equipo de sonido que tiene un valor de $1000 con el siguiente plan de crédito: 
no hay pago inicial, una tasa de interés del 18% anual (es decir un 1.5% mensual), y un pago mensual de $50. 
El pago mensual de $50 se utilizará para pagar el interés y el resto se utilizará para pagar parte de la deuda. 
Así el primer mes paga 1.5% de 1000 de interés. esto es $15 de interés. Así, los $35 restantes se deducen de 
su deuda, lo cual deja una cantidad de $965.00. cuyo el siguiente mes paga un interés de 1.5% de &965.00, 
cuyo monto es de 14.48. Así podemos decir $35.52 (lo cual es 50 – 14.48) del monto de su deuda. escriba un 
programa que le imprima cuántos pagos le tomará pagar el préstamo, así como el monto total del interés pagado 
sobre la vida del préstamo. utiliza un ciclo para calcular el monto del interés y el tamaño de la deuda después 
de cada monto.*/

// incluyendo Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COSTOINICIAL 1000
#define TAZA 0.015
#define CUOTA 50

float deuda = COSTOINICIAL;
int pagare = 0;
float interesPagado = 0;

int main(int argc, char const *argv[])
{
    do
    {
       interesPagado = interesPagado + (deuda * TAZA);
       deuda = deuda - (CUOTA - (deuda * TAZA));
       pagare++;
       printf("%d       %3.1f      %2.1f\n", pagare, deuda, (deuda * TAZA) );
    } while (deuda >= 0 );
    printf("Interes pagado %3.1f\n", interesPagado);
    
    return 0;
}


