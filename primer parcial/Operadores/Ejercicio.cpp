#include <iostream>
using namespace std; 
main(){
    //operadores relacionales 
    int a= 5,b=10 ; //Inicializo
    bool c = true, d = false;  
    cout<<"a > b: "<<(a > b) <<endl; 
    cout<<"a < b: "<<(a < b) <<endl; 
    cout<<"a >= b: "<<(a >= b) <<endl; 
    cout<<"a <= b: "<<(a <= b) <<endl; 
    cout<<"a == b: "<<(a == b) <<endl; 
    cout<<"a !=   b: "<<(a != b) <<endl;

    //Operadores logicos
    cout << "c && d:"<< boolalpha<< (c && d) <<endl; 
    cout << "c || d:"<< boolalpha<< (c || d) <<endl; 
    cout << "!c: "<< boolalpha<<(!c) <<endl;
    cout << "!d: "<< boolalpha<<(!d) <<endl;
    cout << "c && !d:"<< boolalpha<<(c && !d) <<endl; 
    cout << "c || !d:"<< boolalpha<<(c || !d) <<endl; 
    cout << "!c && d:"<< boolalpha<<(!c && d) <<endl; 
    cout << "!c || d:"<< boolalpha<<(c || d) <<endl;       
    return 0;           
}