// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class gopu {
  private:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    gopu(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create object and initialize data members
  gopu wall1(10.5, 8.6);
  gopu wall2(8.5, 6.3);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
