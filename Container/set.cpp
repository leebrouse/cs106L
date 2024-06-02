#include <iostream>
#include <set>

int main() {
    // 定义一个整数集合
    std::set<int> mySet;

    // 插入一些元素
    mySet.insert(5);
    mySet.insert(1);
    mySet.insert(4);
    mySet.insert(3);
    mySet.insert(2);
    mySet.insert(4); // 试图插入重复元素（将被忽略）

    // 打印集合中的元素（自动排序）
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 查找元素
    auto it = mySet.find(3);
    if (it != mySet.end()) {
        std::cout << "Element 3 found in the set." << std::endl;
    } else {
        std::cout << "Element 3 not found in the set." << std::endl;
    }

    // 删除元素
    mySet.erase(3);

    // 再次打印集合中的元素
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
