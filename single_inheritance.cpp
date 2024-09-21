#include <iostream>
using namespace std;
class Animal 
{
  public:
    Animal(int id) : id(id) {}
    void speak() 
	{
        cout << "Some generic sound" << endl;
    }
    int getId() 
	{
        return id;
    }
protected:
    int id; 
};
class Dog : public Animal
 {
public:
    Dog(int id, int breed) : Animal(id), breed(breed) {}
    void speak() 
	{
        cout << "Woof! Woof!" << endl;
    }
    int getBreed()
	 {
        return breed;
    }

private:
    int breed; 
};

int main() {
    Dog myDog(100, 1); 
    cout << "ID: " << myDog.getId() << endl;
    cout << "Breed: " << myDog.getBreed() << endl;
    myDog.speak();
    if (myDog.getBreed() == 1) 
	{ 
        cout << "This dog is a Golden Retriever!" << endl;
    } else {
        cout << "This dog is not a Golden Retriever." << endl;
    }

    return 0;
}
