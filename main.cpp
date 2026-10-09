#include <iostream>

class Figure {
public:
  virtual double area() const = 0;
  virtual ~ Figure() {}
};

class Circle: public Figure {
private:
    double radius;
public:
    Circle (double radius) {}
    double area () const {
        return 0;
    }
  ~Circle(){}
};

int main() {
    return 0;
}