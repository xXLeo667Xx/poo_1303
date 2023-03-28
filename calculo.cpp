//chamando uma biblioteca
#include<iostream>
using namespace std;

//comecando uma variavel
int main() {
    //as variaveis com numeros pre definidos
    int num1 = 10, num2 = 4;
    //as variaveis da esqucoes
    int soma, multi, divi, modulo, subt;

    //conta de mais
    soma = num1 + num2;
    //conta de vezes
    multi = num1 * num2;
    //conta de divizao
    divi = num1 / num2;
    //conta de porcentagem
    modulo = num1 % num2;
    //conta de menos
    subt = num1 - num2;

    //interface que aparecera os resultados das contas acima
    cout<<soma<<endl;
    cout<<multi<<endl;
    cout<<divi<<endl;
    cout<<modulo<<endl;
    cout<<subt<<endl;
    
    return 0;
}