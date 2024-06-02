#include <iostream>
#include "Student.h"
#include <string>

Student::Student(std::string name,std::string state,int age){
    this->name=name;
    this->state=state;
    this->age=age;
}

std::string Student::getname(){
    return this->name;
}

void Student::setname(std::string name){
    this->name=name;
}

std::string Student::getstate(){
    return this->state;
}

void Student::setstate(std::string state){
    this->state=state;
}

int Student::getage(){
    return this->age;
}

void Student::setage(int age){
    this->age=age;
}



int main(int argc, char const *argv[])
{
    Student student ("Jony","AR",23);
    std::cout<<student.getname()<<'\n';
    std::cout<<student.getstate()<<'\n';
    std::cout<<student.getage()<<'\n';

    student.setname("Holy");
    std::cout<<student.getname()<<'\n';
    return 0;
}
