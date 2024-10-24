/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#include "Transformer.hpp"
Transformer::Transformer() : name("unnamed"), fraction("none"), speed(0), strength(0), durability(0), weapon(Weapon()), planet(nullptr) {}
Transformer::Transformer(const std::string& n, uint sp, uint str, uint dur, Weapon w) : name(n), fraction("none"), speed(sp), strength(str), durability(dur), weapon(w), planet(nullptr) {}
Transformer::~Transformer() {}
uint Transformer::getSpeed() const {
    return speed;
}
uint Transformer::getDurability() const {
    return durability;
}
uint Transformer::getStrength() const {
    return strength;
}
std::string Transformer::getName() const {
    return name;
}
void Transformer::setName(const std::string& n) {
    name = n;
}
void Transformer::setSpeed(uint sp) {
    speed = sp;
}
void Transformer::setStrength(uint str) {
    strength = str;
}
void Transformer::setDurability(uint dur) {
    durability = dur;
}
Weapon Transformer::getWeapon() const {
    return weapon;
}
Planet* Transformer::getPlanet() const {
    return planet;
}
void Transformer::setWeapon(Weapon w) {
    weapon = w;
}
void Transformer::setPlanet(Planet* pl) {
    if (planet == nullptr) {
        planet = pl;
        planet -> setPopulation(planet->getPopulation() + 1);
    } else {
        planet -> setPopulation(planet->getPopulation() - 1);
        planet = pl;
        planet -> setPopulation(planet->getPopulation() + 1);
    };
}
bool Transformer::block() {
    return true;
}
bool Transformer::shield() {
    return true;
}
bool Transformer::fire() {
    if (weapon.getAmmo() !=0) {
        weapon.setAmmo(weapon.getAmmo()-1);
        return true;
    } else {
        std::cout << "No ammo in weapon"<<std::endl;
        return false;
    };
}
