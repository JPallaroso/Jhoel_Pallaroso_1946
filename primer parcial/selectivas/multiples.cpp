#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char operacion;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "Ingrese la operación a realizar (+, -, *, /): ";
    cin >> operacion;

    switch (operacion)
    {
        case '+':
            cout << "El total al sumar los dos valores es: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "El total al restar los dos valores es: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "El total al multiplicar los dos valores es: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "No se puede dividir entre cero." << endl;
            }
            else
            {
                cout << "El total de la division es: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Operación no válida. Por favor ingrese una operación correcta (+, -, *, /)." << endl;
            break;
    }

    return 0;
}
