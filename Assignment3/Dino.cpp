/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#include "Dino.hpp"
Dinosaur::Dinosaur() : transformation(""), karma(0), current_state("car")
{
    fraction = "Dinosaur";
}
Dinosaur::Dinosaur(const std::string& n, uint sp, uint str, uint dur, Weapon w, int k) : 
    Transformer(n, sp, str, dur, w), 
    transformation("Dinosaur"), 
    karma(k), 
    current_state("car")
{
    fraction = "Dinosaur";
}
int Dinosaur::getKarma() const
{
    return karma;
}
void Dinosaur::setKarma(int k)
{
    karma = k;
}
std::string Dinosaur::getTransformation() const
{
    return transformation;
}
bool Dinosaur::setTransformation(const std::string& tf)
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
bool Dinosaur::transformtoAlt()
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
bool Dinosaur::transformBack()
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
