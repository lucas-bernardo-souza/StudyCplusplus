#include <iostream>

using namespace std;

int main() {
    // tipo nome;
    // tipo nome = valor;
    int vidas = 0;
    char letra = 'L';
    char letras[20]; // array
    double decimal = 5.2;
    float decimal2 = 5.2;
    bool vivo = true;
    string nome = "Lucas";

    cout << "Digite o numero de vidas: " << endl;
    cin >> vidas;
    cout << "Digite uma letra: " << endl;
    cin >> letra;
    cout << "Dinheiro: " << endl;
    cin >> decimal;
    cout << "Digite seu nome: " << endl;
    cin >> nome;

    cout << vidas << endl;
    cout << letra << endl;
    cout << decimal << endl;
    cout << decimal2 << endl;
    cout << vivo << endl;
    cout << nome << endl;

    system("pause");
    return 0;
}
