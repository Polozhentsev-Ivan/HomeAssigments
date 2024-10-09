/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
second homework project
*/
#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
#include <string>
#include <sstream>
class Stack {
private:
    double* y;
    int top;
public:
    Stack(int size);
    ~Stack();
    void add(double x);
    double del();
    double take() const;
};
double calculator( const std::string & input);
#endif
