// Blank cpp file
#include "class.h"
#include <iostream>

Custom::Custom() : name{"Nothing"}, price{"0"}, num{"1000"} {}

Custom::Custom(const std::string& name, const std::string& price, const std::string& num)
    : name{name}, price{price}, num{num} {}

Custom::~Custom() {}

std::string Custom::getname() const {
    return name;
}

void Custom::setname(const std::string& name) {
    this->name = name;
}

std::string Custom::getprice() const {
    return price;
}

void Custom::setprice(const std::string& price) {
    this->price = price;
}

std::string Custom::getnum() const {
    return num;
}

void Custom::setnum(const std::string& num) {
    this->num = num;
}

void Custom::printInfo() const {
    std::cout << "Name: " << name << '\n';
    std::cout << "Price: " << price << '\n';
    std::cout << "Num: " << num << '\n';
}
