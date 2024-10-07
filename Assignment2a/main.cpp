/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
second (a) homework project
*/
#include "header.hpp"
int main(){
    const char* F_in = "source.pdf";
    const char* F_out = "temppdf.pdf";
    std::uintmax_t Fsize = std::filesystem::file_size(F_in);
    std::ifstream infile(F_in, std::ios::binary|std::ios::in);
    char* m = new char[Fsize];
    infile.read(m, Fsize);
    infile.close();
    std::reverse(m, m + Fsize);
    std::ofstream outfile(F_out, std::ios::binary|std::ios::out);
    outfile.write(m, Fsize);
    outfile.close();
    delete[] m;
    return 0;
}
