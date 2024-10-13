/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
second (a) homework project
*/
#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>
#include <fstream>
#include <filesystem>
#include <algorithm>

/* Глобальные переменные это почти всегда плохо, особенно в C++. Они могут приводить
 * к побочным эффектам, их порядок инициализации в нескольких файлах неопределен, их можно
 * изменить откуда угодно, параллельное программирование сильно усложняется. Не используй короче */
std::uintmax_t Fsize;
const char* F_in;
const char* F_out;

#endif
