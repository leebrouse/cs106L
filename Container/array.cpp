#include <iostream>
#include <array>

int main() {
    // 定义一个长度为5的整数数组
    std::array<int,5> arr = {1, 2, 3, 4, 5};

    // 遍历并打印数组中的元素
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
