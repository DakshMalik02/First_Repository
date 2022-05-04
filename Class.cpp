#include<iostream>
using namespace std;
class MySecondClass {
    public:
    void mySecondMethod();
};

void MySecondClass::mySecondMethod() {
    cout<<"Welcome to C++ Member function";
}

int main() {
    MySecondClass myObject;
    myObject.mySecondMethod();
    return 0;
}