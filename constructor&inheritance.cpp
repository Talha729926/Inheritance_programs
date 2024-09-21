#include <iostream>
using namespace std;

class Animal {
public:
    Animal(string name) : name(name) {}
    void display() {
        cout << "Animal name: " << name << endl;
    }
private:
    string name;
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {}
};

int main() {
    Dog myDog("Buddy");
    myDog.display();
    return 0;
}
