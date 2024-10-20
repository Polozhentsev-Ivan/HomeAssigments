/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
third homework project
*/
#include "Autobot.hpp"
Autobot::Autobot() : transformation(""), karma(0), current_state("car") {
    fraction = "Autobot";
}
Autobot::Autobot(const std::string& tf, int k, const std::string& n, uint sp, uint str, uint dur, Weapon w) : Transformer(n, sp, str, dur, w), transformation(tf), karma(k), current_state("car") {
    fraction = "Autobot";
}
int Autobot::getKarma() const {
    return karma;
}
void Autobot::setKarma(int k) {
    karma = k;
}
std::string Autobot::getTransformation() const {
    return transformation;
}
bool Autobot::setTransformation(const std::string& tf) {
    if (transformation != "car") {
        std::cout << "Firstly, you need transform into car (Transformback)" << std::endl;
        return false;
    } else {
        transformation = tf;
        return true;
    };
}
bool Autobot::transformtoAlt() {
  if (current_state != "car") { 
        std::cout << "You already has transformed" << std::endl;
        return false;
    } else {
        current_state = transformation;
        return true;
    };
}  
bool Autobot::transformBack() {
  if (current_state == "car") {
        std::cout << "You are not transformed" << std::endl;
        return false;
    } else {
        current_state = "car";
        return true;
    };
}  
