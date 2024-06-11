#include <iostream>
#include <vector>
template<typename InputIt,typename UniPred>
int count_occurrences(InputIt begin,InputIt end,UniPred pred){
    int count = 0;
    for (auto iter = begin; iter!=end; iter++)
    {
        if(pred(*iter))count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int limit=5;
    auto isMoreThan = [limit](int n){
        return n>limit;
    };

    std::vector<int>nums={3,5,6,7,9,13};

    std::cout<<count_occurrences(nums.begin(),nums.end(),isMoreThan)<<'\n';
    return 0;
}


