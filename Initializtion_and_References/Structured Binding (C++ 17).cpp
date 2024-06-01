#include<iostream>
#include <tuple>

std::tuple<std::string,std::string,std::string>getClassInfo(){
    std::string className="CS106L";
    std::string buildingName = "Turing Auditorium";
    std::string language = "C++";
    return {className,buildingName,language};
}

int main(int argc, char const *argv[])
{   
   //Useful!!!!!
    auto [className,buildingName,language]=getClassInfo();

     //equal to :"Tooooo Long!!!!"

    //     auto classInfo = getClassInfo () ;
    //     std::string className = std:: get<0>(classInfo) ; 
    //     std::string buildingName =std:: get<1>(classInfo) ; 
    //     std::string language = std:: get<2>(classInfo) ;

    std::cout<<"Come to "<<buildingName<<" and join us for "<<className
            <<" to learn "<<language<<" ! "<<'\n';

    return 0;
}

