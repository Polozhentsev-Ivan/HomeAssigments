/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "Planet.hpp"
class Transformer {
protected:
    std::string name;
    uint speed;
    uint strength;
    uint durability;
    Weapon weapon; // композиция
    Planet* planet; // ассоциация
    std::string fraction;

public:
    Transformer();
    Transformer(const std::string& n, uint sp, uint str, uint dur, Weapon w);
    virtual ~Transformer();
    uint getSpeed() const;
    uint getDurability() const;
    uint getStrength() const;
    std::string getName() const;
    void setName(const std::string& n);
    void setSpeed(uint sp);
    void setStrength(uint str);
    void setDurability(uint dur);
    Weapon getWeapon() const;
    void setWeapon(Weapon w);
    Planet* getPlanet() const;
    void setPlanet(Planet* pl);
    
    bool block();
    bool shield();
    bool fire();
};
#endif
