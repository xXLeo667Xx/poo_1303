#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    
    double ac1, ac2, af, nota1, nota2, nota3;
    cout << "digite a sua primeira nota da ac1 >>> ";
    cin >> ac1;
    cout << "digite a sua segunda nota da ac2 >>> ";
    cin >> ac2;
    cout << "digite a sua terceira nota da af >>> ";
    cin >> af;
    nota1 = ac1 * 0.15;
    nota2 = ac2 * 0.35;
    nota3 = af * 0.50;
    
    double soma = (nota1 + nota2 + nota3);
    cout << "a sua media no semestre foi: " << soma << endl << endl;
    if(soma >= 5){
        cout << "parabens voce foi aprovado!" << endl;
    }else{
        cout << " eita! voce foi reprovado!" << endl;
    }
    return 0;
}