#include <iostream>

constexpr double fib(int n){
    if(n==1)return 1;
    return fib(n-1)*n;
}

int main(int argc, char const *argv[])
{
    const long long bigval = fib(20);
    std::cout << bigval<<'\n';
    return 0;
}
