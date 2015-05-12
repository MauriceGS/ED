#include <iostream>

using namespace std;

float sierpinski(float n);

int main()
{
    float N,n;
    cout<<"DEFINA EL TAMAÑO DE N"<<endl;

    cin>>N;

    cout<<"Cuantas iteraciones?"<<endl;
    cin>>n;

    for(float i=0;i<n;++i){
        sierpinski(n);
    }



    return 0;
}
float sierpinski(float n){

     float c1=n/9;
     float c2=n/9;
     float c3=n/9;
     float c4=n/9;
     float c5=n/9;
     float c6=n/9;
     float c7=n/9;
     float c8=n/9;
     float c9=n/9;

     for(int i=0;i<9;++i){

     float c1=sierpinski(n);
     cout<<c1;
     float c2=sierpinski(n);
     cout<<c2;
     float c3=sierpinski(n);
     cout<<c3;
     float c4=sierpinski(n);
     cout<<c4;
     float c5=sierpinski(n);
     cout<<c5;
     float c6=sierpinski(n);
     cout<<c6;
     float c7=sierpinski(n);
     cout<<c7;
     float c8=sierpinski(n);
     cout<<c8;
     float c9=sierpinski(n);
     cout<<c9;
     }
 }
