#include <stdio.h>
int func(int array[], int number, int size);
int otherFunc(int array[], int number);

int main() {
   printf("start\n");
   int array[5] = { 1, 2, 3, 3, 4 };
   int size = sizeof(array)/sizeof(int);
   int number = 3;
   func(array, number, size);
   printf("The number of times %d is found in the given array is equal to: %d\n", number, func(array, number, size));

   int arr[] = { 1, 2, 3, 4, 5, 6, 7, 7, 7, 8, 9, };
   int sizeArr = sizeof(arr) / sizeof(int);
   int num = 7;
   printf("The number of times %d is found in the given array is equal to: %d\n", num, func(arr, num, sizeArr));


   int arrayy[] = { 5, 3, 4, 6, 2 };
   int numnum = 6;
   printf("The number of times %d is found in the given array is equal to: %d\n", numnum, otherFunc(arrayy, numnum));

   int aarray[] = { 8, 3, 4, 7, 6, 3, 6, 2 };
   int numnumnum = 4;
   printf("The number of times %d is found in the given array is equal to: %d\n", numnumnum, otherFunc(aarray, numnumnum));

   return 0;
}

int func(int array[], int number, int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            count = count + 1;
        }
    }
    
    return count;
}

int otherFunc(int array[], int number) {
    int count = 0;
    int size = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            count = count + 1;
        }
    }

    return count;
}