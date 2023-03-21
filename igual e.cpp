#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int c = 15;
    
    if (a < b && b < c) {
        cout << "a ordem é: a, b, c" << endl;
    }
    if (a > b || b > c) {
        cout << "pelo menos uma das condicoes é verdadeira" << endl;
    }
    if (!(a == b)) {
        cout << "a é diferente de b" << endl;
    }
    return 0;
}