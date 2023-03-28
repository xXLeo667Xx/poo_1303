//
#include <iostream>
using namespace std;
//
int main() {
    //
    char op;
    //
    float num1, num2;
    //
    cout << "entre com o operador: +, -, *, /: ";
    //
    cin >> op;
    //
    cout << "entre com dois valores: ";
    //
    cin >> num1 >> num2;
    //
    switch(op) {
        //
        case '+':
        //
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        //
        break;
        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
         case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        //
        default:
        //
        cout << "operador errado, porfavor insira o operador correto";
        break;
    }
    return 0;
}