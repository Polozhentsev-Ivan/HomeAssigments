/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#ifndef PLANET_HPP
#define PLANET_HPP
#include <iostream>
#include <string>
class Planet {
private:
    std::string name;
    uint population;

public:
    Planet();
    Planet(const std::string& n);
    ~Planet();
    uint getPopulation() const;
    void setPopulation(uint p);
    std::string getName() const;
    void setName(const std::string& n);
};
#endif
