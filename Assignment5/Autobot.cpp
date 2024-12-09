/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
fifth homework project
*/
#include "Autobot.hpp"
Autobot::Autobot() : transformation(""), karma(0), current_state("car")
{
    fraction = "Autobot";
}
Autobot::Autobot(const std::string& n, uint sp, uint str, uint dur, Weapon w, const std::string& tf, int k) :
    Transformer(n, sp, str, dur, w),
    transformation(tf),
    karma(k),
    current_state("car")
{
    fraction = "Autobot";
}
int Autobot::getKarma() const
{
    return karma;
}
void Autobot::setKarma(int k)
{
    karma = k;
}
std::string Autobot::getTransformation() const
{
    return transformation;
}
bool Autobot::setTransformation(const std::string& tf)
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
bool Autobot::transformtoAlt()
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
bool Autobot::transformBack()
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
bool Autobot::operator>(const Autobot& other) const
{
    double thisBattlePower = (strength + speed) * weapon.getDamage();
    double otherBattlePower = (other.strength + other.speed) * other.weapon.getDamage();
    return thisBattlePower > otherBattlePower;
}
bool Autobot::operator<(const Autobot& other) const
{
    return other < *this;
}
bool Autobot::operator==(const Autobot& other) const
{
    double thisBattlePower = (strength + speed) * weapon.getDamage();
    double otherBattlePower = (other.strength + other.speed) * other.weapon.getDamage();
    return thisBattlePower == otherBattlePower;
}
std::ostream& operator<<(std::ostream& os, const Autobot& a)
{
    os << static_cast<const Transformer&>(a)
       << ", Transformation: " << a.transformation
       << ", Karma: " << a.karma
       << ", Current State: " << a.current_state
       << ")";
    return os;
}
void Autobot::strike() const 
{
    std::cout << "Autobot strike()" << std::endl;
}
void Autobot::openFire() const 
{
    std::cout << "Autobot openFire()" << std::endl;
}
void Autobot::ultraMove() const 
{
    std::cout << "Autobot ultraMove()" << std::endl;
}
