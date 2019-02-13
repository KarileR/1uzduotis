#include <iostream>
#include <string>

int main() 
{
    std::string vardas;

    std::cout<<"Iveskite savo varda: "<<std::endl;
    std::cin>>vardas;

    std::cout<<"Iveskite remelio ploti: "<<std::endl;
    int a;
    std::cin>>a;

    std::string VidEil;

    if (vardas.back() == 's')
    {
        VidEil = "Sveikas, " + vardas + "!";
    }
    else
    {
        VidEil = "Sveika, " + vardas + "!";
    }

    
    int n = VidEil.size()+2;
    for(int i=0; i<n+a*2; i++)
    {  
        std::cout<<"*";
    }
    std::cout<<std::endl;

    std::string tarpai(n-2, ' ');
    std::string tarpai2(a,' ');


    for(int i=0; i<a; i++)
    {  
        std::cout<<"*";
        std::cout<<tarpai2<<tarpai2;
        std::cout<<tarpai;
        std::cout<<"*";
        std::cout<<std::endl;
    }

    std::cout<<"*"<<tarpai2<<VidEil<<tarpai2<<"*"<<std::endl;

    for(int i=0; i<a; i++)
    {  
        std::cout<<"*";
        std::cout<<tarpai2<<tarpai2;
        std::cout<<tarpai;
        std::cout<<"*";
        std::cout<<std::endl;
    }

    for(int i=0; i<n+a*2; i++)
    {  
        std::cout<<"*";
    }
    
    return 0;
}