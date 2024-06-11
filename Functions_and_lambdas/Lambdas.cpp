#include <iostream>
template<typename InputIt,typename UniPred>
int count_occurrences(InputIt begin,InputIt end,UniPred pred){
    int count =0;
    for(auto iter=begin;iter!=end;iter++){
       if(pred(*iter))count++; 
    }
    return count;
}

bool isVowel(char c){
    std::string vowels="aeiou";
    return vowels.find(c)!=std::string::npos;
}

int main() {
    std::string text = "hello world";
    int vowelCount = count_occurrences(text.begin(), text.end(), isVowel);
    std::cout << "Number of vowels: " << vowelCount << std::endl; // 输出元音字母的数量
    return 0;
}

