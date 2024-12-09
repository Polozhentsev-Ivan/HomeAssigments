/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
fifth homework project
*/
#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP
#include "Transformer.hpp"
class Decepticon : public Transformer
{
private:
    std::string transformation;
    int karma;
    std::string current_state;
public:
    void strike() const override;
    void openFire() const override;
    void ultraMove() const override;
    Decepticon();
    Decepticon(const std::string& n, uint sp, uint str, uint dur, Weapon w, const std::string& tf, int k);
    int getKarma() const;
    void setKarma(int k);
    std::string getTransformation() const;
    bool setTransformation(const std::string& tf);
    bool transformtoAlt();
    bool transformBack();
    bool operator>(const Decepticon& other) const;
    bool operator<(const Decepticon& other) const;
    bool operator==(const Decepticon& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& d);
};
#endif
