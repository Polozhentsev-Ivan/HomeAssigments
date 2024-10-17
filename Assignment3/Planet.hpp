/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#ifndef PLANET_HPP
#define PLANET_HPP
#include <iostream>
#include <string>
Class Planet{
private:
    std::string name;
    uint population;

public:
    Planet();
    Planet(std::string n);
    ~Planet();
    uint Getpopulation();
    void Setpopulation(uint p);
    std::string Getname();
    void Setname(std::string n);
};
#endif
