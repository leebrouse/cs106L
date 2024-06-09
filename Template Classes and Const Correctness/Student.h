#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    std::string course;
    int age;

public:
    Student(const std::string& name, const std::string& course, int age);
    
    std::string getName() const;
    int getAge() const;
};

#endif // STUDENT_H
