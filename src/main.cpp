#include "main.h"

#include <cstdlib>
#include <cstring>

static size_t ConvertRomanLetterToInteger(const char roman_letter);

static size_t ForEveryLetterInRomanString(const char *roman_string);

static bool CheckValidityOfRomanString(const char *roman_string,
                                       size_t roman_string_len);

static size_t ConvertRomanLetterToInteger(const char roman_letter) {
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

static bool IsRomanLetterInvalid(const char roman_letter) {
  return ConvertRomanLetterToInteger(roman_letter) == -1;
}

static bool CheckValidityOfRomanString(const char *roman_string,
                                       size_t roman_string_len) {
  for (int i = 0; i < roman_string_len; i++) {
    if (IsRomanLetterInvalid(roman_string[i])) return false;
  }
  return true;
}

static size_t ForEveryLetterInRomanString(const char *roman_string,
                                          size_t roman_string_len) {
  size_t accumulated_value = ConvertRomanLetterToInteger(roman_string[0]);

  for (int i = 1; i < roman_string_len; i++) {
    int current_number = ConvertRomanLetterToInteger(roman_string[i]);
    int previous_number = ConvertRomanLetterToInteger(roman_string[i - 1]);
    if (previous_number >= current_number) {
      accumulated_value = accumulated_value + current_number;
    } else {
      accumulated_value = current_number - previous_number;
    }
  }
  return accumulated_value;
}

size_t RomanToInt(const char *roman_string) {
  size_t converted_roman_int = 0;
  int length = strlen(roman_string);
  if (length > 0) {
    if (CheckValidityOfRomanString(roman_string, length))
      converted_roman_int = ForEveryLetterInRomanString(roman_string, length);
    else
      converted_roman_int = -1;
  }
  return converted_roman_int;
}