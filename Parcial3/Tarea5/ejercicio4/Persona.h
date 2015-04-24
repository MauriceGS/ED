#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <ostream>

using namespace std;


class Persona(){

  private
  string nombre, apellido;
  bool fallecimiento;
  int fecha,edad;

  public:
    Persona();
    Persona(string,string,int);

    void setNombre(string);
    string getNombre();

    void setApellido(string);
    string getApellido();

    void setFallecimiento(bool);
    bool getFallecimiento();

    void setFecha(int);
    int getFecha();

    void setEdad(int);
    int getEdad();

};

    Persona::Persona(){

    }

    Persona::Persona(string nombre, string apellido, int edad){
    this->nombre = nombre;
    this->apellido=apellido;
    this->fallecimiento = false;
    this->fecha = NULL;
    this->edad= edad;
}





void Persona::setNombre(string nombre){
    this->nombre = nombre;
    }

string Persona::getNombre(){
    return this->nombre;
    }

void Persona::setApellido(string apellido){
    this->apellido = apellido;
    }

string Persona::getApellido(){
    return this->apellido;
    }

void Persona::setFallecimiento(bool fallecimiento){
    this->fallecimiento = fallecimiento;
    }

bool Persona::getFallecimiento(){
    return this->fallecimiento;
    }

void Persona::setFecha(int fecha){
    this->fecha = fecha;
    }

int Persona::getFecha(){
    return this->fecha;
    }

void Persona::setEdad(int edad){
    this->edad=edad;

}

int Persona::getEdad(){
    return this->edad;
}





#endif // PERSONA_H
