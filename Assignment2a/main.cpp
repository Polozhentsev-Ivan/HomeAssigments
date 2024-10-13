/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
second (a) homework project
*/
#include "header.hpp"
 /* В main не должна находиться внутренняя логика программы, это нужно разбивать на функции и классы */
int main(){
    const char* F_in = "source.pdf";
    const char* F_out = "temppdf.pdf";
    std::uintmax_t Fsize = std::filesystem::file_size(F_in);
    std::ifstream infile(F_in, std::ios::binary|std::ios::in);
     /* Если у тебя будет много такого, то не сможешь уследить за всей выделенной памятью, поэтому
     * следует научиться пользоваться умными указателями или использовать здесь контейнер из 
     * стандартной библиотеки (например vector, у него есть метод data(), который вернет массив,
     * который можно передать в read) */
    char* m = new char[Fsize];
    infile.read(m, Fsize);
    infile.close();
    /* Убедись, что ты можешь делать это руками сам, тут уж ладно, пусть так */
    std::reverse(m, m + Fsize);
    std::ofstream outfile(F_out, std::ios::binary|std::ios::out);
    outfile.write(m, Fsize);
    outfile.close();
    delete[] m;
    return 0;
}
