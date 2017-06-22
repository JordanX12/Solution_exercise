#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

#include <stdint.h> // integer definitions

/** \brief Given a zero-indexed array A consisting of N integers containing daily
    prices of a stock share for a period of N consecutive days, returns the maximum
    possible profit from one transaction during this period, 0 otherwise.

    \param A is an integer within the range [0, 200000].
    \param N is an integer within the range [0, 400000];

    \return The maximum possible profit from one transaction during this period,
         0 otherwise.
**/

uint32_t solution(uint32_t A[], uint32_t N);

#endif // FUNC_H_INCLUDED
