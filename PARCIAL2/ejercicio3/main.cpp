
//pregunta 3



#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Stack.h"
#include "Nodo.h"
#include "LinkedList.h"
#include <Array>

using namespace std;

LinkedList<int> * listaA=new LinkedList<int>();
LinkedList<int> * listaB=new LinkedList<int>();
LinkedList<int> * listaC=new LinkedList<int>();


int main(){

int size;

using namespace vcn;

string expresion="{1,2,3,4}*{8,4,2,9}"

for(int i =1, i<expresion.size();i++){

	while(expresion[i]=!'}'){

		if(expresion[i]>0){

			listaA->insertLast(expresion[i]);



		}

	}
}



}


function union(){

for (int i=0; i<listaA->getSize();i++){


	if(listaA->getElementAt(i)->getInfo()==listaB->getElementAt(i)->getInfo)
}


}






/*

string evaluar(string);
bool operadores(char);

int main(){

LinkedList<char> * expresion= new LinkedList<char>();




cout << "Ingresa la expresion " << endl
string entrada;
getline(cin,entrada);
entrada=evaluar(entrada);
istringstream is(entrada);
string operador;

while (is>>operador){
	int number;
	if(istringstream(operador)>>number){
		Nodo<int>*n1=new Nodo<int>(number);
		expresion->insertLast(n1);
	}

	else
	{

		int oper=expresion->getElementAt(is);

		if(operador=='*'){
			
				

		}

		else if(operador=='+'){



		}


	}




}








}


bool operadores(char c)
{
	if (c == '+' ||c == '*' )
	{
		return true;
	}
	else
	{
		return false;
	}
}

*/
