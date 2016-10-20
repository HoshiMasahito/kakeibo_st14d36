#include <stdio.h>
#include "sum.h"
#include "average.h"

int main(void)
{
    int i, c;
    char date[256];
    double payments[256];
    FILE *fp;

    fp = fopen("spending.txt", "a");
    if(fp == NULL) {
	printf("ファイルを開くことができませんでした。\n");
	return 0;
    }
    printf("記録と削除のどちらを行いますか。\n記録ならば0、削除ならば1を入力してください。\n");
    scanf("%d", &c);

    if(c == 0) {
    printf("日付を入力してください。\n");
    scanf("%s", date);    
    fprintf(fp, "%s\n", date);

    i = 0;
    printf("各支出額を入力してください。\n入力を終了する場合は0を入力してください。\n");
    while(1) {
	scanf("%lf", &payments[i]);
	if(payments[i] == 0) {
	    break;
	};
	i++;
    }

    printf("sum: %lf\n", sum(payments, i));
    printf("average: %lf\n", average(payments, i));

    fprintf(fp, "総支出額: %lf円\n", sum(payments, i));
    fprintf(fp, "平均支出額: %lf円\n", average(payments, i));

    fprintf(fp, "\n");

    printf("総支出額と平均支出額をspending.txtに記録しました。\n");

    } else if(i == 1) {
	//ファイルのデータの削除を記述する

    } else {
	printf("作業を終了します。\n");
    }

    fclose(fp);
    return 0;
}
