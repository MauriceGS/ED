#include <iostream>
#include "BinaryTree.h"

using namespace vcn;
using namespace std;

int main() {


    BinaryTree<int> arbol;


    BNode<int> * primero = new BNode<int>(1);
    BNode<int> * segundo = new BNode<int>(5);
    BNode<int> * tercero = new BNode<int>(10);
    BNode<int> * cuarto = new BNode<int>(15);
    BNode<int> * quinto = new BNode<int>(20);


    arbol.insert(nullptr,primero);
    arbol.insert(primero,segundo);
    arbol.insert(primero,tercero);
    arbol.insert(segundo,cuarto);
    arbol.insert(segundo,quinto);


cout<<"Arbol preOrden"<<endl;
    arbol.preOrder();
    cout << endl;

    arbol.reflexion();
cout<<"Arbol Reflejado y en preOrden"<<endl;
    arbol.preOrder();
   cout << endl;

    return 0;
}
