#include <stdio.h>
#include "sum.h"

int sum(int payments[], int n)
{
    int i, total;
    total = 0;
    printf("%d\n", n);
    for(i = 0; i < n; i++) {
	total += payments[i];
    }
    return total;
}
