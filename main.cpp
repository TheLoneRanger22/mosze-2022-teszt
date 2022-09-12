#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // az N_ELEMENTS konstans szintaktikai hibát tartalmaz
    std::cout << '1-100 ertekek duplazasa' // hiányzó pontosvessző + dupla macskaköröm hiánya + sortörés hiánya
    for (int i = 0;) //hiányos ciklusmag
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  //hiányos ciklusmag + sortörés hiánya + 1-től 100-ig kellene futnia
    {
        std::cout << "Ertek:"  // hiányzó pontosvessző + kiírandó számok hiánya, sortörés
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  // atlagot egyenlővé kellene tenni 0-val
    for (int i = 0; i < N_ELEMENTS, i++)   //vessző helyett pontosvessző kellene
    {
        atlag += b[i] // hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
