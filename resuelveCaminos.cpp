#include <iostream>
#include <cstdlib>
#define N 15
#define M 14

using namespace std;

int resuelveCaminos(int,int,int,int);

int main(int argc, const char * argv[])
{



//Opciones para ingresar el tamaño de la matriz
   // cout << "Cual es el valor de N ?" << endl;
    //cin >> N;

    //cout << "Cual es el valor de M ?" << endl;
    //cin >> M;

    cout <<"La cantidad de caminos posibles es: "<< resuelveCaminos(0,0,N,M);

    return 0;
}

int resuelveCaminos(int x,int y,int c,int f){

    if((x==c-1)&&(y==f-1)){

        return 1;
    }

    else{

        int caminos=0;

        if(x < c-3){

            caminos =caminos + resuelveCaminos(x+3,y,c,c);
        }
        if(y < f-2){

            caminos =caminos + resuelveCaminos(x,y+2,c,f);
        }

        return caminos;
    }
}