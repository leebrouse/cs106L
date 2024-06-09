#include <iostream>
#include "Student.h"

std::string stringify(const Student& s) {
    return s.getName() + " is " + std::to_string(s.getAge()) + " years old.";
}

int main(int argc, char const *argv[]) {
    Student student("Joney", "AC", 23);
    std::cout << stringify(student)<<'\n';
    return 0;
}
