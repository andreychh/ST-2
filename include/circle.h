// Copyright 2025 Andrey Chernykh
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
 public:
  explicit Circle(double r);

  void setRadius(double r);
  void setFerence(double f);
  void setArea(double a);

  double getRadius() const;
  double getFerence() const;
  double getArea() const;

 private:
  double radius{};
  double ference{};
  double area{};
};

#endif  // CIRCLE_H
