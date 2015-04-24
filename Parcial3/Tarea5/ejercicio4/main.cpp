#include <iostream>
#include <string.h>
#include "Persona.h"
#include "BinaryTree.h"
using namespace vcn;
using namespace std;

BinaryTree<Persona> arbol;

void agregarMiembro();
void verDescendientes();
void verParientes();
void verAncestros();
void fallecido();
void verFallecidos();
void verVivos();

int main(){

    return 0;
}

void agregarMiembro(){

    string padreN,miembroN,apellidoP,apellidoM;
    int edadP,edadM;


    cout << " Cual es el nombre del padre ? ";
    cin >> padreN;
    cout << " Cual es el apellido del padre ? ";
    cin >> apellidoP;
    cout << " Cual es la edad del padre ? ";
    cin >> edadP;
    cout << " Cual es el nombre del miembro ? ";
    cin >> miembroN;
    cout << " Cual es el apellido del miembro ? ";
    cin >> apellidoM;
    cout << " Cual es la edad del miembro ? ";
    cin >> edadM;

    Persona padre(padreN, apellidoP,edadP);
    Persona miembro(miembroN, apellidoM, edadM);


    BNode<Persona> * nodoPadre = arbol.search(padre);
    BNode<Persona> * nodoMiembro = new BNode<Persona>(hijo);

    arbol.insert(nodoPadre,nodoMiembro);
    arbol.preOrder();


}
void verDescendientes(){

    string padre,apellidoP;
    int edadP;

    cout << " Cual es el nombre del padre ? ";
    cin >> padreN;
    cout << " Cual es el apellido del padre ? ";
    cin >> apellidoP;
    cout << " Cual es la edad del padre ? ";
    cin >> edadP;

    Persona padre(padreN, apellidoP,edadP);

    BNode<Persona> * origen = arbol.search(padre);

    arbol.preOrder(origen);


    }

void verParientes(){
string miembro,apellidoM;
int edadM;

    cout << " Cual es el nombre del miembro ? ";
    cin >> miembro;
    cout << " Cual es el apellido del miembro ? ";
    cin >> apellidoM;
    cout << " Cual es la edad del miembro ? ";
    cin >> edadM;

    Persona miembro(miembro, apellidoM, edadM);

    BNode<Persona> * pariente = arbol.search(miembro);

    arbol.verParientes(pariente);


}
void verAncestros(){
 string miembro,apellidoM;
 int edadM;

    cout << " Cual es el nombre del miembro ? ";
    cin >> miembro;
    cout << " Cual es el apellido del miembro ? ";
    cin >> apellidoM;
    cout << " Cual es la edad del miembro ? ";
    cin >> edadM;

    Persona miembro(miembro, apellidoM, edadM);

    BNode<Persona> * origen= arbol.search(miembro);

    arbol.ancestors(miembro);



}
void fallecido(){

   string miembro,apellidoM;
   int edadM,fecha;

    cout << " Cual es el nombre del miembro fallecido? ";
    cin >> miembro;
    cout << " Cual es el apellido del miembro fallecido ? ";
    cin >> apellidoM;
    cout << " Cual es la edad del miembro fallecido? ";
    cin >> edadM;
    cout << " Cual es la fecha del fallecimiento? ";
    cin >> fecha;

    Persona miembro(miembro, apellidoM, edadM);

    BNode<Persona> * fallecidoN = arbol.search(miembro);

    Persona fallecido = fallecidoN->getInfo();
    fallecido.setFallecimiento(true);
    fallecido.setFecha(fecha);


    fallecidoN.setInfo(fallecido);

}
void verFallecidos(){
int fecha;
cout << "A partir de cual fecha gusta ver los fallecimientos ?";
cin >> fecha;

}
void verVivos(){

int fecha;
cout << "A partir de cual fecha gusta ver los miembros vivos ?";
cin >> fecha;

}


