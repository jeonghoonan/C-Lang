#include <stdio.h>

int main(void) {
	int num = 2;
	printf("num is %d\n", num); // 2

	num = num + 3; // num += 3;
	printf("num is %d\n", num); // 5

	num -= 1; // num = num - 1;
	printf("num is %d\n", num); // 4

	num *= 3;
	printf("num is %d\n", num); // 12

	num /= 6;
	printf("num is %d\n", num); // 2

	return 0;
}