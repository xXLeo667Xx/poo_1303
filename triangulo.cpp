//chamando uma biblioteca
#include <iostream>
using namespace std;
//comecando nossas variavel
int main() {
    //intepretando as variaveis
    float base, altura, area;
    //interface do usuario da basi
    cout << "Digite a base do trangulo: ";
    //o valor digitado pelo usuario
    cin >> base;
    //interface do usuario da altura
    cout << "digite a altura do triangulo: ";
    //o valor digitado pelo usuario da altura
    cin >> altura;
    //o calculo usado para calcular a area
    area = (base * altura)/2;
    //mostrando o resutado do calculo
    cout << "A area do triangulo eh: " << area << endl;
    
    return 0;
}