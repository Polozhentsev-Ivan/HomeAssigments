#include <stack.hpp>
Stack::Stack(int size){
    y = new int[size]
    top = -1
}
Stack::~Stack(){
    delete[] y;
}
void Stack::add(int x){
    y[++top] = x;
}
int Stack::del(){
    return y[top--];
}
int Stack::take() const {
    return y[top];
}
