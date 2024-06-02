#include <iostream>
#include <map>
#include <string>

int main() {
    // 定义一个map，键是字符串，值是整数
    std::map<std::string, int> map;

    // 插入一些键值对
    map["apple"] = 1;
    map["banana"] = 2;
    map["cherry"] = 3;

    // 遍历并打印map中的所有元素
    for (const auto& pair : map) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    return 0;
}
