#include <iostream>
using namespace std; 
int main ()
{
    int n, dato, contador, s;
    cout<<"ingrese el dato que desee ";
    cin>> n; 
    contador = 0; 
    s=0;
    while (contador<n)
    {
        cout <<"ingresa el valor: ";
        cin>> dato; 
        contador++; 
        s=s + dato; 
    }
    cout<< "la suma de"<< n << "valores" << "="<< s;
}
