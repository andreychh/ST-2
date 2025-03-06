// Copyright 2025 Andrey Chernykh
#include "tasks.h"

#include "circle.h"

double gap(double radius, double additionalLength) {
  Circle earth(radius);
  earth.setFerence(earth.getFerence() + additionalLength);
  return earth.getRadius() - radius;
}

double pathAndFenceCost(double poolRadius, double pathWidth,
                        double pathCostPerSquareMeter,
                        double fenceCostPerMeter) {
  Circle pool(poolRadius);
  double poolArea = pool.getArea();

  Circle poolWithPath(pool.getRadius() + pathWidth);
  double poolWithPathArea = poolWithPath.getArea();

  double pathArea = poolWithPathArea - poolArea;
  double pathCost = pathArea * pathCostPerSquareMeter;

  double fenceFerence = poolWithPath.getFerence();
  double fenceCost = fenceFerence * fenceCostPerMeter;

  return pathCost + fenceCost;
}
