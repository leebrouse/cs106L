#include <iostream>
class Functor
{
private:
    int num;
public:
    int operator()(int arg)const{
        return num+arg;
    }
};

int main(int argc, char const *argv[])
{
    int num=0;
    auto lambda=[&num](int arg){num+=arg;};
    lambda(5);
    return 0;
}
