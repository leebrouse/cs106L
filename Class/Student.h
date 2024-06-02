#include<string>
class Student{
private:
    std::string name;
    std::string state;
    int age;

public:
    Student(std::string name,std::string state, int age);
    std::string getname();
    void setname(std::string name);

    std::string getstate();
    void setstate(std::string state);

    int getage();
    void setage(int age);

};


