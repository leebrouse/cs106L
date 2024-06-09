#ifndef TEMPLATE_H
#define TEMPLATE_H

template<typename T>
class Container{
    public:
        Container(T val);
        T getValue();
    private:
        T value;
};

#include "Template.cpp"

#endif