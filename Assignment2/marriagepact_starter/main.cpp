/* 
Assignment 2: Marriage Pact

This assignment asks you to discover your one true love using containers and pointers.
There are two parts: implement get_applicants and find_matches.

Submit to Paperless by 11:59pm on 2/1/2024.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <set>

std::set<std::string> get_applicants(std::string filename) {
    // TODO: Implement this function. Feel free to change std::set to std::unordered_set if you wish!
    std::set<std::string> students;

    std::ifstream ifs(filename);
    if (ifs.is_open())
    {
        std::string line;
        while (std::getline(ifs,line))
        {
            students.insert(line);
        }
        
    }else{
        std::cerr << "Failed to open file: " << filename << std::endl;
        return students; 
    }
    
    ifs.close();
    return students;
}

std::queue<const std::string*> find_matches(std::set<std::string> &students) {
    // TODO: Implement this function.
    std::queue<const std::string*> match;

    for (const auto& student:students)
    {
        if (!student.empty()&& student[0]=='B')
        {
            match.push(&student);
        }
        
    }
    
    return match;

}



int main() {
    // Your code goes here. Don't forget to print your true love!
    std::string filename="students.txt";
    auto students=get_applicants(filename);
    
    auto matches=find_matches(students);

    while (!matches.empty()) {
        std::cout << *matches.front() << std::endl;
        matches.pop();
    }


    return 0;
}
