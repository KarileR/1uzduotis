#include <iostream>
#include <string>

int main() 
{
    std::string vardas;

    std::cout<<"Iveskite savo varda: "<<std::endl;
    std::cin>>vardas;

    std::string TreciaEil;

    if (vardas.back() == 's')
    {
        TreciaEil = "* Sveikas, " + vardas + "! *";
    }
    else
    {
        TreciaEil = "* Sveika, " + vardas + "! *";
    }

    std::string tarpas(TreciaEil.size() - 4, ' ');
    std::string AntraEil = "* " + tarpas + " *";

    std::string PirmaEil(AntraEil.size(), '*');

    std::cout<<PirmaEil<<std::endl;
    std::cout<<AntraEil<<std::endl;
    std::cout<<TreciaEil<<std::endl;
    std::cout<<AntraEil<<std::endl;
    std::cout<<PirmaEil<<std::endl;

    return 0;
}