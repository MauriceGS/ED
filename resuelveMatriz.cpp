#include <iostream>
#include <cstdlib>
using namespace std;
#define N 6


void imprimeMatriz(int);
int resuelveMatriz(int,int,int);



int main(int argc, const char * argv[]){

resuelveMatriz(0,0,N);
return 0;
}

void imprimeMatriz(int tam)
{
int t=1;

    for(int i=0;i<tam;i++){

        t = t* 2;
    }
    cout << t << " ";
}

int resuelveMatriz(int f,int c,int tam){

    if(c<tam){

        if(f<c){
            imprimeMatriz(f);
        }else{
            imprimeMatriz(c);
        }
        if(f<N-1){
            resuelveMatriz(f+1,c,tam);
        }else{
            cout << endl;
            resuelveMatriz(0,c+1,tam);
        }
    }
}





