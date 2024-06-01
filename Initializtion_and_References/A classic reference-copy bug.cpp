#include<iostream>
#include<math.h>
#include <vector>

void shift(std::vector<std::pair<int,int>>& nums){
    for(auto& [num1,num2]:nums){
        num1++;
        num2++;
    }
}



int main(int argc, char const *argv[])
{
    std::vector<std::pair<int,int>> Tnums={{1,2},{3,4},{5,6}};
    shift(Tnums);
    for(auto [num1,num2]:Tnums){
        std::cout<< num1 <<'\n';
        std::cout<< num2 <<'\n';
    }
    return 0;
}
