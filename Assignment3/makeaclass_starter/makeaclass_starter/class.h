// Blank header file
#ifndef CUSTOM_H
#define CUSTOM_H

#include <string>

class Custom {
private:
    std::string name;
    std::string price;
    std::string num;

public:
    Custom();
    Custom(const std::string& name, const std::string& price, const std::string& num);
    ~Custom();

    std::string getname() const;
    void setname(const std::string& name);

    std::string getprice() const;
    void setprice(const std::string& price);

    std::string getnum() const;
    void setnum(const std::string& num);

    void printInfo() const;

};

#endif

