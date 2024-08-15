#include <stdio.h>
#include "helper.h"
int main()
{
    Lista *lista1=newLista();
    Lista *lista2=newLista();
    agregarLista(lista1, newNodo(2));
    agregarLista(lista1, newNodo(3));
    agregarLista(lista1, newNodo(4));
    agregarLista(lista1, newNodo(5));

    agregarLista(lista2, newNodo(4));
    agregarLista(lista2, newNodo(5));
    agregarLista(lista2, newNodo(6));
    agregarLista(lista2, newNodo(7));

    printf("Lista 1:");
    mostrarLista(lista1);
    printf("Lista 2:");
    mostrarLista(lista2);

/*
    Nodo *resultado1 = merge(lista1->cab, lista2->cab);
    printf("Union: ");
    mostrarListaNueva(resultado1);

    Lista *resultado2 = invertir(lista1);
    printf("InvertirLista: ");
    mostrarLista(resultado2);

*/

    Nodo *resultado3=Interseccion(lista1->cab,lista2->cab);
    printf("Interseccion:");
    mostrarListaNueva(resultado3);

    Nodo *resultado4=Diferencia(lista1->cab,lista2->cab);
    printf("Diferencia:");
    mostrarListaNueva(resultado4);


    Nodo *resultado5=mergeSinDuplicados(lista1->cab,lista2->cab);
    printf("UnionSinDuplicados:");
    mostrarListaNueva(resultado5);



    return 0;
}
