// Copyright 2025 Andrey Chernykh
#include <gtest/gtest.h>

#include <cmath>

#include "circle.h"
#include "tasks.h"

TEST(Circle, InitWithPositive) {
  Circle c(10);
  EXPECT_NEAR(c.getRadius(), 10.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 2 * M_PI * 10, 1e-6);
  EXPECT_NEAR(c.getArea(), M_PI * 10 * 10, 1e-6);
}

TEST(Circle, InitWithZero) {
  Circle c(0);
  EXPECT_NEAR(c.getRadius(), 0.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 0.0, 1e-6);
  EXPECT_NEAR(c.getArea(), 0.0, 1e-6);
}

TEST(Circle, InitWithNegative) {
  Circle c(-10);
  EXPECT_NEAR(c.getRadius(), 0.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 0.0, 1e-6);
  EXPECT_NEAR(c.getArea(), 0.0, 1e-6);
}

TEST(Circle, SetPositiveRadius) {
  Circle c(0);
  c.setRadius(10);
  EXPECT_NEAR(c.getRadius(), 10.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 2 * M_PI * 10, 1e-6);
  EXPECT_NEAR(c.getArea(), M_PI * 10 * 10, 1e-6);
}

TEST(Circle, SetZeroRadius) {
  Circle c(0);
  c.setRadius(0);
  EXPECT_NEAR(c.getRadius(), 0.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 0.0, 1e-6);
  EXPECT_NEAR(c.getArea(), 0.0, 1e-6);
}

TEST(Circle, SetNegativeRadius) {
  Circle c(0);
  c.setRadius(-10);
  EXPECT_NEAR(c.getRadius(), 0.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 0.0, 1e-6);
  EXPECT_NEAR(c.getArea(), 0.0, 1e-6);
}

TEST(Circle, SetPositiveFerence) {
  Circle c(0);
  c.setFerence(10);
  EXPECT_NEAR(c.getRadius(), 10 / (2 * M_PI), 1e-6);
  EXPECT_NEAR(c.getFerence(), 10, 1e-6);
  EXPECT_NEAR(c.getArea(), M_PI * std::pow(10 / (2 * M_PI), 2), 1e-6);
}

TEST(Circle, SetZeroFerence) {
  Circle c(0);
  c.setFerence(0);
  EXPECT_NEAR(c.getRadius(), 0.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 0.0, 1e-6);
  EXPECT_NEAR(c.getArea(), 0.0, 1e-6);
}

TEST(Circle, SetNegativeFerence) {
  Circle c(0);
  c.setFerence(-10);
  EXPECT_NEAR(c.getRadius(), 0.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 0.0, 1e-6);
  EXPECT_NEAR(c.getArea(), 0.0, 1e-6);
}

TEST(Circle, SetPositiveArea) {
  Circle c(0);
  c.setArea(10);
  EXPECT_NEAR(c.getRadius(), std::sqrt(10 / M_PI), 1e-6);
  EXPECT_NEAR(c.getFerence(), 2 * M_PI * std::sqrt(10 / M_PI), 1e-6);
  EXPECT_NEAR(c.getArea(), 10, 1e-6);
}

TEST(Circle, SetZeroArea) {
  Circle c(0);
  c.setArea(0);
  EXPECT_NEAR(c.getRadius(), 0.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 0.0, 1e-6);
  EXPECT_NEAR(c.getArea(), 0.0, 1e-6);
}

TEST(Circle, SetNegativeArea) {
  Circle c(0);
  c.setArea(-10);
  EXPECT_NEAR(c.getRadius(), 0.0, 1e-6);
  EXPECT_NEAR(c.getFerence(), 0.0, 1e-6);
  EXPECT_NEAR(c.getArea(), 0.0, 1e-6);
}

TEST(Gap, PositiveValues) {
  EXPECT_NEAR(gap(6378000.1, 1), 0.15915494319051504, 1e-6);
}

TEST(Gap, ZeroValues) {
  EXPECT_NEAR(gap(0, 0), 0, 1e-6);
}

TEST(Gap, ZeroAdditionalLength) {
  EXPECT_NEAR(gap(6378000.1, 0), 0, 1e-6);
}

TEST(CalculatePathAndFenceCost, PositiveValues) {
  EXPECT_NEAR(pathAndFenceCost(3, 1, 1000, 2000), 72256.63103256523, 1e-6);
}

TEST(CalculatePathAndFenceCost, ZeroValues) {
  EXPECT_NEAR(pathAndFenceCost(0, 0, 1000, 2000), 0, 1e-6);
}

TEST(CalculatePathAndFenceCost, ZeroCosts) {
  EXPECT_NEAR(pathAndFenceCost(3, 1, 0, 0), 0, 1e-6);
}

TEST(CalculatePathAndFenceCost, ZeroPoolRaduis) {
  EXPECT_NEAR(pathAndFenceCost(0, 1, 1000, 2000), 15707.963267948964, 1e-6);
}

TEST(CalculatePathAndFenceCost, ZeroPathWidth) {
  EXPECT_NEAR(pathAndFenceCost(3, 0, 1000, 2000), 37699.11184307752, 1e-6);
}