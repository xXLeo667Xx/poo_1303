//chamando uma blioteca
#include<iostream>
#include<stdlib.h>
using namespace std;

//colocando uma variavel
int main() {
    
    //colocando as variaveis
    double ac1, ac2, acf, nota1, nota2, nota3;
    //interface do usuario da nota da ac1
    cout << "digite a sua primeira nota da ac1 >>> ";
    //o valor definido para ac1
    cin >> ac1;
    //interface de usuario da nota ac2
    cout << "digite a sua segunda nota da ac2 >>> ";
    //o valor atribuido para ac2
    cin >> ac2;
    //interface de usuario da nota da af
    cout << "digite a sua terceira nota da af >>> ";
    // o valor atribuido a af
    cin >> acf;

    //equacoes para definir a notas de cada ac
    nota1 = ac1 * 0.15;
    nota2 = ac2 * 0.35;
    nota3 = acf * 0.50;
    
    //equacao da soma de todas as notas de cada ac
    double soma = (nota1 + nota2 + nota3);
    //o que aparecera para o usuario resultado da sua media
    cout << "a sua media no semestre foi: " << soma << endl << endl;
    //predefinindo um valor de quando precisa ser a media do semestre
    if(soma >= 5){
        //o que aparecera para o usuario caso sua nota conseguil a media do semestre
        cout << "parabens voce foi aprovado!" << endl;
    //predefinindo outra opcao
    }else{
        //o que aparecera para o usuario caso ele n tenha alcancado a media da soma
        cout << " eita! voce foi reprovado!" << endl;
    }
    return 0;
}
