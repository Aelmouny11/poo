#include <iostream>
// #include <conio>
using namespace std;

class Point{
    private: int x, y;
};
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "runnig inside my MyClass Instance";
    }
};

int main(){
    cout << "Hello\n";
    MyClass myClass;
    myClass.myMethod();
    return 0;
}