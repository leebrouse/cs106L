#include<iostream>
template<typename T,typename U>
auto smarterMymin(T a,U b)
{
    return a<b?a:b;
}

int main(int argc, char const *argv[])
{
    std::cout<<smarterMymin(3.2,4)<<'\n';
    return 0;
}
