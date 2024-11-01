/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
fourth homework project
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
    Weapon(const std::string& name, uint d, uint a);
    ~Weapon();
    std::string getName() const;
    void setName(const std::string& n);
    uint getAmmo() const;
    void setAmmo(uint a);
    uint getDamage() const;
    void setDamage(uint d);
    bool operator>(const Weapon& other) const;
    bool operator<(const Weapon& other) const;
    bool operator==(const Weapon& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Weapon& w);
};
#endif
