//
// Created by lucas.bernardo on 10/02/2023.
//

#ifndef UNTITLED1_VEICULO_H
#define UNTITLED1_VEICULO_H
#include <string>

class Veiculo {
public:
    int vel;
    int tipo;
    Veiculo(int tp);
    int getVelMax();
    bool getLigado();
    void setLigado(int l);
private:
    void setVelMax(int velMax);
    std::string nome;
    int velMax;
    bool ligado;
};

int Veiculo::getVelMax(){
    return velMax;
}

void Veiculo::setVelMax(int velMax){
    this->velMax = velMax;
}

void Veiculo::setLigado(int l){
    if(l == 1){
        ligado == true;
    }else if(l == 0){
        ligado = false;
    }
}

bool Veiculo::getLigado(){
    return ligado;
}

Veiculo::Veiculo(int tp){ // tipo 1 = carro, 2 = aviao 3 = navio
    tipo=tp;
    if(tipo == 1){
        nome = "Carro";
        velMax = 200;
    } else if(tipo == 2){
        nome = "Aviao";
        velMax = 800;
    } else if(tipo == 3){
        nome = "Navio";
        velMax = 120;
    }
}


#endif //UNTITLED1_VEICULO_H
