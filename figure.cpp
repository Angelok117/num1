#define _USE_MATH_DEFINES
#include <cmath>
#include "figure.h"

Circle::Circle(double radius) : radius(radius) {}

Circle::~Circle() {}

double Circle::area() const {
    return M_PI * radius * radius;
}
