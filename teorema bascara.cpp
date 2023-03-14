//chamando uma biblioteca
#include <iostream>
//outra biblioteca
#include <cmath>
using namespace std;
//colocar minhas variavel
int main() {
    //variaveis
    float a, b, c, x1, x2, delta;
    //interface do usurario
    cout << "Digite o valor de a: ";
    //digito do usuario
    cin >> a;
    //interface do usuario
    cout << "digite o valor de b: ";
    //digito do usuario
    cin >> b;
    //interface do usuario
    cout << "digita o valor de c: ";
    //digito do usuario
    cin >> c;
    //calculo
    delta = pow(b, 2) -4 * a * c;
    // o outro calculo usado o delta
    if (delta >=0){
        //calculo do +
        x1 = (-b + sqrt(delta))/(2 * a);
        //calculo do -
        x2 = (-b - sqrt(delta))/(2 * a);
        //conclucao da equacao
        cout << "as raizes da equacao sao: "<< x1 << " e "<< x2 << endl;
    }
    //para outra varacao de conclucao
    else {
        // a variacao de conclucao
        cout << "a equacao nao tem raizes reais." << endl;
    }
    
    return 0;
}