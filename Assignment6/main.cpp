/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
sixth homework project
*/
#include "Class1.hpp"
#include "Class2.hpp"
#include "Class3.hpp"
#include "Templ.hpp"
#include <iostream>

int main() {
    Templ<Class1> tpl1(5, {});
    std::cout << "Templ<Class1>(5, {}) foo(): " << tpl1.foo() << "\n";

    Templ<int> tplint(0, {});
    std::cout << "Templ<int>(0, {}) foo(): " << tplint.foo() << "\n";

    return 0;
}

