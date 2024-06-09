#include "Template.h"

template <class T>
Container<T>::Container(T val)
        :val{val}{}

template<typename T>
T Container<T>::getValue(){
    return value;
}