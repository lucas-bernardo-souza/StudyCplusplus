#include <iostream>
#include "Veiculo.h"

int main() {
    Veiculo *carro = new Veiculo(1);
    Veiculo *aviao = new Veiculo(2);
    Veiculo *navio = new Veiculo(3);

    carro->setLigado(1);
    aviao->setLigado(1);
    navio->setLigado(1);

    std::cout << carro->getVelMax() << std::endl;
    std::cout << aviao->getVelMax() << std::endl;
    std::cout << navio->getVelMax() << std::endl;


    return 0;
}
