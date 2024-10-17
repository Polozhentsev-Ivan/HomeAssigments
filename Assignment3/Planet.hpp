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
uint getpopulation();
void setpopulation(uint p);
std::string getName();
void setName(std::string n);
};
#endif
