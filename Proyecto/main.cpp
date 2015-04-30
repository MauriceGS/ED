
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Grafo.h"
#include "Parada.h"

Grafo<Parada, float> * camiones = new Grafo<Parada, float>();

void creaCamiones();

//RUTA1

NodoV<Parada, float> * Zapata = new NodoV<Parada, float>(Parada("Zapata", 1));
NodoV<Parada, float> * Netzahualcoyotl = new NodoV<Parada, float>(Parada("Netzahualcoyotl", 1));
NodoV<Parada, float> * Xola = new NodoV<Parada, float>(Parada("Xola", 1));
NodoV<Parada, float> * Poli = new NodoV<Parada, float>(Parada("Poli", 1));
NodoV<Parada, float> * LaRaza = new NodoV<Parada, float>(Parada("LaRaza", 1));
NodoV<Parada, float> * Taxquena = new NodoV<Parada, float>(Parada("Taxquena", 1));
NodoV<Parada, float> * LaViga = new NodoV<Parada, float>(Parada("LaViga", 1));
NodoV<Parada, float> * SanAngel = new NodoV<Parada, float>(Parada("SanAngel", 1));


//RUTA2

NodoV<Parada, float> * Chapultepec = new NodoV<Parada, float>(Parada("Chapultepec", 2));
NodoV<Parada, float> * IndiosVerdes = new NodoV<Parada, float>(Parada("IndiosVerdes", 2));
NodoV<Parada, float> * Insurgentes = new NodoV<Parada, float>(Parada("Insurgentes", 2));
NodoV<Parada, float> * Barranca = new NodoV<Parada, float>(Parada("Barranca", 2));
NodoV<Parada, float> * Auditorio = new NodoV<Parada, float>(Parada("Auditorio", 2));
NodoV<Parada, float> * Sevilla = new NodoV<Parada, float>(Parada("Sevilla", 2));
NodoV<Parada, float> * Ermita = new NodoV<Parada, float>(Parada("Ermita", 2));
NodoV<Parada, float> * Toreo = new NodoV<Parada, float>(Parada("Toreo", 2));

//RUTA3

NodoV<Parada, float> * Aeropuerto = new NodoV<Parada, float>(Parada("Aeropuerto", 3));
NodoV<Parada, float> * LaCurva = new NodoV<Parada, float>(Parada("LaCurva", 3));
NodoV<Parada, float> * Balbuena = new NodoV<Parada, float>(Parada("Balbuena", 3));
NodoV<Parada, float> * Tlatelolco = new NodoV<Parada, float>(Parada("Tlatelolco", 3));
NodoV<Parada, float> * Normal = new NodoV<Parada, float>(Parada("Normal", 3));





