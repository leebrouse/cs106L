#include "class.h"
#include <iostream>

/*
 * Assigment 3: Make a class!
 * Requirements:
 * Must have a custom constructor √
 * Must have a default constructor √
    - i.e. constructor overloading
 * Must have private members (functions and/or variables) √
 * Must have public members (functions) √
 * Must have at least one getter function √
 * Must have at least one setter function √
 */

// g++ -std=c++11 -o main class.cpp main.cpp <use it to compile>
// ./main <use it to run>
using namespace std;
int main() {
  cout<<"Defaultcustom:"<<'\n';
  Custom defaultcustom;
  defaultcustom.printInfo();

  cout<<'\n';

  cout<<"Havecustom:"<<'\n';
  Custom havecustom("Apple","3","20");
  havecustom.printInfo();

  return 0;
}