#include "func.h"

#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)

uint32_t solution(uint32_t A[], uint32_t N)
{

    int32_t profit = 0;
    int32_t min_price = A[0];

    int32_t profit_here;

    for(uint32_t i=1; i < N; ++i)
    {
        profit_here = MAX(0, A[i] - min_price);
        profit = MAX(profit_here, profit);

        min_price = MIN(min_price, A[i]);

        printf("   -> \tprofit_here = %i, \tprofit = %i, \tmin_price = %i\n", profit_here, profit, min_price);


    }

    return profit;
}
