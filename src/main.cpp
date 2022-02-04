#include "main.h"

#include <cstdlib>
#include <cstring>

size_t RomanToInt_SwitchCase(const char roman_letter);
size_t AccumulatedValue(const char *roman_letter, int size);

size_t RomanToInt(const char *roman_letter) {
  size_t ret = 0;
  int lenght = strlen(roman_letter);

  return AccumulatedValue(roman_letter, lenght);
}

size_t RomanToInt_SwitchCase(const char roman_letter) {
  switch (roman_letter) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    default:
      return -1;
  }
}

size_t AccumulatedValue(const char *roman_letter, int size) {
  size_t retval = RomanToInt_SwitchCase(roman_letter[0]);
  size_t prev_val = 0;
  size_t curr_val = 0;
  for (int i = 1; i < size; i++) {
    prev_val = RomanToInt_SwitchCase(roman_letter[i - 1]);
    curr_val = RomanToInt_SwitchCase(roman_letter[i]);
    if (prev_val >= curr_val) {
      retval += curr_val;
    } else {
      retval = curr_val - prev_val;
    }
  }
  return retval;
}