#include "header.h"

void cargar_dato(t_dato *d)
    {
    printf("\n Ingrese dato (n�mero): \t");
    scanf("%d",&d->numero);
    }

void mostrar_dato(t_dato *d)
    {
    printf("\n Dato: \t %d \n",d->numero);
    }
