// Copyright 2025 Andrey Chernykh
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_

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

#endif  // INCLUDE_CIRCLE_H_
