
#include <windows.h>
#include "util.h"
#include <stdio.h>
#include "color.h">

void textcolor(int foreground, int background) {
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void printData(char* str, int data[], int size)
{
	int cnt_i;
	printf("[%s]\n", str);

	for (cnt_i = 0; cnt_i < size; cnt_i++) {
		printf("%d\t", data[cnt_i]);
	}
	printf("\n");
}

void printDataForSS(char* str, int data[], int size, int pivot, int minPos) {
	int cnt_i;
	printf("\n[%s]\n", str);

	for (cnt_i = 0; cnt_i < size; cnt_i++) {
		if ((cnt_i != 0) && !(cnt_i % 8)) {
			printf("\n");
		}
		if (cnt_i == pivot) {
			textcolor(LIGHTRED, BLACK);
		}
		else if (cnt_i == minPos) {
			textcolor(BLUE, BLACK);
		}
		printf("%d\t", data[cnt_i]);
		textcolor(WHITE, BLACK);
	}
	printf("\n");
}




