#include <iostream>
#include<stdio.h>
using namespace std;
///*Jhoel Pallaroso*
main() 
{
    int num,r,div; 
    cout << "ingrese un nunmero:";
    cin>> num;
    cout << "ingresa numero divisor"; 
    cin >> div; 
    r = num% div; 
    if (r == 0){
        cout<< "El numero" <<num <<"es divisible para" <<div << endl;
    }
    else 
    {
        cout<< " El numero" <<num <<"no es divisible para" <<div << endl;

}