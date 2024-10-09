/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
second homework project
*/
#include "stack.hpp"
Stack::Stack(int size){
    y = new double[size];
    top = -1;
}
Stack::~Stack(){
    delete[] y;
}
void Stack::add(double x){
    y[++top] = x;
}
double Stack::del(){
    return y[top--];
}
double Stack::take() const {
    return y[top];
}
