 //chamar uma biblioteca
#include <iostream>
using namespace std;
//variavel principal
int main() {
    //ultilizado para a repeticao caso aconteca
    char resposta;
    //uma variavel para repticao caso queire 
    do  {
        //variavel quebrada
        float num1, num2;
        //uma variavel com muitas repostas
        char op;
  
    //interface de usuario 
    cout << "entre com o operador: +, -, *, /: ";
    //valor atribuido a variavel 
    cin >> op;
    //interface de usuario 
    cout << "entre com dois valores: ";
    //valor atribuido a variavel 
    cin >> num1 >> num2;
    //para definir mais e uma valor a uma variavel 
    switch(op) {
        //uma dos valor atribuido a variavel op
        case '+':
        //interface de usuario do valor atribuido
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        //caso achou o valor correto para aqui 
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
        //caso n tenha colocado nenhum desses variavel 
        default:
        cout << "operador errado, porfavor insira o operador correto";
        break;
    }
        //interface de usuario de repeticao
        cout << "deseja fazer outro calculo? (S/N)";
        //valor atribuido a variavel de repeticao 
        cin >> resposta;
        //repeticao caso caia esses valores iguais 
    }while (resposta == 's' || resposta == 'S');
    
    return 0;
}