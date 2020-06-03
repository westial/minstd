//
// Created by jaume on 2/21/20.
//

#ifndef LCDPLOTLIB_INCLUDE_MINSTD_TUPLE_H_
#define LCDPLOTLIB_INCLUDE_MINSTD_TUPLE_H_

template<typename A, typename B>

class Tuple {
   public:
    virtual ~Tuple() = default;
    virtual A getFirst() = 0;
    virtual B getSecond() = 0;
};

#endif //LCDPLOTLIB_INCLUDE_MINSTD_TUPLE_H_
