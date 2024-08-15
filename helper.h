//
// Created by Fran on 15/08/2024.
//

#ifndef UNTITLED13_HELPER_H
#define UNTITLED13_HELPER_H
typedef struct nodo
{
    int num;
    struct nodo*sig;
}Nodo;
typedef struct lista
{
    Nodo *cab;
    Nodo *cola;
}Lista;
Nodo *newNodo(int num);
Lista *newLista();
void agregarLista(Lista *lista,Nodo *nodoAI);
void mostrarLista(Lista *lista);
Lista *invertir(Lista *lista1);
Nodo *Diferencia(Nodo *lista1,Nodo *lista2);
Nodo *mergeSinDuplicados(Nodo *lista1,Nodo *lista2);
Nodo *Interseccion(Nodo *lista1,Nodo *lista2);
Nodo *merge(Nodo *lista1,Nodo *lista2);
void mostrarListaNueva(Nodo *lista);
#endif //UNTITLED13_HELPER_H
