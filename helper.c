//
// Created by Fran on 15/08/2024.
//
#include "string.h"
#include "stdlib.h"
#include "helper.h"
#include "stdio.h"
Nodo *newNodo(int num)
{
    Nodo *aux=malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Sin memoria para designar\n");
        return 0;
    }
    aux->num=num;
    aux->sig=NULL;
    return aux;
}
Lista *newLista()
{
    Lista *aux=malloc(sizeof(Lista));
    if(aux==NULL)
    {
        printf("Sin memoria para designar\n");
        return 0;
    }
    aux->cab=NULL;
    aux->cola=NULL;
    return aux;
}
void agregarLista(Lista *lista,Nodo *nodoAI)
{
    if(lista->cab==NULL)
    {
        lista->cab=nodoAI;
    }else
        {
            Nodo *aux=lista->cab;
            while(aux->sig!=NULL)
            {
                aux=aux->sig;
            }
            aux->sig=nodoAI;
        }
}
Nodo *Diferencia(Nodo *lista1,Nodo *lista2)
{
    Nodo *listaNueva=NULL;
    Nodo *ultimo=NULL;
    while (lista1!=NULL  &&  lista2!=NULL)
    {
        Nodo *aux= newNodo(lista2->num-lista1->num);
        if(listaNueva==NULL)
        {
            listaNueva=aux;
            ultimo=aux;
        }else
            {
                    ultimo->sig=aux;
                    ultimo=aux;
            }
        lista1=lista1->sig;
        lista2=lista2->sig;
    }
    while (lista1!=NULL)
    {
        Nodo *aux= newNodo(-lista1->num);
        if(listaNueva==NULL)
        {
            listaNueva=aux;
            ultimo=aux;
        }else
        {
            ultimo->sig=aux;
            ultimo=aux;
        }
        lista1=lista1->sig;
    }
    while (lista2!=NULL)
    {
        Nodo *aux= newNodo(lista2->num);
        if(listaNueva==NULL)
        {
            listaNueva=aux;
            ultimo=aux;
        }else
        {
            ultimo->sig=aux;
            ultimo=aux;
        }
        lista2=lista2->sig;
    }
    return listaNueva;
}
Nodo *mergeSinDuplicados(Nodo *lista1,Nodo *lista2)
{
    Nodo *listaNueva=NULL;
    Nodo *ultimo=NULL;

    while(lista1!=NULL && lista2!=NULL)
    {
        Nodo *aux=NULL;
        if(lista1->num<lista2->num)
        {
            aux=lista1;
            lista1=lista1->sig;
        }else
            {
                if(lista2->num<lista1->num)
                {
                    aux=lista2;
                    lista2=lista2->sig;
                }else
                    {
                        aux=lista1;
                        lista1=lista1->sig;
                        lista2=lista2->sig;
                    }
            }
        if(listaNueva==NULL)
        {
                listaNueva=aux;
                ultimo=aux;
        }else
            {
                if(ultimo->num!=aux->num)
                {
                    ultimo->sig=aux;
                    ultimo=aux;
                }
            }
    }
    while(lista1!=NULL)
    {
        if(listaNueva==NULL)
        {
            listaNueva=lista1;
            ultimo=lista1;
        }else
            {
                if(ultimo->num!=lista1->num)
                {
                    ultimo->sig=lista1;
                    ultimo=lista1;
                }
            }
        lista1=lista1->sig;
    }
    while(lista2!=NULL)
    {
        if(listaNueva==NULL)
        {
            listaNueva=lista2;
            ultimo=lista2;
        }else
        {
            if(ultimo->num!=lista2->num)
            {
                ultimo->sig=lista2;
                ultimo=lista2;
            }
        }
        lista2=lista2->sig;
    }
    return listaNueva;
}
Nodo *Interseccion(Nodo *lista1,Nodo *lista2)
{
    Nodo *listaNueva=NULL;
    Nodo *ultimo=NULL;

    while(lista1!=NULL && lista2!=NULL)
    {
        if(lista1->num<lista2->num)
        {
            lista1=lista1->sig;
        }else
            {
                if(lista1->num>lista2->num)
                {
                    lista2=lista2->sig;
                }else
                    {
                        Nodo *aux= newNodo(lista1->num);
                        if(listaNueva==NULL)
                        {
                            listaNueva=aux;
                            ultimo=aux;
                        }else
                            {
                                ultimo->sig=aux;
                                ultimo=aux;
                            }
                        lista1=lista1->sig;
                        lista2=lista2->sig;
                    }
            }
    }
    return listaNueva;
}
/*
Nodo *merge(Nodo *lista1, Nodo *lista2)
{
      if (lista1 == NULL) {
          return lista2;
      }
      if (lista2 == NULL) {
          return lista1;
      }
      Nodo *ultimo = lista1;
      while (ultimo->sig != NULL) {
          ultimo = ultimo->sig;
      }
      ultimo->sig = lista2;
      return lista1;
}
Lista *invertir(Lista *lista1)
{
    Nodo *anterior=NULL;
    Nodo *actual=lista1->cab;
    Nodo *siguiente=NULL;
    while (actual!=NULL)
    {
        siguiente=actual->sig;
        actual->sig=anterior;
        anterior=actual;
        actual=siguiente;
    }
    lista1->cab=anterior;
    return lista1;
}
*/
void mostrarLista(Lista *lista)
{
    Nodo *aux=lista->cab;
    while (aux!=NULL)
    {
        printf("%d->",aux->num);
        aux=aux->sig;
    }
    printf("NULL\n");
}
void mostrarListaNueva(Nodo *lista)
{
    Nodo *aux=lista;
    while (aux!=NULL)
    {
        printf("%d->",aux->num);
        aux=aux->sig;
    }
    printf("NULL\n");
}