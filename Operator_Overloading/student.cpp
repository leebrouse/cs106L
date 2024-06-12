#include <iostream>
#include "student.h"

std::string student::getName()const{
    return this->name;  // Return an empty string instead of nullptr
}

void student::setName(std::string name){
    this->name=name;
}

int student::getAge()const{
    return age;
}

void student::setAge(int age){
    this->age=age;
}

bool student::operator< (const student& rhs)const{
    return age<rhs.age;
}