/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#include "Weapon.hpp"
Weapon::Weapon() : name("default"), ammo(10), damage(0) {}
Weapon::Weapon(std::string n, uint a, uint d) : name(n), ammo(a), damage(d){}
Weapon::~Weapon() {}
void Setname(std::string n){
    name = n;
}
stg::string Getname(){
    return name;
}
int Getammo(){
    return ammo;
}
void Setammo(uint a){
    ammo = a;
}
int Getdamage(){
    return damage;
}
void Setdamage(uint d){
    damage = d;
}
