//
// Created by jaume on 4/27/20.
//

#ifndef LCDPLOTLIB_INCLUDE_MINSTD_STRING_H_
#define LCDPLOTLIB_INCLUDE_MINSTD_STRING_H_

class String {
 public:
  static long size(const char *string);
  static char *concat(
      const char **strings,
      unsigned int stringsSize,
      char *buffer,
      unsigned long bufferMaxSize
      );
  static char *concat(
      const char *string1,
      unsigned long string1Size,
      const char *string2,
      unsigned long string2Size,
      char *buffer
      );
};

#endif //LCDPLOTLIB_INCLUDE_MINSTD_STRING_H_
