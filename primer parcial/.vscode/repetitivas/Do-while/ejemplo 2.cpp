#include <iostream>
using namespace std; 
int main ()
{ 
    int op; 

    do
    {
        cout<<"Menu de opciones"<<endl; 
        cout<< "1 Abundantes"<<endl; 
        cout<< "2 Deficientes"<<endl; 
        cout<< "3 Amigos"<<endl; 
        cout<< "4 Salir"<<endl; 
        cout<< "Ingresar una opcion:";
        cin>>op;

    } while (op<1||op>4);
    switch (op)
    {
        case 1:
        cout<<"Abundantes"<<endl;
        break; 
        case 2:
        cout<<"Deficientes"<<endl;
        break;
        case 3: 
        cout<<"Amigos"<<endl;
        break; 
        case 4: 
        cout<< "Abandonar programa"<<endl;
        break;
    default:
    cout<<"Hubo problemas en el ingreso de datos"<<endl;
    break;     
    }
    system ("pause");
    system ("cls");
     
    return 0; 
}
