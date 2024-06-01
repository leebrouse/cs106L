#include<iostream>

struct  Student
{
    std::string name;
    std::string state;
    int age;
};

int main(int argc, char const *argv[])
{   
    /**Before：
      Student student;
      student.name="Haven";
      student.state="AR";
      student.age=23;
    */ //Too Bad!!!! so complex,so many code,demn!!!!;

    //统一初始化，可对一个结构体进行整体赋值,Good,Easy!!!;
    Student student={"Haven","AR",23};
    std::cout<<student.age<<'\n';
    return 0;
}

