#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // 定义一个unordered_map，键是字符串，值是整数
    std::unordered_map<std::string, int> umap;

    // 插入一些键值对
    umap["apple"] = 1;
    umap["banana"] = 2;
    umap["cherry"] = 3;

    // 遍历并打印unordered_map中的所有元素
    for (const auto& pair : umap) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    return 0;
}
