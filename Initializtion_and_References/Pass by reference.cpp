#include<iostream>
#include<math.h>

// int squareN(int n){
//     n=std::pow(n,2);
//     return n;
// }

//用&来传递值，其实就是指针;
void squareN(int& n){
    n=std::pow(n,2);
}

int main(int argc, char const *argv[])
{
    int num=5;
    //num=squareN(num);
    std::cout<< num <<'\n';
    return 0;
}
