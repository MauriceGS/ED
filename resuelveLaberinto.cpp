
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;
#define X 6
#define Y 6
#define TRUE 1
#define FALSE 0
void creaLaberinto(int m[X][Y]);
int resuelveLaberinto(int,int);
int matriz[X][Y] = {0};


int main(int argc, const char * argv[])
{
srand (time(NULL));


int tam=X;

//Construye un laberinto de tamaño N el cual consiste de 1s y 0s
for (int i = 0; i < X; ++i) {
	
	for (int j = 0; j < Y; ++j) {
		matriz[i][j] = rand() % 2;
								}
							}
creaLaberinto(matriz);

		if (resuelveLaberinto(0, 0) == TRUE ){
	        cout<<"El laberinto se puede completar"<<endl;
										}
    	else
	        cout<<"El laberinto no se puede completar"<<endl;





return 0;
}




void creaLaberinto(int m[X][Y])
{
			for (int i = 0; i < X; ++i) {
						for (int j = 0; j < Y; ++j) {
					cout << m[i][j] << "\t";
}
cout <<endl;
}
}






int resuelveLaberinto(int x, int y){

    if ( x < 0 || x > Y - 1 || y < 0 || y > X - 1 ) return FALSE; // Es el base case del laberinto, cuando mi función salga del laberinto regresará falso
	 
	    if ( matriz[y][x] == matriz[X-1][Y-1]) return TRUE;// indica que terminó el laberinto
	 
	    if ( matriz[y][x] != 0 ) return FALSE; //Si el valor es diferente de 0, el camino está cerrado
	 
	   
	 
	    if ( resuelveLaberinto(x, y - 1) == TRUE ) return TRUE;//revisa el camino de arriba
	 
	    if ( resuelveLaberinto(x + 1, y) == TRUE ) return TRUE;//revisa el camino de la derecha
	 
	    if ( resuelveLaberinto(x, y + 1) == TRUE ) return TRUE;//revisa el camino de abajo
	 
	    if ( resuelveLaberinto(x - 1, y) == TRUE ) return TRUE;//revisa el camino de la izquierda
	 
	 
	    return FALSE;

}



