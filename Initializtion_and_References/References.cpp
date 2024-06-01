#include<iostream>

int main(int argc, char const *argv[])
{
    int num=5;
    int& ref=num;
    ref=10;
    std::cout<<num<<'\n';
    
    std::cout<<ref<<'\n';    
    return 0;
}
