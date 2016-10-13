#include <stdio.h>
#include "sum.h"

int main(void)
{
    int peyments[] = {1, 2, 3};
    if(sum(peyments) == 6) {
	printf("%d\n", sum(peyments));
	printf("テスト成功\n");
    } else {
	printf("%d\n", sum(peyments));
	printf("テスト失敗\n");
    }

    return 0;
}
