/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#include "Planet.hpp"
Planet::Planet() : name("Unknown"), population(0) {} 
Planet::Planet(const std::string& n) : name(n), population(0) {}
Planet::~Planet() {}
std::string Planet::getName() const {
    return name;
}
void Planet::setName(const std::string& n) {
    name = n;
}
uint Planet::getPopulation() const {
    return population;
}
void Planet::setPopulation(uint p) {
    population = p;
}  
