#include<iostream>

class Animal {
public: // 将函数声明为公有的
   virtual void speak() {
        std::cout << "I'm an animal" << '\n';
    }
};

class Dog : public Animal { // 显式指定继承方式为公有
public: // 将函数声明为公有的
    void speak() {
        std::cout << "I'm a Dog" << '\n';
    }
};


void func(Animal* animal) {
    animal->speak();
}

int main(int argc, char const *argv[]) {
    Animal* myAnimal = new Animal;
    Dog* myDog = new Dog;
    func(myAnimal);
    func(myDog);
    return 0;
}
