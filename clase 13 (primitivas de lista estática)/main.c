#include "header.h"

int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    printf("\n\n LISTA EST�TICA \n");

    t_lista lista;
    t_dato dato;

    crear_lista(&lista);
    printf("\n\n Se ha creado una lista \n");

    printf("\n\n Cargue la lista: \n");
    while(!lista_llena(&lista))
        {
        cargar_dato(&dato);
        poner_en_lista(&lista,&dato,comparar);
        }
    printf("\n\n La lista est� llena \n");

    printf("\n\n Ver primero: \n");
    ver_primero_de_lista(&lista,&dato);
    printf("\n\n El primero de la lista es: \n");
    mostrar_dato(&dato);

    printf("\n\n Sacar de la lista \n");
    while(!lista_vacia(&lista))
        {
        sacar_de_lista(&lista,&dato);
        mostrar_dato(&dato);
        }
    printf("\n\n La lista est� vac�a \n");

    printf("\n\n Cargar algo: \n");
    cargar_dato(&dato);
    poner_en_lista(&lista,&dato,comparar);
    printf("\n\n El dato fue cargado \n");

    vaciar_lista(&lista);
    printf("\n\n La lista fue vaciada exitosamente \n");

    printf("\n\n \t\t\t\t\t Fin del programa... \n\n");
    getch();
    return 0;
    }
