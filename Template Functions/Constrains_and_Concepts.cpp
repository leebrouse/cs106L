#include <iostream>
#include <string>

// 定义 Addable 概念
template<typename T>
concept Addable = requires(T a, T b) {
    a + b;
};

// 定义模板函数 add，要求类型 T 必须满足 Addable 概念
template<typename T> requires Addable<T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    double a = 2.5, b = 3.5;
    std::string str1 = "Hello, ", str2 = "World!";
    
    // 使用 add 函数
    std::cout << "int add: " << add(x, y) << std::endl;
    std::cout << "double add: " << add(a, b) << std::endl;
    std::cout << "string add: " << add(str1, str2) << std::endl;

    // 注意：以下代码会导致编译错误，因为 std::pair 不支持加法操作
    // std::pair<int, int> p1 = {1, 2}, p2 = {3, 4};
    // std::cout << "pair add: " << add(p1, p2) << std::endl;

    return 0;
}