void creaCamiones()
{

camiones->insertarVertice(Zapata);
camiones->insertarVertice(Netzahualcoyotl);
camiones->insertarVertice(Xola);
camiones->insertarVertice(Poli);
camiones->insertarVertice(LaRaza);
camiones->insertarVertice(Taxquena);
camiones->insertarVertice(LaViga);
camiones->insertarVertice(SanAngel);
camiones->insertarVertice(Chapultepec);
camiones->insertarVertice(IndiosVerdes);
camiones->insertarVertice(Insurgentes);
camiones->insertarVertice(Barranca);
camiones->insertarVertice(Auditorio);
camiones->insertarVertice(Sevilla);
camiones->insertarVertice(Ermita);
camiones->insertarVertice(Toreo);
camiones->insertarVertice(Aeropuerto);
camiones->insertarVertice(LaCurva);
camiones->insertarVertice(Balbuena);
camiones->insertarVertice(Tlatelolco);
camiones->insertarVertice(Normal);

//Ruta1
camiones->insertarArista(21.3,Zapata,Netzahualcoyotl);
camiones->insertarArista(17.3,Netzahualcoyotl,Xola);
camiones->insertarArista(22.8,Xola,Poli);
camiones->insertarArista(5.5,Poli,LaRaza);
camiones->insertarArista(22.2,LaRaza,Taxquena);
camiones->insertarArista(10.8,Taxquena,LaViga);
camiones->insertarArista(15.2,LaViga,SanAngel);

camiones->insertarArista(21.3,Netzahualcoyotl,Zapata);
camiones->insertarArista(17.3,Xola,Netzahualcoyotl);
camiones->insertarArista(22.8,Poli,Xola);
camiones->insertarArista(5.5,LaRaza,Poli);
camiones->insertarArista(22.2,Taxquena,LaRaza);
camiones->insertarArista(10.8,LaViga,Taxquena);
camiones->insertarArista(15.2,SanAngel,LaViga);


//Ruta2
camiones->insertarArista(16.3,Chapultepec,IndiosVerdes);
camiones->insertarArista(12.3,IndiosVerdes,Insurgentes);
camiones->insertarArista(11.5,Insurgentes,Barranca);
camiones->insertarArista(7.7,Barranca,Auditorio);
camiones->insertarArista(3.8,Auditorio,Sevilla);
camiones->insertarArista(10.7,Sevilla,Toreo);

camiones->insertarArista(16.3,IndiosVerdes,Chapultepec);
camiones->insertarArista(12.3,Insurgentes,IndiosVerdes);
camiones->insertarArista(11.5,Barranca,Insurgentes);
camiones->insertarArista(7.7,Auditorio,Barranca);
camiones->insertarArista(3.8,Sevilla,Auditorio);
camiones->insertarArista(10.7,Toreo,Sevilla);


//Ruta3
camiones->insertarArista(12.7,Aeropuerto,LaCurva);
camiones->insertarArista(15.6,LaCurva,Balbuena);
camiones->insertarArista(9.3,Balbuena,Tlatelolco);
camiones->insertarArista(5.4,Tlatelolco,Normal);

camiones->insertarArista(12.7,LaCurva,Aeropuerto);
camiones->insertarArista(15.6,Balbuena,LaCurva);
camiones->insertarArista(9.3,Tlatelolco,Balbuena);
camiones->insertarArista(5.4,Normal,Tlatelolco);


}


