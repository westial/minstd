/*
 * Array.h
 *
 *  Created on: Jun 30, 2019
 *      Author: jaume
 */

#ifndef UTIL_ARRAY_H_
#define UTIL_ARRAY_H_

template<typename T>
class Array {
 public:
  static void copy(const T *source, T *destination, long size) {
    for (int i = 0; i < size; i++) {
      destination[i] = source[i];
    }
  }
  static T **append(
      T **target,
      long size,
      T *item) {
    auto **tmp = new T *[size + 1];
    for (int i = 0; i < size; i++) {
      tmp[i] = target[i];
    }
    delete []target;
    tmp[size] = item;
    target = tmp;
    return target;
  }
  static void fill(T *filling, T *destination, long size) {
    for (int i = 0; i < size; i++) {
      destination[i] = *filling;
    }
  }
  static bool equal(const T *sample1, const T *sample2, long size) {
    for (int i = 0; i < size; i++) {
      if (sample1[i] != sample2[i]) {
        return false;
      }
    }
    return true;
  }
  static void slice(
      const T *source,
      T *destination,
      const long start,
      const long size,
      const long stride
  ) {
    for (long i = 0; i < size; i += stride) {
      destination[i] = source[i + start];
    }
  }
  static void slice(
      const T *source,
      T *destination,
      const long start,
      const long size
  ) {
    slice(source, destination, start, size, 1);
  }
};

#endif /* UTIL_ARRAY_H_ */
