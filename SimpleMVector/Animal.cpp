#include<iostream>

class Animal {
public:
    virtual void makeSound() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() override { std::cout << "Woof!" << std::endl; }
    void fetch() { std::cout << "Fetching ball!" << std::endl; }
};

class Cat : public Animal {
public:
    void makeSound() override { std::cout << "Meow!" << std::endl; }
    void scratch() { std::cout << "Scratching post!" << std::endl; }
};