#include <iostream>
#include <deque>

int main() {
    // 定义一个双端队列
    std::deque<int> deq = {1, 2, 3, 4, 5};

    // 从队列前后添加元素
    deq.push_back(6);
    deq.push_front(0);

    // 遍历并打印双端队列中的所有元素
    for (auto it = deq.begin(); it != deq.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
