#pragma 

#define INCREASING 1
#define DECREASING 2

#define LOG_PRINT 1
#define LOG_NOT_PRINT 0

void generateRandom(int data[], int mod, int size);
void swap(int* opA, int* opB);
void bubblesort(int data[], int size, int dir, int log);
void selectionSort(int data[], int size, int dir, int log);
int _findMax(int data, int cnt_i, int size);
int _findMin(int data, int cnt_i, int size);


void insertionSort(int data[], int size, int dir, int log);