int main(int argc, const char * argv[]) {
    string menu="\n1.Imprimir las conexiones\n2.Imprimir Parada\n3.Agregar Parada\n4.Agregar Ruta\n5.Buscar Ruta\n6.Salir\n";
    string ini,fin;
    char op='0';

    NodoV<Parada, float> * mejorRuta;
    NodoV<Parada, float> * temp;

    creaCamiones();

    while(op!='6'){
        cout << menu;
        cin >> op;
        switch(op){

        case '1':
            {
                //IMPRIMIR PARADAS
                cout << *camiones;

            }
            break;


        case '2':
            {
                  //IMPRIMIR PARADA
                string parada,aux1,aux2;

                cout << "Dame la parada que desea imprimir: " << endl;
                        getline(cin,parada);
                                getline(cin,parada);

                temp = camiones->vertices;

                for(int i =0;i<parada.length();i++)
                    aux1+=tolower(parada[i]);
                for(int i = 0;i<camiones->numero_vertices;i++){
                    aux2="";

                    for(int j =0;j<temp->getInfo().getNombre().length();j++)
                        aux2+=tolower(temp->getInfo().getNombre()[j]);

                    if(aux1.compare(aux2)==0)
                        cout << *temp;

                    temp=temp->getNext();
                }

            }
            break;




        case '3':
            {
                //AGREGAR PARADA
                string nom,ruta;

                cout << "Cual es el nombre de la nueva parada?" << endl;
                getline(cin,nom);
                getline(cin,nom);


                cout << "A que ruta pertenece la nueva estacion?" << endl;
                cin >> ruta;


                if((int)ruta[0]-'0'>=0&&(int)ruta[0]-'0'<=9){ //validacion de entero

                        NodoV<Parada, float> * nuevaParada = new NodoV<Parada, float>(Parada(nom,stoi(ruta)));
                            camiones->insertarVertice(nuevaParada);
                }
                else{
                    cout << "No es posible crear la parada";
                }

            }
            break;
        case '4':
            {
                    //AGREGAR RUTA
                NodoV<Parada, float> * inicio=nullptr;
                NodoV<Parada, float> * final=nullptr;

                string parada1,parada2,distancia;
                float dist;
                cout << "Dame el nombre de la primera parada:" << endl;
                        getline(cin,parada1);
                                getline(cin,parada1);


                cout << "Dame el nombre de la segunda parada:" << endl;
                                getline(cin,parada2);

                cout << "Dame la distancia entre las paradas:" << endl;
                cin >> distancia;


                if((int)distancia[0]-'0'>=0&&(int)distancia[0]-'0'<=9){

                    dist=stoi(distancia); //stoi convierte de string a entero
                    temp = camiones->vertices;

                    string aux1,aux2,aux3;

                    //TODO A MINUSCULAS

                    for(int i =0;i<parada1.length();i++)
                        aux1+=tolower(parada1[i]);

                    for(int i =0;i<parada2.length();i++)
                        aux2+=tolower(parada2[i]);

                    for(int i = 0;i<camiones->numero_vertices;i++){
                        aux3="";


                        for(int j =0;j<temp->getInfo().getNombre().length();j++)
                            aux3+=tolower(temp->getInfo().getNombre()[j]);

                            if(aux1.compare(aux3)==0)
                                inicio=temp;

                            if(aux2.compare(aux3)==0)
                                final=temp;

                        temp=temp->getNext();
                    }


                    if(!inicio){
                        cout << "No se encuentra la parada 1" << endl;
                    }
                    else if (!final){
                        cout << "No se encuentra la parada 2" << endl;
                    }
                    else{
                        camiones->insertarArista(dist, inicio, final);
                        camiones->insertarArista(dist, final, inicio);
                    }
                }
                else{
                    cout << "Esa distancia no es valida" << endl;
                }

            }
            break;

        case '5':
            {
                //BUSCAR RUTA MAS CORTA
                NodoV<Parada, float> * inicio=nullptr;
                NodoV<Parada, float> * final=nullptr;

                string aux1,aux2,aux3;


                cout << "Dame la primera parada: " << endl;
                    getline(cin,ini);
                                    getline(cin,ini);


                cout << "Dame la segunda parada: " << endl;
                    getline(cin,fin);

                temp = camiones->vertices;




                for(int i =0;i<ini.length();i++)
                    aux1+=tolower(ini[i]);
                for(int i =0;i<fin.length();i++)
                    aux2+=tolower(fin[i]);
                for(int i = 0;i<camiones->numero_vertices;i++){
                    aux3="";


                    for(int j =0;j<temp->getInfo().getNombre().length();j++)
                        aux3+=tolower(temp->getInfo().getNombre()[j]);
                    if(aux1.compare(aux3)==0)
                        inicio=temp;
                    if(aux2.compare(aux3)==0)
                        final=temp;
                    temp=temp->getNext();
                }



                if(!inicio){
                    cout << "No se encuentra la primera parada" << endl;
                }

                else if (!final){
                    cout << "No se encuentra la segunda parada" << endl;
                }

                else{
                    mejorRuta = camiones->Dijstra(inicio,final);

                    if(mejorRuta){

                        while(mejorRuta){
                            cout << *mejorRuta;

                            if(mejorRuta->getNext()==nullptr)
                                cout << " La distancia es: " << mejorRuta->distancia << endl;

                            temp = mejorRuta;
                            mejorRuta=mejorRuta->getNext();
                            delete temp;
                        }
                    }

                    else{

                        cout << "Rutas incompatibles"<< endl;
                    }
                }


            }
            break;

        case '6':
            cout << "Thank you, come again" << endl;
            break;
        default:
            cout << "Selecciona una opción del 1 al 6" << endl;
            break;
        }
    }


    return 0;
}








