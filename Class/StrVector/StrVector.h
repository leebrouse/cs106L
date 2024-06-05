#ifndef STRVECTOR_H
#define STRVECTOR_H
//kInitialSize=2
#include <stdexcept> 
#include<algorithm>
#include<string>
class StrVector{
  public:
    using iterator =std::string*;

    const size_t kInitialSize=2;
    StrVector();
    StrVector(size_t n,const std::string& val);
    ~StrVector();

    size_t size();
    bool empty();

    void push_back(const std::string& elem);
    std::string& operator[](size_t index);
    std::string& at(size_t index);

    iterator begin();
    iterator end();

  private:
    size_t logicalSize;
    size_t allocatedSize;
    std::string *elems;
    void grow();
};


#endif // STRVECTOR_H
