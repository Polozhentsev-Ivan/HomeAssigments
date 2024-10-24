#include <iostream>
#include "Transformer.cpp"

int main() {
    Transformer transformer();
    std::cout<<transformer.getName()<<std::endl;
    std::cout<<transformer.getWeapon().getName() << std::endl;
    return 0;
}
    
