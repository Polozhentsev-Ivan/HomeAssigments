/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"
Class Transformer{
protected:
    std::string name;
    uint speed;
    uint strength;
    uint durability;
    Weapon weapon; // композиция
    Planet* planet; // ассоциация

public:
    Transformer();
    Transformer(std::string n, uint sp, uint str, uint dur, Weapon w);
    virtual ~Transformer();
    uint Getspeed();
    uint Getdurability();
    uint Getstrength();
    std::string Getname();
    void SetName(std::string n);
    void Setspeed(uint sp);
    void Setstrength(uint str);
    void Setdurability(uint dur);
    
    bool block();
    bool shield();
    bool fire();
};
#endif
