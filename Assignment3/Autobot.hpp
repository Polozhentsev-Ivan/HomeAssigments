/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP
#include "Transformer.hpp"
class Autobot : public Transformer {
private:
    std::string transformation;
    int karma;
    std::string current_state;
public:
    Autobot();
    Autobot(const std::string& tf, int k, const std::string& n, uint sp, uint str, uint dur, Weapon w);
    int getKarma() const;
    void setKarma(int k);
    std::string getTransformation() const;
    bool setTransformation(const std::string& tf);
    bool transformtoAlt();
    bool transformBack();
};
#endif
