/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#ifndef DINO_HPP
#define DINO_HPP
#include "Transformer.hpp"
class Dinosaur : public Transformer
{
private:
    std::string transformation;
    int karma;
    std::string current_state;
public:
    Dinosaur();
    Dinosaur( const std::string& n, uint sp, uint str, uint dur, Weapon w, int k);
    int getKarma() const;
    void setKarma(int k);
    std::string getTransformation() const;
    bool setTransformation(const std::string& tf);
    bool transformtoAlt();
    bool transformBack();
};
#endif
