#include <iostream>
template <typename T,typename U>
// T myMin(T a,T b){
//     return a<b?a:b;
// }

//useful！！！！
auto myMin(T a,U b){
    return a<b?a:b;
}

int main(int argc, char const *argv[])
{
    std::cout<<myMin(3.2,4) <<'\n';
    return 0;
}
