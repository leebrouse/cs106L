#include<iostream>
#include <map>
#include <set>

int main(int argc, char const *argv[])
{
    std::map<std::string,int>ages{
       {"Alice",25},
       {"Bob",30},
       {"Charlie",35} 
    };


    std::cout<<"Alice`s age: "<<ages.at("Alice")<<'\n';
    std::cout<<"Bob`s age: "<<ages["Bob"]<<'\n';
    return 0;
}
