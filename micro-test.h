#ifndef _MICRO_TEST_H_
#define _MICRO_TEST_H_

/**
 * micro-test.h
 *  A very simple testing framework.  (Slightly improved assert)
 *
 */ 

// +---------+-------------------------------------------------------
// | Headers |
// +---------+

#include <stdio.h>

// +--------+--------------------------------------------------------
// | Macros |
// +--------+

#define CHECK_EQUAL_INT(EXPECTED, ACTUAL) \
  do \
    { \
      if (__TESTING__) \
        { \
          int expected = EXPECTED; \
          int actual = ACTUAL; \
          if (expected != actual) \
            { \
              fprintf (stderr, \
                       "%s, line %d: For '%s', expected %d, got %d\n", \
                       __FILE__, __LINE__, #ACTUAL, expected, actual); \
            } \
        } \
    } \
  while (0)

#endif // _MICRO_TEST_H_
