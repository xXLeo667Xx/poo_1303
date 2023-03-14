//chamando uma biblioteca
#include <iostream>
using namespace std;
//colocar minhas variavel
int main() {
    //variaveis
    float a, b, c;
    //interface do usurario
    cout << "Digite o valor de a: ";
    //digito do usuario
    cin >> a;
    //interface do usuario
    cout << "digite o valor de b: ";
    //digito do usuario
    cin >> b;
    //calculo
    c = (2 * b) + (2 * a)/2;
    //resultado do calculo
    cout << "o valor da hipotenusa eh: " << c << endl;
    
    return 0;
}