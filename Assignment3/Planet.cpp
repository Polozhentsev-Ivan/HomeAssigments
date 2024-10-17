/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#include "Planet.hpp"
Planet::Planet() : name("Unknown"), population(0) {} 
Planet::Planet(std::string n) : name(n), population(0) {}
Planet::~Planet() {}
std::string getName(){
    return name;
}
void setName(std::string n){
    name = n;
}
uint getpopulation(){
    return population;
}
void setpopulation(uint p){
    ++population;
}  
