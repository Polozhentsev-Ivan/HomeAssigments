/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP
#include "Transformer.hpp"
class Decepticon : public Transformer {
private:
    std::string transformation;
    int karma;
    std::string current_state;
public:
    Decepticon();
    Decepticon(const std::string& tf, int k)
    int getKarma() const;
    void setKarma(int k);
    std::string getTransformation() const;
    bool setTransformation(const std::string& tf);
    bool transformtoAlt();
    bool transformBack();
};
#endif
