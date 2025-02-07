#include <iostream>
using namespace std; 
main(){
    int n1, n2, n3, auz;
    cout<< "Coloque el valor de n1: ", cin>>n1;  
    cout<< "Coloque el valor de n2: ", cin>>n2;  
    cout<< "Coloque el valor de n3: ", cin>>n3;

    cout<<"posicion inicial: \n "<<"primera " <<n1<<" segunda " <<n2<< " tercera "<<n3; 
    auz=n3; 
    n1=n2; 
    n2=auz;
    n3=n1; 
    cout<<"la posicion va cambiar\n"<<" primera " <<n1<<" segunda " <<n2<< " tercera "<<n3; 
    cout<<"Hola";
}    