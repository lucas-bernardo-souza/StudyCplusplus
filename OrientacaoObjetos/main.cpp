#include <iostream>

using namespace std;

class Aviao{

public:
    int vel = 0;
    int velMax;
    string tipo;

    void ini(int tp); // aqui dentro é declarado somente o prototipo do metodo
};
// Implementação do metodo em si
void Aviao::ini(int tp){
    //1=jato 2=monomotor 3=planador
    if(tp==1){
        this->velMax=800;
        this->tipo = "Jato";
    } else if(tp == 2){
        this->velMax = 350;
        this->tipo = "Monomotor";
    } else if(tp == 3){
        this->velMax = 180;
        this->tipo = "Planador";
    }
}

int main() {
    // Declarando um objeto
    Aviao *av1 = new Aviao(); // objetos temos que declarar como ponteiro
    Aviao *av2 = new Aviao();
    Aviao *av3 = new Aviao();

    av1->ini(1);
    av2->ini(2);
    av3->ini(3);

    // Exibindo conteudo dos atributos do av1
    cout << av1->vel << endl;
    cout << av1->velMax << endl;

    // Exibindo conteudo dos atributos do av2
    cout << av2->vel << endl;
    cout << av2->velMax << endl;

    // Exibindo conteudo dos atributos do av3
    cout << av2->vel << endl;
    cout << av2->velMax << endl;
    return 0;
}
