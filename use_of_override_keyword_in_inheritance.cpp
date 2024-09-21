#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override { 
        cout << "Drawing circle" << endl;
    }
};

int main() {
    Circle c;
    c.draw();
    return 0;
}
