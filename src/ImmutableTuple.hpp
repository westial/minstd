//
// Created by jaume on 2/16/20.
//

#ifndef LCDPLOTLIB_SRC_MINSTD_TUPLE_H_
#define LCDPLOTLIB_SRC_MINSTD_TUPLE_H_

#include "Tuple.h"

template<typename A, typename B>

class ImmutableTuple : public Tuple<A, B>{
 private:
  A first;
  B second;

 public:
  ~ImmutableTuple() = default;
  ImmutableTuple(A first, B second) {
    this->first = first;
    this->second = second;
  }
  A getFirst() override {
    return this->first;
  }
  B getSecond() override {
    return this->second;
  }
};

#endif //LCDPLOTLIB_SRC_MINSTD_TUPLE_H_
