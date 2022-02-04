#include "main.h"

#include <cstdlib>
#include <cstring>

size_t RomanToInt(const char *roman_letter) {
  size_t ret = 0;
  int lenght = strlen(roman_letter);
  for (int i = 0; i < lenght; i++) {
    if (roman_letter[i] == 'I') ret = ret + 1;
  }
  return ret;
}