#include <stdio.h>
void funcTask2(int array[], int size, int output);

int main() {
	int array[] = { 1, 2, 3, 4 };
	int size = sizeof(array)/sizeof(int);
	int output = 0;

	funcTask2(array, size, output);

	int arr[] = { 4, 3, 3, 4, 3, 4 };
	int sizeArr = sizeof(arr) / sizeof(int);
	int outPut = 0;

	funcTask2(arr, sizeArr, outPut);

	return 0;
}

void funcTask2(int array[], int size, int output) {
	for (size_t i = 0; i < size; i++)
	{
		output += array[i];
	}
	printf("%d\n", output);
}

