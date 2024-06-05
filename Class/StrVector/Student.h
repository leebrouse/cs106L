#include<string>
class Student{
private:
    std::string name;
    std::string state;
    int age;

public:
    Student();
    Student(std::string name,std::string state, int age);
    /// Destructor
    ~Student();
    
    std::string getName();
    void setName(std::string name);

    std::string getState();
    void setState(std::string state);

    int getAge();
    void setAge(int age);

};


