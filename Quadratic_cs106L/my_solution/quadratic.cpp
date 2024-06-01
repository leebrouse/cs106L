#include <cmath>    // for sqrt
#include <iostream> // to print
#include <utility>  // for pairs

std::pair<bool, std::pair<int, int>> solveQuadratic(int a, int b, int c) {
  // x = [-b +- sqrt(b^2 - 4ac)] / 2a
  // 
  // TODO: Write this code!
  bool ispossible=true;
  int key=(b*b-4*a*c);
  if (key<0)
  {
    ispossible=false;
    return std::make_pair(ispossible,std::make_pair(0, 0));
  }else{

    double x1=(-b+sqrt(key))/(2*a);
    double x2=(-b-sqrt(key))/(2*a);

    auto result=std::make_pair(ispossible,std::make_pair(x1,x2));
    return result;
  }
  
}

int main() {
  std::cout << "Hello World!" << std::endl; 
  auto result = solveQuadratic(1, -3, 2);
  // TODO: Write code to display the two roots! Make sure to handle if
  // there are no real roots!

  if (result.first==true)
  {
    std::cout<<"The first result x1 is : "<<result.second.first<<'\n';

    std::cout<<"The second result x2 is : "<<result.second.second<<'\n';
  }else{
    std::cout<<"There are no real roots!"<<'\n';
  }
  




}