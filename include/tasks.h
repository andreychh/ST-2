// Copyright 2025 Andrey Chernykh
#ifndef TASKS_H
#define TASKS_H

double gap(double radius, double additionalLength);

double pathAndFenceCost(double poolRadius, double pathWidth,
                        double pathCostPerSquareMeter,
                        double fenceCostPerMeter);

#endif  // TASKS_H
