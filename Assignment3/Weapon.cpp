/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#include "Weapon.hpp"
Weapon::Weapon() : name("default"), ammo(10), damage(0) {}
Weapon::Weapon(const std::string& n, uint a, uint d) : 
    name(n), 
    ammo(a), 
    damage(d) 
{}
Weapon::~Weapon() {}
void Weapon::setName(const std::string& n)
{
    name = n;
}
std::string Weapon::getName() const
{
    return name;
}
uint Weapon::getAmmo() const
{
    return ammo;
}
void Weapon::setAmmo(uint a)
{
    ammo = a;
}
uint Weapon::getDamage() const
{
    return damage;
}
void Weapon::setDamage(uint d)
{
    damage = d;
}
