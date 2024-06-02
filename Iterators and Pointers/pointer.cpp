#include<iostream>
int main(int argc, char const *argv[])
{
    int val=10;
    std::cout<<val<<'\n';

    int* p=&val;
    *p=20;
    std::cout<<val<<'\n';
    return 0;
}
