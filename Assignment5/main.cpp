/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
fifth homework project
*/
#include <iostream>
#include <vector>
#include "Transformer.hpp"
#include "Autobot.hpp"
#include "Decepticon.hpp"

int main() 
{
    Autobot autobot1, autobot2, autobot3;
    Decepticon decepticon1, decepticon2, decepticon3;
    Transformer transformer1, transformer2, transformer3;

    std::cout << "Вызов напрямую:" << std::endl;
    autobot1.strike();
    autobot1.openFire();
    autobot1.ultraMove();

    decepticon1.strike();
    decepticon1.openFire();
    decepticon1.ultraMove();

    transformer1.strike();
    transformer1.openFire();
    transformer1.ultraMove();
    std::cout << "--------------------------" << std::endl;
    
    std::cout << "Вызов через родительский класс в цикле:" << std::endl;
    std::vector<Transformer*> transformers = {
        &autobot1, &autobot2, &autobot3,
        &decepticon1, &decepticon2, &decepticon3,
        &transformer1, &transformer2, &transformer3
    };

    // Call virtual methods via base class pointer
    for (const auto* transformer : transformers) {
        transformer->strike();
        transformer->openFire();
        transformer->ultraMove();
        std::cout << "--------------------------" << std::endl;
    }

    return 0;
}
