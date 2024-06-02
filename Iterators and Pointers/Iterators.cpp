#include <iostream>
#include <map>
int main(int argc, char const *argv[])
{
    std::map<int,int> map={{1,2},{3,4},{5,6}};
    //迭代器本质上是一个类似指针的对象，它可以指向 std::map 中的元素并提供访问这些元素的方法。
    for (auto iter=map.begin();iter!=map.end();iter++)
    {
        const auto& [key,value]=*iter;
        std::cout << "Key: " << key << ", Value: " << value << std::endl;
    }
    
    return 0;
}
