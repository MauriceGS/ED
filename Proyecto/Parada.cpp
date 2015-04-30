#include "Parada.h"

#include "Parada.h"

Parada::Parada() {}

Parada::Parada(std::string name, int ruta)
{
  nombre= name;
  this->ruta=ruta;
}

std::string Parada::getNombre()
{
    return nombre;
}

void Parada::setNombre(std::string name)
{
    nombre= name;
}

int Parada::getRuta()
{
    return ruta;
}

void Parada::setRuta(int route)
{
    ruta=route;
}

ostream & operator <<(ostream & os, Parada est)
{
  return os << "Parada: " << est.nombre << "\t ruta: " << est.ruta;
}
