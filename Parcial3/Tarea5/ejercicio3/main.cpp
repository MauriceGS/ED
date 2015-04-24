
#include "BinaryTree.h"
#include <iostream>
#include <string>

using namespace std;
using namespace vcn;

int main(){
BinaryTree<int> arbol;

BNode<int> * primero=new BNode<int>(2);
BNode<int> * segundo=new BNode<int>(2);
BNode<int> * tercero=new BNode<int>(2);
BNode<int> * cuarto=new BNode<int>(2);
BNode<int> * quinto=new BNode<int>(2);
BNode<int> * sexto=new BNode<int>(2);

arbol.insert(nullptr,primero);
arbol.insert(primero,segundo);
arbol.insert(primero,tercero);
arbol.insert(segundo,cuarto);
arbol.insert(segundo,quinto);
arbol.insert(tercero,sexto);

cout<<"Arbol Ordenado"<<endl
arbol.preOrder();

return 0;
}
