#include <iostream>
#define GRAVITY 9.8                            
using namespace std;
main() 
{
    const int altura= 25; 
    const float pi= 3.1416; 
    const char letra = 'a';
    const string palabra = "adios mundo";
    enum colores {verde, naranja, cafe}; 
    cout<< "lasconstantes definidas son:\n";
    cout<<"altura ="<<altura<<endl; 
    cout<<"pi ="<<pi<<endl;
    cout<<"letra ="<<letra<<endl; 
    cout<<"palabra ="<<palabra<<endl;
    cout<<"verde ="<<verde<<endl; 
    cout<<"naranja ="<<naranja<<endl; 
    cout<<"cafe ="<<cafe<<endl; 
    cout<<"la gravedad es"<<GRAVITY<<endl; 

    return 0; 

}