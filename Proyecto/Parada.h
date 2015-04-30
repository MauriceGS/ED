#ifndef PARADA_H
#define PARADA_H

#include <string>
#include <iostream>
using namespace std;

class Parada
{
private:
    string nombre;
    int ruta;

public:
    Parada();
    Parada(string name, int ruta);
    string getNombre();
    void setNombre(string name);
    int getRuta();
    void setRuta(int route);

    friend ostream & operator <<(ostream & os, Parada est);

};
#endif // PARADA_H
