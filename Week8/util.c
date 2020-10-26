#define _CRT_SECURE_NO_WARNINGS 

#include "mytype.h"
#include <stdio.h>
#include "util.h"
void input_data(STU_PROFILE* sp, int size)
{
	int i;

	printf("이름, 학점, 영어점수를 입력하세요:\n ");
	for (i = 0; i < size; i++) {
		printf("%d-th 학생: \n", i + 1);
		scanf("%s%lf%d", (sp + i)->name, &(sp+i)->grade, &(sp+i)->english);
	}
}

void elite(STU_PROFILE* sp, int size)
{
	int i;

	printf("Followings are elites:\n");
	for (i = 0; i < size; i++) {
		if (((sp + i)->english >= 90) && ((sp + i)->grade >= 4.0)) {
			printf("%s, %lf, %d\n", (*(sp + i)).name, (*(sp + i)).grade, (*(sp + i)).english);
		}
	}
}
