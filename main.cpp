#include <iostream>
#include <string>

int main() 
{
    std::string vardas;

    std::cout<<"Iveskite savo varda: "<<std::endl;
    std::cin>>vardas;
    
    std::string TreciaEil = "* Sveikas, " + vardas + "! *";

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