//
// Created by jaume on 4/27/20.
//

#include "String.h"
#include "Array.hpp"
#include <climits>
long String::size(const char *string) {
  long index = 0;
  while ('\0' != string[index]) {
    if (++index > LONG_MAX) {
      return -1;
    }
  }
  return index + 1;
}
char *String::concat(
    const char **strings,
    unsigned int stringsSize,
    char *buffer,
    unsigned long bufferMaxSize
) {
  unsigned long resultSize = 1;           // +1 Due to null terminator
  unsigned int index = 0;
  while (index < stringsSize) {
    unsigned long addingSize = size(strings[index]);
    if (-1 == addingSize) {
      break;
    }
    if (bufferMaxSize < addingSize + resultSize - 1) {     // -1 null
      addingSize -= (bufferMaxSize - resultSize + 1);
    }
    buffer = concat(buffer, resultSize, strings[index], addingSize, buffer);
    resultSize += addingSize - 1;
    ++index;
  }
  return buffer;
}
char *String::concat(
    const char *string1,
    unsigned long string1Size,
    const char *string2,
    unsigned long string2Size,
    char *buffer) {
  Array<char>::copy(string1, buffer, (long) string1Size - 1);
  Array<char>::copy(string2, &buffer[string1Size - 1], (long) string2Size);
  return buffer;
}
