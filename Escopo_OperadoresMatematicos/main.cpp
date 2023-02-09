#include <iostream>
using namespace std;

// variaveis declaradas fora de funções possuem escopo global
int n1, n2; // Variaveis globais

int main() {

    // declarar variaveis dentro da função ela só é vista dentro dessa função
    // Dentro da função o escopo é local

    int n3, n4; // Variaveis locais
    // Operadores matemáticos: + - / * % ()
    int res, res1, res2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = n1 + n2 + n3 + n4;
    res1 = n1/n2;
    res2 = n1%n2;

    cout << "Soma de todas as variaveis: " << res << endl;
    cout << "Divisao: " << res1 << endl;
    cout << "Resto: " << res2 << endl;


    system("pause");
    return 0;
}
