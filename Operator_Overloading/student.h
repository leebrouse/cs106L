#include<string>
class student
{
private:
    std::string name;
    std::string state;
    int age;

public:
    std::string getName()const;
    void setName(std::string name);
    int getAge()const;
    void setAge(int age);
    bool operator <(const student& rhs)const;

};

