#include<iostream>
using namespace std; 
int mayor (int a, int b);
float promedio (int a, int b);

int main(){
    int n1, n2, hora           ;
    cout<< "ingrese dos numeros: ";
    cin>> n1>>n2;
    cout<< "El mayor es:" <<mayor(n1,n2)<<endl; 
    cout<< "El promedio es:" <<promedio(n1,n2)<<endl; 
    saludo(hora);
}
int mayor (int a, int b){
    if (a, b)
        return a;
    else
        return b; 
}

float promedio(int a, int b)
{
    return (a+b)/ 2.0;
}
void saludo (int hora)
{
    if (hora<12)
        cout<<"Buenos dias"<<endl; 
    else if (hora<19)
        cout<<"buenas tardes"<<endl;
    else if (hora<19)
        cout<<"buenas noches"<< endl; 
}