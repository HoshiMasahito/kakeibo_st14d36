#include <stdio.h>
#include "sum.h"

int sum(int peyments[])
{
    int i, n, total;
    n = sizeof(peyments)/sizeof(peyments[0]);
    total = 0;
    printf("%d\n", n);
    for(i = 0; i < n+1; i++) {
	total += peyments[i];
    }
    return total;
}
