#include <iostream>

using namespace std

int main(){
    float num1, num2;
    char operador;
    cout << "calculadora simples" << endl;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "digite o segundo numero: " << endl;
    cin >> num2;
    cout << "digite o operador (+;-;*;): " << endl;
    cin >> operador;
    
    switch (operador)
    {   case '+':
            cout << "resultado: " 
            num1 + num2 << endl;
            break;  
        case '-': 
            cout << "resultado: " 
            num1 - num2 << endl;
            break;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
        case '*':
            cout << "resultado: "
            num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0){
                cout << "resultado: " 
                num1 / num2 << endl;
            }default:
            break;
    }    
    return 0;
}