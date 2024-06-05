
#include "StrVector.h"


StrVector::StrVector(size_t n,const std::string& val)
    : logicalSize{n},allocatedSize{n*2}{
      elems=new std::string[allocatedSize];
      std::fill(begin(),end(),val);
    }

StrVector::~StrVector(){
  delete[] elems;
}

StrVector::iterator StrVector::begin(){
  return elems;
}

StrVector::iterator StrVector::end(){
  return elems+logicalSize;
}

size_t StrVector::size(){
  return logicalSize;
}

bool StrVector::empty(){
  return logicalSize == 0;
}

void StrVector::push_back(const std::string &elem) {
  if (logicalSize == allocatedSize) {
    grow();
  }

  *(begin() + logicalSize) = elem;
  logicalSize++;
}

void StrVector::grow(){
  auto new_elems=new std::string[allocatedSize *=2];
  for(size_t i=0;i<logicalSize;i++){
    *(new_elems+i)=*(begin()+i);
  }
  elems=new_elems;
}

std::string &StrVector::operator[](size_t index) {
  return *(begin()+index);
}

std::string &StrVector::at(size_t index) {
  /// TODO
  if(index>size()){
    throw std::out_of_range("Index out of range");
  }

  return operator[](index);
}


