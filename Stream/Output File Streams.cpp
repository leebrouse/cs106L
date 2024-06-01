#include<iostream>
#include <fstream>

int inputFileStreamExample(){
    std::ifstream ifs("hello.txt");
    if (ifs.is_open())
    {
        std::string line;
        std::getline(ifs,line);
        std::cout<<"Read from the file: "<<line<<'\n';
    }

     if (ifs.is_open())
    {
        std::string lineTwo;
        std::getline(ifs,lineTwo);
        std::cout<<"Read from the file: "<<lineTwo<<'\n';
    }
    return 0;
    
}


int main() {
    /// associating file on construction
    std::ofstream ofs("hello.txt");

    if (ofs.is_open()) {
    ofs << "Hello CS106L!" << '\n';
    }
    ofs.close();
    ofs << "this will not get written";

    ofs.open("hello.txt");
    ofs<< "this will though! It`s open again";

    //inputFileStreamExample();
    return 0;
}