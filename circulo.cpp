//chamando uma biblioteca
#include <iostream>
using namespace std;
//colocar minhas variavel
int main() {
    //variaveis
    float raio, area;
    conts float PI = 3.14159;
    //interface do usurario
    cout << "Digite o raio do circulo: ";
    //digito do usuario
    cin >> raio;
    //calculo
    area = PI * raio;
    //resultado do calculo
    cout << " a area do circulo eh: " << area << endl;
    
    return 0;
}