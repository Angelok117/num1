#include <iostream>
#include <cmath>

class Figure {
public:
  virtual double area() const = 0;
  virtual ~ Figure() {}
};

class Circle: public Figure {
private:
    double radius;
public:
    Circle (double radius): radius(radius){}
    double area () const {
        return M_PI * radius * radius;
    }
  ~Circle(){}
};

int main() {
    return 0;
}