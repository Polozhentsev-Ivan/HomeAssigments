/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#include "Planet.hpp"
Planet::Planet() : name("Unknown"), population(0) {} 
Planet::Planet(std::string n) : name(n), population(0) {}
Planet::~Planet() {}
std::string Getname(){
    return name;
}
void Setname(std::string n){
    name = n;
}
uint Getpopulation(){
    return population;
}
void Setpopulation(uint p){
    ++population;
}  
