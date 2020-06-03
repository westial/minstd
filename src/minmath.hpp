//
// Created by jaume on 2/22/20.
//

#ifndef LCDPLOTLIB_INCLUDE_MINSTD_MINMATH_H_
#define LCDPLOTLIB_INCLUDE_MINSTD_MINMATH_H_

#define EPSILON 0.0000001 // least minimum value for comparison

double sqrt(double _val) {
  double low = 0;
  double high = _val;
  double mid = 0;

  while (high - low > EPSILON) {
    mid = low + (high - low) / 2; // finding mid value
    if (mid*mid > _val) {
      high = mid;
    } else {
      low = mid;
    }
  }
  return mid;
}

double hypotenuse(double sideA, double sideB) {
  return sqrt(sideA * sideA + (sideB * sideB));
}

template <typename D>
D ruleOfThree(
    D coord,
    D longestCoord,
    D maximum) {
  return (coord * maximum) / longestCoord;
}

#endif //LCDPLOTLIB_INCLUDE_MINSTD_MINMATH_H_