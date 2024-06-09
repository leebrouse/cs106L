// system and timing
#include <chrono>
#include <iostream>

// data structure imports
#include <deque>
#include <iterator>
#include <utility> // pair
#include <vector>

using std::cout;
using std::endl;

template <typename it,typename data>
int count_occurrences(it begin,it end,data target){
    int count=0;
    for (auto iter=begin;iter!=end ; iter++)
    {   
        if(*iter==target)
        count++;
    }
    return count;
}
//{"Schubert", "Mozart", "Dvorak", "Tchaikovsky"};
int main() {

  // vector of strings
  std::vector<std::string> composers = {"Schubert", "Mozart", "Dvorak",
                                        "Tchaikovsky"};
  cout << "Occurrences of Schubert: "
       << count_occurrences(composers.begin(), composers.end(), "Schubert")
       << endl;

  // string itself (array of chars)
  std::string str = "Tchaikovsky";
  cout << "Occurrences of the letter k in Tchaikovsky: "
       << count_occurrences(str.begin(), str.end(), 'k') << endl;

  return 0;
}

