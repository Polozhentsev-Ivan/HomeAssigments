/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
second homework project
*/
#include "stack.hpp"
double calculator( const std::string & input){
    int len = 0;
    std::istringstream iss(input);
    std::string tk;
    while (iss >> tk) { 
        ++len;
    }
    Stack stack(len);
    iss.clear();
    iss.seekg(0);
    while (iss >> tk){
        if (isdigit(tk[0])){
            stack.add(std::stod(tk));
        } else {
            double b = stack.del();
            double a = stack.del();
            
            if (tk == "+"){
                stack.add(a + b);
            } else if (tk == "-"){
                // Минус еще и унарный бывает
                stack.add(a - b);
            } else if (tk == "*"){
                stack.add(a * b);
            } else if (tk == "/"){
                stack.add(a / b);
            }
        }
    }
    return stack.take();
} 

