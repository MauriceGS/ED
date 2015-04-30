//
//  Grafo.h
//  Grafo
//
//  Created by Vicente Cubells Nonell on 03/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __Grafo__Grafo__
#define __Grafo__Grafo__

#include <iostream>
#include <queue>
#include <vector>
#include "NodoA.h"

using namespace std;

template <class V, class A> struct NodoD{
    float distancia;
    NodoV<V,A> * representante;
};

template <class V, class A> bool operator < (NodoD<V,A> a,NodoD<V,A> b){
    return a.distancia < b.distancia;
}

template <class V, class A>
class Grafo {
    public:

    NodoV<V, A> * vertices;
    int numero_vertices;

    Grafo();
    ~Grafo();

    void clear();
    int size();
    bool empty();

    void insertarVertice(V info);
    void insertarVertice(NodoV<V, A> * vertice);

    void insertarArista(A info, NodoV<V, A> * origen, NodoV<V, A> * destino);

    void eliminarVertice(NodoV<V, A> * nodo);

    NodoV<V, A> * Dijstra(NodoV<V, A> * fin, NodoV<V, A> * inicio);

    template <typename Vn, typename An>
    friend std::ostream & operator <<(std::ostream & os, Grafo<Vn, An> & grafo);

};

template <class V, class A>
Grafo<V, A>::Grafo()
{
    vertices = nullptr;
    numero_vertices = 0;
}

template <class V, class A>
Grafo<V, A>::~Grafo()
{
    clear();
}

template <class V, class A>
void Grafo<V, A>::clear()
{
    NodoV<V, A> * tmp = vertices;

    while (tmp) {
        vertices = vertices->getNext();
        delete tmp;
        tmp = vertices;
    }

    vertices = nullptr;
    numero_vertices = 0;
}

template <class V, class A>
int Grafo<V, A>::size()
{
    return numero_vertices;
}

template <class V, class A>
bool Grafo<V, A>::empty()
{
    return size() == 0;
}

template <class V, class A>
void Grafo<V, A>::insertarVertice(V info)
{
    NodoV<V, A> * tmp = vertices;
    NodoV<V, A> * prev = nullptr;

    while (tmp) {
        prev = tmp;
        tmp = tmp->getNext();
    }

    NodoV<V, A> * nuevo = new NodoV<V, A>(info);

    if (prev) {
        prev->setNext(nuevo);
    }
    else {
        vertices = nuevo;
    }

    ++numero_vertices;
}

template <class V, class A>
void Grafo<V, A>::insertarVertice(NodoV<V, A> * vertice)
{
    NodoV<V, A> * tmp = vertices;
    NodoV<V, A> * prev = nullptr;

    while (tmp) {
        prev = tmp;
        tmp = tmp->getNext();
    }

    if (prev) {
        prev->setNext(vertice);
    }
    else {
        vertices = vertice;
    }

    ++numero_vertices;

}

template <class V, class A>
void Grafo<V, A>::insertarArista(A info, NodoV<V, A> * origen, NodoV<V, A> * destino)
{
    origen->adicionarArista(info, destino);
}

template <class V, class A>
void Grafo<V, A>::eliminarVertice(NodoV<V, A> * nodo){
    NodoV<V, A> * temp = vertices;
    NodoV<V, A> * prev = nullptr;
    NodoA<A, V> * arista;
    NodoA<A, V> * aux;
    while(temp){
        arista=temp->aristas;
        if(arista){
            if(arista->destino==nodo){
                temp->aristas=arista->next;
                delete arista;
            }else{
                while(arista->next){
                    if(arista->next->destino==nodo){
                        aux=arista->next;
                        arista->next=aux->next;
                        delete aux;
                    }else{
                        arista=arista->next;
                    }
                }
            }

        }
        temp=temp->next;
    }


    temp=vertices;
    if(temp==nodo){

        vertices=vertices->next;
        delete temp;
    }else{
        prev=temp;
        temp=temp->next;
        while(temp){
            if(temp==nodo){
                prev->next=temp->next;
                delete temp;
                temp=prev->next;
            }else{
                prev=temp;
                temp=temp->next;
            }
        }
    }
    numero_vertices--;
}

template <class V, class A>
NodoV<V, A> * Grafo<V, A>::Dijstra(NodoV<V, A> * inicio, NodoV<V, A> * fin){

    NodoV<V, A> * act = vertices;
    NodoA<A, V> * vecino;
    NodoD<V, A> temp;
    priority_queue <NodoD<V,A> > heap;

    while(act){
        act->usado = false;
        act->padre = nullptr;
        act->distancia = 1 << 30;
        act = act->getNext();
    }

    inicio->distancia=0;
    temp.representante=inicio;
    heap.push(temp);
    while(heap.top().representante!=fin){

        vecino = heap.top().representante->aristas;

        while (vecino){
            if(vecino->destino->distancia > heap.top().representante->distancia+vecino->info){
                vecino->destino->distancia=heap.top().representante->distancia+vecino->info;
                temp.representante=vecino->destino;
                temp.distancia=-vecino->destino->distancia;
                heap.push(temp);
                vecino->destino->padre=heap.top().representante;
            }
            vecino=vecino->getNext();
        }
        heap.top().representante->usado=true;
        while(!heap.empty() && heap.top().representante->usado==true){
            heap.pop();
        }
        if(heap.empty()){
            return nullptr;
        }
    }
    NodoV<V, A> * resultado = nullptr;
    while(fin){
        resultado = new NodoV<V, A>(fin->info,resultado);
        resultado->distancia  = fin->distancia;
        fin = fin->padre;
    }
    return resultado;
}

template <class V, class A>
std::ostream & operator <<(std::ostream & os, Grafo<V, A> & grafo)
{
    NodoV<V, A> * tmp = grafo.vertices;

    while (tmp) {
        os << *tmp << std::endl;
        tmp = tmp->getNext();
    }

    return os;
}



#endif /* defined(__Grafo__Grafo__) */
