/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>
class Weapon
{
private:
    std::string name;
    uint damage;
    uint ammo;

public:
    Weapon();
    Weapon(const std::string& name, uint a, uint d);
    ~Weapon();
    std::string getName() const;
    void setName(const std::string& n);
    uint getAmmo() const;
    void setAmmo(uint a);
    uint getDamage() const;
    void setDamage(uint d);
};
#endif
