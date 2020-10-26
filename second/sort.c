#define _CRT_SECURE_NO_WARNINGS

#include "sort.h"
#include "util.h"
#include <stdio.h>
#include "color.h"

void generateRandom(int data[], int mod, int size)
{
	int cnt_i;

	for (cnt_i = 0; cnt_i < size; cnt_i++) {
		data[cnt_i] = rand() % mod;
	}

}

void swap(int* opA, int* opB)
{
	int temp;
	temp = *opA;
	*opA = *opB;
	*opB = temp;
}

int _findMax(int data[], int start, int end)
{
	int cnt_i;
	int max = start;

	for (cnt_i = start + 1; cnt_i < end; cnt_i++) {
		if (data[max] < data[cnt_i]) {
			max = cnt_i;
		}

	}
	return max;
}

int _findMin(int data[], int start, int end)
{
	int cnt_i;
	int min = start;

	for (cnt_i = start + 1; cnt_i < end; cnt_i++) {
		if (data[min] > data[cnt_i]) {
			min = cnt_i;
		}

	}
	return min;
}

void selectionSort(int data[], int size, int dir, int log)
{
	int cnt_i;
	int minpos;
	char buf[128] = { 0 };

	if (dir == INCREASING) {
		printf("오름차순 정렬\n");

		for (cnt_i = 0; cnt_i < size - 1; cnt_i++) {
			minpos = _findMin(data, cnt_i, size);
			swap(&data[cnt_i], &data[minpos]);

			if (log == LOG_PRINT) {
				sprintf(buf,"[%d 단계]", cnt_i + 1);
				printDataForSS(buf, data, size, cnt_i, minpos);
			}
		}
		if (log == LOG_PRINT) {

			printData("[최종 정렬 결과]", data, size);
			printf("\n");
		}
	}
	if (dir == DECREASING) {
		printf("내림차순 정렬\n");
		for (cnt_i = 0; cnt_i < size - 1; cnt_i++) {
			minpos = _findMax(data, cnt_i, size);
			swap(&data[cnt_i], &data[minpos]);

			if (log == LOG_PRINT) {
				sprintf(buf,"[%d 단계]", cnt_i + 1);
				printDataForSS(buf, data, size, cnt_i, minpos);
			}
		}
		if (log == LOG_PRINT) {

			printData("[최종 정렬 결과]", data, size);
			printf("\n");
		}
	}
}

void bubblesort(int data[], int size, int dir, int log)
{
	int i, j,k;
	char buf[128] = { 0 };

	if (dir == INCREASING) {
		printf("[오름차순 정렬]\n");
		for (i = size - 1; i > 0; i--) {
			for (j = 0; j < i; j++) {
				if (log == LOG_PRINT) {

					for (k = 0; k < j; k++) {
						printf("%d\t", data[k]);
					}
				}
				if (data[j] > data[j + 1]) {
					swap(&data[j], &data[j + 1]);

					if (log == LOG_PRINT) {

						textcolor(LIGHTRED, BLACK);
						printf("%d\t", data[j]);

						textcolor(BLUE, BLACK);
						printf("%d\t", data[j + 1]);

						textcolor(WHITE, BLACK);
					}
				}
				else {
					if (log == LOG_PRINT) {

						printf("%d\t", data[j]);
						printf("%d\t", data[j + 1]);
					}
				}
				if (log == LOG_PRINT) {

					printf("\n");
				}
			}
			if (log == LOG_PRINT) {
				sprintf(buf, "[%d] 단계", i + 1);
				printData(buf, data, size);
			}
		}
		if (log == LOG_PRINT) {
			printData("[[최종 정렬 결과]]", data, size);
		}
	}
	else if (dir == DECREASING) {
		printf("[내림차순 정렬]\n");
		for (i = size - 1; i > 0; i--) {
			for (j = 0; j < i; j++) {
				if (data[j] < data[j + 1]) {
						swap(&data[j], &data[j + 1]);
				}
			}
		}
		if (log == LOG_PRINT) {
			printData("[[최종 정렬 결과]]", data, size);
		}
	}
}

void insertionSort(int data[], int size, int dir, int log)
{
	int i, j;
	int key;
	char buf[128] = { 0 };

	if (dir == INCREASING) {
		printf("[오름차순 정렬]\n");

		for (i = 1; i < size; i++) {
			key = data[i];
			for (j = i - 1; j >= 0 && data[j] > key; j--) {
				data[j + 1] = data[j];
			}
			data[j + 1] = key;
		}
		if (log == LOG_PRINT) {
			printData("[[최종 정렬 결과]]", data, size);

		}
	}
	else if (dir == DECREASING) {
		printf("[내림차순 정렬]\n");

		for (i = 1; i < size; i++) {
			key = data[i];
			for (j = i - 1; j >= 0 && data[j] < key; j--) {
				data[j + 1] = data[j];
			}
			data[j + 1] = key;
		}
		if (log == LOG_PRINT) {
			printData("[[최종 정렬 결과]]", data, size);
		}
	}

}


