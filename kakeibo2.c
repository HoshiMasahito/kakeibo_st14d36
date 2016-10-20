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
	printf("�t�@�C�����J�����Ƃ��ł��܂���ł����B\n");
	return 0;
    }
    printf("�L�^�ƍ폜�̂ǂ�����s���܂����B\n�L�^�Ȃ��0�A�폜�Ȃ��1����͂��Ă��������B\n");
    scanf("%d", &c);

    if(c == 0) {
    printf("���t����͂��Ă��������B\n");
    scanf("%s", date);    
    fprintf(fp, "%s\n", date);

    i = 0;
    printf("�e�x�o�z����͂��Ă��������B\n���͂��I������ꍇ��0����͂��Ă��������B\n");
    while(1) {
	scanf("%lf", &payments[i]);
	if(payments[i] == 0) {
	    break;
	};
	i++;
    }

    printf("sum: %lf\n", sum(payments, i));
    printf("average: %lf\n", average(payments, i));

    fprintf(fp, "���x�o�z: %lf�~\n", sum(payments, i));
    fprintf(fp, "���ώx�o�z: %lf�~\n", average(payments, i));

    fprintf(fp, "\n");

    printf("���x�o�z�ƕ��ώx�o�z��spending.txt�ɋL�^���܂����B\n");

    } else if(i == 1) {
	//�t�@�C���̃f�[�^�̍폜���L�q����

    } else {
	printf("��Ƃ��I�����܂��B\n");
    }

    fclose(fp);
    return 0;
}
