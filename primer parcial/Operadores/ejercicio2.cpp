//uso del operador ternario
#include <iostream>
using namespace std; 
int main( )
{
    int n1, n2, resultado; 
    bool operacion;
    cout <<"ingrese un numero: ";
    cin>> n1; 
    cout <<"ingrese un numero: ";
    cin>> n2; 
    cout <<"1era forma:"<<endl; 
    (n1<n2)? cout<<n1<<" es mayor que"<<n2:cout<<n2<<  "es maryor que" <<n1;
    cout<< "2da forma: "<<endl;
    resultado= (n1<n2)?n1/n2:n1%n2; 
    cout<<"El resultado es:" <<resultado<<endl; 
    operacion = (n1>n2)?true:false; 
    if(operacion)
    {
    cout<<"el resultado guarda la division de" <<n1<< "entre" <<n2<< endl;  
    }
    else
    {
     cout<< "El resultado guarda el modilo de"<< n1<< "emtre" <<n2 << endl; 
     }
     return 0; 
    }
    