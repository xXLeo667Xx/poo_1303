//chamando a biblioteca
#include <iostream>
using namespace std;
//colocando uma variavel soma
int soma (int a, int b)
{
    //colocando uma variavel resultado
    int resultado;
    //equacao da variavel resultado
    resultado=a+b;
    //retorna a resultado so vai ser executada quando chamada e retorna a ela
    return resultado;
}//colocando uma variavel subt
int subt (int a, int b)
{//colocando uma variavel resultado
    int resultado;
    //equacao da variavel resultado
    resultado=a-b;
    //retorna a resultado so vai ser executada quando chamada e retorna a ela
    return resultado;
}//colocando uma variavel divi
int divi (int a, int b)
{//colocando uma variavel resultado
    int resultado;
    //equacao da variavel resultado
    resultado=a/b;
    //retorna a resultado so vai ser executada quando chamada e retorna a ela
    return resultado;
}//colocando uma variavel mult
int mult (int a, int b)
{//colocando uma variavel resultado
    int resultado;
    //equacao da variavel resultado
    resultado=a*b;
    //retorna a resultado so vai ser executada quando chamada e retorna a ela
    return resultado;
}
//colocndo a variavel principal
int main(){
    //variaveis para execucao dos outros recursos
    int a, b;
    //interface para o usuario colocar o valor
    cout<<"digite o valor de a: ";
    //valor integrado a essa variavel 
    cin>>a;
    //interface para o usuario colocar o valor
    cout<<"digite o valor de b: ";
    //valor integrado a essa variavel 
    cin>> b;
    //interfaces aonde mostrara o resultado de todas as equacoes a baixo que foram integradas com o valor a cima
   cout<<soma(a,b)<<endl;
   cout<<subt(a,b)<<endl;
   cout<<divi(a,b)<<endl;
   cout<<mult(a,b)<<endl;
}