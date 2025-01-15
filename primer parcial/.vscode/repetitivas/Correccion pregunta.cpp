#include <iostream>
using namespace std; 
main(){
    float b=1, x=0; 
    int a=2, signo =1; 
    char termin; 

    while (true)
    {
        cout << "Deseas agregar un valor a la serie (s/n)";
        cin >> term;
        
        if (term == 's' || term == 'S')
        {
            x = x+ (signo * (float(n/d)));
            cout << "\nUltimo termino aniadido a la serie" << endl;
            cout << "Numerador: " << n << " , " << "Denominador: " << d << endl;
            cout << "Es decir: " << n << "/" << d << endl;
            cout << "El resultado de la operacion es: " << x << endl;
            n = n + d;
            d = d + 2;
        }
        else if (term == 'n' || term == 'N')
        {
            x = x+((float(n/d)));
            cout << "El resultado de la operacion es: " << x << endl;
            break;
        }   
        signo = signo * -1;
    }
    
}   