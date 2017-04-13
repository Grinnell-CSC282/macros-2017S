#ifndef _INT_STACK_H_
#define _INT_STACK_H_

/**
 * int-stack.h
 *   Stacks of ints
 *
 * <insert MIT license>
 */

#undef TYPE
#undef TYPED

#define TYPE int
#define TYPED(THING) i_ ## THING

#include "generic-stack.h"

#endif // _INT_STACK_H_

