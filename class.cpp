#include <iostream>
// #include <conio>
using namespace std;

class Point
{
private:
    int x, y;
};
class Car
{                 // The class
public:           // Access specifier
    string brand; // Attribute
    string model; // Attribute
    int year;     // Attribute
    Car(string x, string y, int z)
    { // Constructor with parameters
        brand = x;
        model = y;
        year = z;
    }

public:
    void display()
    {
        cout << "[" << brand << "," << model << "," << year << "]";
    }
};

int main()
{
    Car Bmw(
        "BMW",
        "X5",
        1999);
    Bmw.display();
    return 0;
}