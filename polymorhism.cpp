#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function allows derived classes to provide their own behaviour
    virtual void makeSound() {
        cout << "The animal makes a sound." << endl;
    }

    // Virtual destructor is good practice when using base-class pointers
    virtual ~Animal() {}
};

// Dog inherits from Animal and overrides makeSound()
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "The dog barks: Woof! Woof!" << endl;
    }
};

// Cat inherits from Animal and overrides makeSound()
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "The cat meows: Meow!" << endl;
    }
};

int main() {
    Dog dog1;
    Cat cat1;

    // Base-class pointers point to different derived-class objects
    Animal* animalPtr;

    animalPtr = &dog1;
    animalPtr->makeSound(); // Calls Dog's version

    animalPtr = &cat1;
    animalPtr->makeSound(); // Calls Cat's version

    return 0;
}
print(f"Created: {path}")
