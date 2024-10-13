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
/* Ладно, это не совсем pop, он только удаляет без возврата значения. 
 * Так сделано, потому что между удалением и возвратом может случиться
 * исключение, тогда мы удалим элемент, но необязательно сможем его получить
 * а значит потеряем данные. Поэтому лучше разбивать это на pop + top */
double Stack::del(){
    return y[top--];
}
double Stack::take() const {
    return y[top];
}
