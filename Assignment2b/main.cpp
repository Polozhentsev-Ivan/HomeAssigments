/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
second homework project
*/
#include "stack.hpp"
int main(){
    std::string input;
    std::cout << "Write your expression: ";
    std::getline(std::cin, input);
    double result = calculator(input);
    std::cout << "Result = " << result << std::endl;
}
