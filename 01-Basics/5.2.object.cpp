// Object
// An object is an instance of a class. It represents a real-world entity created using the class blueprint

// Stores actual values for class attributes.
// Allows you to call methods defined in the class.
// Multiple objects can exist from the same class, each holding different data.

#include<bits/stdc++.h>
using namespace std;

// Define a class
class Car
{
  public:
    // Attribute
    string color;
    string model;

    // Method: starts the engine
    void startEngine()
    {
        cout << model << " engine started" << endl;
    }

    // Method: stops the engine
    void stopEngine()
    {
        cout << model << " engine stopped" << endl;
    }
};

int main()
{
    // Create first car object
    Car myCar;
    myCar.color = "Red";
    myCar.model = "Toyota";

    // Use attributes and methods
    cout << "My car color: " << myCar.color << endl;
    myCar.startEngine();
    myCar.stopEngine();

    return 0;
}