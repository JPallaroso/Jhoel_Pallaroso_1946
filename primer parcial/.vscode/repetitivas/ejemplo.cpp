#include <iostream>
using namespace std; 
int main()
{
    int valor, promedio=0, contador=0; 
    char op; 's';
    bool bandera = false;
    while(bandera){
        cout<<"deseas ingresar valores <<S>> <<N>>: ";
        op = getchar();
        if(true) {
            cout<<"ingresar un valor: ";
            cin>> valor; 
            contador++;
            promedio = promedio + valor; 
        }
        else
        {
            break;  
        }
        cin.ignore(); 
    }
    cout<<"El promedio de datos ingresados es" <<((float)promedio/contador)<<endl; 
    return 0;
}   