#include <stdio.h>
unsigned long int date_encode(int year, int month, int day);
int* date_decode(unsigned n);
void binary(unsigned n);

int main(){
    printf("start\n");

	unsigned result = date_encode(2021, 12, 17);
	binary(result);				
	date_decode(result);

	return 0;
}

int* date_decode(unsigned n) {
	int day = n & 31;
	int month = n >> 5 & 15;
	int year = n >> 9 & 4095;
	int date[3] = { year, month, day };

	printf("day = %d, month = %d, year = %d\n", date[2], date[1], date[0]);
	return date;
}

unsigned long int date_encode(int year, int month, int day) {
	unsigned long int encoded;
	encoded = year << 9;
	encoded = encoded | month << 5;
	encoded = encoded | day;

	return  encoded;
}

void binary(unsigned n)
{
	unsigned i;
    
	for (i = 1 << 31; i > 0; i = i / 2) {
		(n & i) ? printf("1") : printf("0");
		// if(n&i){
		// 	printf("1");
		// } else {
		// 	printf("0");
		// }
	}
	printf("\n");
}