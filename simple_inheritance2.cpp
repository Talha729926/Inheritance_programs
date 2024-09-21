#include <iostream>
using namespace std;

class Base {
public:
    void baseMethod() {
        cout << "Base method" << endl;
    }
};

class Derived : public Base {
public:
    void derivedMethod() {
        baseMethod(); 
        cout << "Derived method" << endl;
    }
};

int main() {
    Derived obj;
    obj.derivedMethod();
    return 0;
}
