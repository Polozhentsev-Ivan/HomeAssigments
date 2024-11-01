/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
fourth homework project
*/
#include "Decepticon.hpp"
Decepticon::Decepticon() : transformation(""), karma(0), current_state("car")
{
    fraction = "Decepticon";
}
Decepticon::Decepticon(const std::string& n, uint sp, uint str, uint dur, Weapon w, const std::string& tf, int k) :
    Transformer(n, sp, str, dur, w),
    transformation(tf),
    karma(k),
    current_state("car")
{
    fraction = "Decepticon";
}
int Decepticon::getKarma() const
{
    return karma;
}
void Decepticon::setKarma(int k)
{
    karma = k;
}
std::string Decepticon::getTransformation() const
{
    return transformation;
}
bool Decepticon::setTransformation(const std::string& tf)
{
    if (transformation != "car")
    {
        std::cout << "Firstly, you need transform into car (Transformback)" << std::endl;
        return false;
    }
    else
    {
        transformation = tf;
        return true;
    };
}
bool Decepticon::transformtoAlt()
{
    if (current_state != "car")
    {
        std::cout << "You already has transformed" << std::endl;
        return false;
    }
    else
    {
        current_state = transformation;
        return true;
    };
}
bool Decepticon::transformBack()
{
    if (current_state == "car")
    {
        std::cout << "You are not transformed" << std::endl;
        return false;
    }
    else
    {
        current_state = "car";
        return true;
    };
}
bool Decepticon::operator>(const Decepticon& other) const
{
    double thisBattlePower = (strength + speed) * weapon.getDamage();
    double otherBattlePower = (other.strength + other.speed) * other.weapon.getDamage();
    return thisBattlePower > otherBattlePower;
}
bool Decepticon::operator<(const Decepticon& other) const
{
    return other < *this;
}
bool Decepticon::operator==(const Decepticon& other) const
{
    double thisBattlePower = (strength + speed) * weapon.getDamage();
    double otherBattlePower = (other.strength + other.speed) * other.weapon.getDamage();
    return thisBattlePower == otherBattlePower;
}
std::ostream& operator<<(std::ostream& os, const Decepticon& d)
{
    os << static_cast<const Transformer&>(d)
       << ", Transformation: " << d.transformation
       << ", Karma: " << d.karma
       << ", Current State: " << d.current_state
       << ")";
    return os;
}
