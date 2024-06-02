#include <iostream>
#include <string>

class Student {
public:
    // 构造函数
    Student(std::string name, std::string state, int age, int array_size);

    // 析构函数
    ~Student();

private:
    std::string name;
    std::string state;
    int age;
    int* my_array; // 动态分配的数组
};

// 构造函数定义
Student::Student(std::string name, std::string state, int age, int array_size)
    : name{name}, state{state}, age{age} {
    my_array = new int[array_size]; // 动态分配数组
    std::cout << "Student object created." << std::endl;
}

// 析构函数定义
Student::~Student() {
    delete[] my_array; // 释放动态分配的数组
    std::cout << "Student object destroyed and memory freed." << std::endl;
}

int main() {
    
    // 创建一个 Student 对象，数组大小为10
    Student student("Jony", "AR", 23, 10);
    return 0;
}
