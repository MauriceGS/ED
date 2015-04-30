#ifndef __Grafo__NodoV__
#define __Grafo__NodoV__

#include <iostream>



template <class A, class V>
class NodoA;

template <class V, class A>
class NodoV {
public:
    V info;
    NodoV<V, A> * next;
    NodoA<A, V> * aristas;
    float distancia;
    bool usado;
    NodoV<V,A> * padre;


    NodoV();
    NodoV(V info);
    NodoV(V info, NodoV<V, A> * sig);
    ~NodoV();

    V getInfo();
    void setInfo(V value);

    NodoV<V, A> * getNext();
    void setNext(NodoV<V, A> * value);

    NodoA<A, V> * getAristas();

    template <class Vn, class An>
    friend std::ostream & operator <<(std::ostream & os, NodoV<Vn, An> & vertice);

    void adicionarArista(A info, NodoV<V, A> * destino);

};


template <class V, class A>
NodoV<V, A>::NodoV()
{

}

template <class V, class A>
NodoV<V, A>::NodoV(V info)
{
    this->info = info;
    next = nullptr;
    aristas = nullptr;
}

template <class V, class A>
NodoV<V, A>::NodoV(V info, NodoV<V, A> * sig){
    this->info = info;
    next = sig;
    aristas = nullptr;
}

template <class V, class A>
NodoV<V, A>::~NodoV()
{
    NodoA<A, V> * tmp = aristas;

    while (tmp) {
        aristas = aristas->getNext();
        delete tmp;
        tmp = aristas;
    }

    aristas = nullptr;
}


template <class V, class A>
V NodoV<V, A>::getInfo()
{
    return info;
}

template <class V, class A>
void NodoV<V, A>::setInfo(V value)
{
    info = value;
}

template <class V, class A>
NodoV<V, A> * NodoV<V, A>::getNext()
{
    return next;
}

template <class V, class A>
void NodoV<V, A>::setNext(NodoV<V, A> * value)
{
    next = value;
}

template <class V, class A>
NodoA<A, V> * NodoV<V, A>::getAristas()
{
    return aristas;
}

template <class V, class A>
std::ostream & operator <<(std::ostream & os, NodoV<V, A> & vertice)
{
    os << vertice.info << std::endl;

    NodoA<A, V> * tmp = vertice.aristas;

    while (tmp) {
        os << *tmp;
        tmp = tmp->getNext();
    }

    return os;
}

template <class V, class A>
void NodoV<V, A>::adicionarArista(A info, NodoV<V, A> * destino)
{
    NodoA<A, V> * tmp = aristas;
    NodoA<A, V> * prev = nullptr;

    while (tmp) {
        prev = tmp;
        tmp =tmp->getNext();
    }

    NodoA<A, V> * nuevo = new NodoA<A, V>(info, destino);

    if (prev) {
        prev->setNext(nuevo);
    }
    else {
        aristas = nuevo;
    }
}

#endif /* defined(__Grafo__NodoV__) */
