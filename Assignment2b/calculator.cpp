#include "stack.hpp"
int calculator( const std::string & input){
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
            stack.add(std::stoi(tk));
        } else {
            int a = stack.del();
            int b = stack.del();
            
            if (tk == "+"){
                stack.add(a + b);
            } else if (tk == "-"){
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

