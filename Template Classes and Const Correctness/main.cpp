#include "Student.h"

Student::Student(const std::string& name, const std::string& course, int age)
    : name(name), course(course), age(age) {}

std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}
