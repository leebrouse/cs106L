#include <iostream>
template<unsigned n>
struct  Factorial
{
    enum{value=n*Factorial<n-1>::value};
};

template<>
struct Factorial<0>
{
    enum {value=1};
};

int main(int argc, char const *argv[])
{
    std::cout<<Factorial<10>::value<<'\n';
    return 0;
}
