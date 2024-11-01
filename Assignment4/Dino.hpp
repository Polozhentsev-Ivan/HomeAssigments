/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
fourth homework project
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
    bool operator>(const Dinosaur& other) const;
    bool operator<(const Dinosaur& other) const;
    bool operator==(const Dinosaur& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Dinosaur& d);
};
#endif
