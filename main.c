#include <stdio.h> // for the fprintf

#include "func.h"

int main()
{
    printf("******** function test !! *********\n");

    uint32_t A[] = {23171, 21011, 21123, 21366, 21013, 21367};

    //uint32_t A[] = {23171, 21011, 20000, 19000, 15000, 15001};
    //uint32_t A[] = {23171, 21011, 20000, 19000, 15000, 14999};

    uint32_t sol = solution( A, sizeof(A)/sizeof(A[0]) );
    printf("Solution is: %i\n", sol);

    return 0;
}
