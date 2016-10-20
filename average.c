#include<stdio.h>
#include"average.h"

int average(int payments[], int n) {
	int i, total, ave;
    total = 0;
	printf("%d\n", n);
	for(i=0; i<n; i++) {
        total += payments[i];
    }
	ave = total / i;

	return ave;
}
