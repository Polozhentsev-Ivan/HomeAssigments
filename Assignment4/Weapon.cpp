/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
fourth homework project
*/
#include "Weapon.hpp"
Weapon::Weapon() : name("default"), damage(1), ammo(0) {}
Weapon::Weapon(const std::string& n, uint d, uint a) :
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
bool Weapon::operator>(const Weapon& other) const
{
    double thisWeaponPower = damage * ammo;
    double otherWeaponPower = other.damage * other.ammo;
    return thisWeaponPower > otherWeaponPower;
}
bool Weapon::operator<(const Weapon& other) const
{
    return other < *this;
}
bool Weapon::operator==(const Weapon& other) const
{
    double thisWeaponPower = damage * ammo;
    double otherWeaponPower = other.damage * other.ammo;
    return thisWeaponPower == otherWeaponPower;
}
std::ostream& operator<<(std::ostream& os, const Weapon& w)
{
    os << "Weapon(Name: " << w.name
       << ", Damage: " << w.damage
       << ", Ammo: " << w.ammo
       << ")";
    return os;
}
