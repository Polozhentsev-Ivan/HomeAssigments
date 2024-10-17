#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP
#include <iostream>
#include <string>
Class Weapon{
private:
    std::string name;
    uint damage;
    uint ammo;

public:
    Weapon();
    Weapon(std::string name, uint n, uint d);
    ~Weapon();
    std::string Getname();
    void Setname(std::string n);
    int Getammo();
    void Setammo(uint a);
    int Getdamage();
    void Setdamage(uint d);
};
#endif
