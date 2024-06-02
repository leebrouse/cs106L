#include <iostream>
#include <list>

int main() {
    // 定义一个整数链表
    std::list<int> lst = {1, 2, 3, 4, 5};

    // 添加元素到链表
    lst.push_back(6);
    lst.push_front(0);

    // 遍历并打印链表中的元素
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
