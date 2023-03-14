//chamando uma biblioteca
#include <iostream>
using namespace std;
//colocar minhas variavel
int main() {
    //variaveis
    float base, altura, area;
    //interface do usurario
    cout << "Digite a base do triangulo retangulo: ";
    //digito do usuario
    cin >> base;
    //interface do usuario
    cout << "digite a altura do triangulo retangulo: ";
    //digito do usuario
    cin >> altura;
    //calculo
    area = (base * altura)/2;
    //resultado do calculo
    cout << "A area do triangulo retangulo eh: " << area << endl;
    
    return 0;
}