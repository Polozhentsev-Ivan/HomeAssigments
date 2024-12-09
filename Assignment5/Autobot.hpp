/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
fifth homework project
*/
#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP
#include "Transformer.hpp"
class Autobot : public Transformer
{
private:
    std::string transformation;
    int karma;
    std::string current_state;
public:
    void strike() const override;
    void openFire() const override;
    void ultraMove() const override;
    Autobot();
    Autobot(const std::string& n, uint sp, uint str, uint dur, Weapon w, const std::string& tf, int k);
    int getKarma() const;
    void setKarma(int k);
    std::string getTransformation() const;
    bool setTransformation(const std::string& tf);
    bool transformtoAlt();
    bool transformBack();
    bool operator>(const Autobot& other) const;
    bool operator<(const Autobot& other) const;
    bool operator==(const Autobot& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Autobot& a);
};
#endif
