#include<iostream>
#include<vector>
template<typename InputIt,typename Unipred>
int count_occurence(InputIt begin,InputIt end,Unipred pred){
   int count =0;
   for (auto iter = begin; iter!=end; iter++)
   {
        if (pred(*iter))
        count++;
   }
    return count;
}

bool isEven(int x){
    return x%2==0;
}

int main(int argc, char const *argv[])
{
    std::vector<int> vector={1,2,3,4,5,6,7,8};
    std::cout<<count_occurence(vector.begin(),vector.end(),isEven) <<'\n';
    return 0;
}
