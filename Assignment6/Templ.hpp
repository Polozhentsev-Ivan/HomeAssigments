/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
sixth homework project
*/
#ifndef TEMPL_HPP
#define TEMPL_HPP

#include <vector>

template <typename T>
class Templ {
    T obj_;
    int number_;
    std::vector<float> vec_;
public:
    Templ(int n, const std::vector<float>& v)
        : obj_(), number_(n), vec_(v) {}
    bool foo() {
        return obj_.bar(number_, vec_);
    }
};

template <>
class Templ<int> {
    int obj_;
    int number_;
    std::vector<float> vec_;
public:
    Templ(int n, const std::vector<float>& v)
        : obj_(0), number_(n), vec_(v) {}
    bool foo() {
        return true;
    }
};

template <>
class Templ<double> {
    double obj_;
    int number_;
    std::vector<float> vec_;
public:
    Templ(int n, const std::vector<float>& v)
        : obj_(0.0), number_(n), vec_(v) {}
    bool foo() {
        return false;
    }
};

#endif
