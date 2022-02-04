#include "main.h"

#include <cstdlib>
#include <cstring>

size_t RomanToInt_SwitchCase(const char roman_letter);
size_t AccumulatedValue(const char *roman_letter, int size);
bool validationRomanLetters(const char *roman_letter);
bool validationRomanString(const char *roman_letter, int size);
bool validationCounterRomanString(const char *roman_letter, int size);


size_t RomanToInt(const char *roman_letter) {
  size_t ret = -1;
  int lenght = strlen(roman_letter);

  if (validationCounterRomanString(roman_letter, lenght) )
  {
    ret = AccumulatedValue(roman_letter, lenght);
  }

  return ret;
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

bool validationRomanLetters(const char roman_letter)
{
  return RomanToInt_SwitchCase(roman_letter) == -1;
}

bool validationRomanString(const char *roman_letter, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (validationRomanLetters(roman_letter[i]))
    {
      return false;
    }
  }

  return true;
}


bool validationCounterRomanString(const char *roman_letter, int size)
{
  int s_counterValue = 1;
  char s_prevValue = roman_letter[0];

  if (validationRomanLetters(s_prevValue))
  {
    return false;
  }

  for (int i = 1; i < size; i++)
  {
    if (validationRomanLetters(roman_letter[i]))
    {
      return false;
    }

    if (s_prevValue == roman_letter[i])
    {
      s_counterValue++;
    }
    else
    {
      s_counterValue = 1;
    }

    if (s_counterValue > 3)
    {
      return false;
    }

    s_prevValue = roman_letter[i];
  }

 return true;
}

