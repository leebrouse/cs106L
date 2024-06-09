#include <iostream>

// 函数模板的定义
template<typename type = int>
type myMin(type a, type b) {
    return a < b ? a : b;
}

int main(int argc, char const *argv[]) {
    // 调用 myMin 模板函数

    // 使用默认类型 int
    int a = 10, b = 20;
    std::cout << "Min of " << a << " and " << b << " is: " << myMin(a, b) << std::endl;

    // 使用指定类型 double
    double x = 5.6, y = 3.4;
    std::cout << "Min of " << x << " and " << y << " is: " << myMin<double>(x, y) << std::endl;

    // 使用指定类型 char
    char c1 = 'g', c2 = 'e';
    std::cout << "Min of " << c1 << " and " << c2 << " is: " << myMin<char>(c1, c2) << std::endl;

    return 0;
}
