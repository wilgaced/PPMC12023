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

#include <ventas.h>
#include <compras.h>
#include <almacen.h>

enum
{
    domingo,
    lunes,
    martes,
    miercoles,
    jueves,
    viernes,
    sabado,
};

enum
{
    admin,
    operador,
    guess,
    loginsuccess,
    loginfail,
};

typedef struct
{
    char username[20];
    char password[20];
    int previlage;
    int loginstatus;
    int opcion;
} user;

user usuario;

// prototipo de fucniones
int verificar_identidad(char *username, char *password);

int main(int argc, char const *argv[])
{
    usuario.loginstatus = 0;

    do
    {
        printf("Bienvenido al sistema de gestion de Empresa SRL\n");
        printf("por favor digite su usuario\n");

        printf("username: ");
        scanf("%s", &usuario.username);
        printf("\n");
        printf("password: ");
        scanf("%s", &usuario.password);
        printf("\n");
        if (verificar_identidad(usuario.username, usuario.password) == true)
        {
            printf("login sucess\n");
            usuario.loginstatus = loginsuccess;
            _sleep(2);
            system("cls");
            printf("Elija el modulo que desea accesar\n");
            printf("para alamacen precione el.. 1\n");
            printf("para compras precione el... 2\n");
            printf("para ventas precione el.... 3\n");
            scanf("%d", &usuario.opcion);
            switch (usuario.opcion)
            {
            case 1:
                menu_almacen(usuario.previlage);
                break;
            case 2:
                menu_compras(usuario.previlage);
                break;
            case 3:
                menu_ventas(usuario.previlage);
                break;

            default:
                printf("Opcion no valida");
                break;
            }
        }
        else
        {
            printf("login failed\n");
            printf("\n");
            printf("please try again later\n");
            usuario.loginstatus = loginfail;
            for (int i = 0; i < 5; i++)
            {
                _beep(3000, 500);
                _beep(1000, 500);
            }
        }

    } while (usuario.loginstatus == loginfail);
}

int verificar_identidad(char *username, char *password)
{
    if (strcmp(username, "wilgaced") == 0)
    {
        if (strcmp(password, "12345") == 0)
        {
            usuario.previlage = admin;
            return true;
        }
    }

    if (strcmp(username, "pedro") == 0)
    {
        if (strcmp(password, "123456") == 0)
        {
            usuario.previlage = guess;
            return true;
        }
    }

    else
    {
        return false;
    }
    return true;
}