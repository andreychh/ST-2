// Copyright 2025 Andrey Chernykh
#include "circle.h"

#include <cmath>

Circle::Circle(const double r) {
  setRadius(r);
}

void Circle::setRadius(double r) {
  radius = r > 0 ? r : 0;
  ference = 2 * M_PI * radius;
  area = M_PI * radius * radius;
}

void Circle::setFerence(double f) {
  ference = f > 0 ? f : 0;
  radius = ference / (2 * M_PI);
  area = M_PI * radius * radius;
}

void Circle::setArea(double a) {
  area = a > 0 ? a : 0;
  radius = std::sqrt(area / M_PI);
  ference = 2 * M_PI * radius;
}

double Circle::getRadius() const {
  return radius;
}

double Circle::getFerence() const {
  return ference;
}

double Circle::getArea() const {
  return area;
}
