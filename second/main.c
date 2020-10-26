#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "sort.h"
#include <time.h>
#include "util.h"
#include <Windows.h>

LARGE_INTEGER Frequency;
LARGE_INTEGER BeginTime;
LARGE_INTEGER EndTime;
__int64 elapsed;
double duringtime;

#define NUMDATA 10
#define BENCHNUM 100000

void test1(int order) {
	int data[NUMDATA] = { 69, 10,30,2,16,8,31,22,17,91 };
	int cnt_i, cnt_j;
	int minpos;
	int temp;
}

void test2() {
	int i;
	int data[NUMDATA] = { 0 };

	srand((unsigned int)time(NULL));
	generateRandom(data, 50, NUMDATA);

	printData("원본데이터", data, NUMDATA);
	selectionSort(data, NUMDATA, INCREASING, LOG_PRINT);
	selectionSort(data, NUMDATA, DECREASING, LOG_PRINT);
	printData("정렬결과", data, NUMDATA);
}

void test3() {
	int data[NUMDATA] = { 0 };

	srand((unsigned int)time(NULL));
	generateRandom(data, 20, NUMDATA);

	printData("원본데이터", data, NUMDATA);

	bubblesort(data, NUMDATA, INCREASING, LOG_NOT_PRINT);

	printData("정렬결과", data, NUMDATA);

	bubblesort(data, NUMDATA, DECREASING, LOG_PRINT);

	printData("정렬결과", data, NUMDATA);
}

void test4() {
	int data[NUMDATA] = { 0 };

	srand((unsigned int)time(NULL));
	generateRandom(data, 50, NUMDATA);

	printData("원본데이터", data, NUMDATA);

	insertionSort(data, NUMDATA, INCREASING, LOG_PRINT);

	printData("정렬결과", data, NUMDATA);

	insertionSort(data, NUMDATA, DECREASING, LOG_PRINT);

	printData("정렬결과", data, NUMDATA);
}

void benchmark(){
	int data[BENCHNUM] = { 0 };
	int original[BENCHNUM] = { 0 };

	srand((unsigned int)time(NULL));
	generateRandom(data, 100000, NUMDATA);
	QueryPerformanceFrequency(&Frequency);

	// 선택정렬
	memcpy(data, original, sizeof(int) * BENCHNUM);
	QueryPerformanceCounter(&BeginTime);
	selectionSort(data, BENCHNUM, INCREASING, LOG_NOT_PRINT);
	QueryPerformanceCounter(&EndTime);

	elapsed = EndTime.QuadPart - BeginTime.QuadPart;
	duringtime = (double)elapsed / (double)Frequency.QuadPart;
	printf("Time for selectionSort: %lf\n", duringtime);

	// 삽입정렬
	memcpy(data, original, sizeof(int) * BENCHNUM);

	QueryPerformanceCounter(&BeginTime);
	insertionSort(data, BENCHNUM, INCREASING, LOG_NOT_PRINT);
	QueryPerformanceCounter(&EndTime);

	elapsed = EndTime.QuadPart - BeginTime.QuadPart;
	duringtime = (double)elapsed / (double)Frequency.QuadPart;
	printf("Time for insertionSort: %lf\n", duringtime);

	// 거품정렬
	memcpy(data, original, sizeof(int) * BENCHNUM);
	QueryPerformanceCounter(&BeginTime);
	bubblesort(data, BENCHNUM, INCREASING, LOG_NOT_PRINT);
	QueryPerformanceCounter(&EndTime);

	elapsed = EndTime.QuadPart - BeginTime.QuadPart;
	duringtime = (double)elapsed / (double)Frequency.QuadPart;
	printf("Time for bubbleSort: %lf\n", duringtime);
}
int main() {
	//test2();
	//test3();
	benchmark();
	return 0;
}