// Copyright 2025 Andrey Chernykh
#ifndef INCLUDE_TASKS_H_
#define INCLUDE_TASKS_H_

double gap(double radius, double additionalLength);

double pathAndFenceCost(double poolRadius, double pathWidth,
                        double pathCostPerSquareMeter,
                        double fenceCostPerMeter);

#endif  // INCLUDE_TASKS_H_
