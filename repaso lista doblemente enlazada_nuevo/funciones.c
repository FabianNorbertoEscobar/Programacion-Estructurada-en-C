#include "header.h"

void cargar_dato(t_dato *d)
{
    printf("\n\n Ingrese dato (n�mero): \t");
    scanf("%d",&d->numero);
}

void mostrar_dato(const t_dato *d)
{
    printf("\n\n DATO: \t %d \n",d->numero);
}

int comparar_enteros(const void *v1,const void *v2)
{
    int *e1=(int*)v1;
    int *e2=(int*)v2;
    return *e1-*e2;
}

void mostrar_nodo(const void *v)
{
    int *e=(int *)v;
    printf("\t %d",*e);
}
