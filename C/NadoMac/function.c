#include <stdio.h>

// 선언
void p(int num);

void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3); // 3개의 정수를 받는함수이다 

int apple(int total, int ate); // 전체 total 개에서 ate 를 먹고 남은 사과 수 

int main_function(void) {
// 	int num = 2;
// 	//printf("num is %d\n", num); // 2
// 	p(num);

// 	num = num + 3; // num += 3;
// 	//printf("num is %d\n", num); // 5
// 	p(num);

// 	num -= 1; // num = num - 1;
// 	//printf("num is %d\n", num); // 4
// 	p(num);

// 	num *= 3;
// 	//printf("num is %d\n", num); // 12
// 	p(num);

// 	num /= 6;
// 	//printf("num is %d\n", num); // 2
// 	p(num);

// 	return 0;
// }

// 함수 종류
// 반환값이 없는 함수 
// function_without_return();

// 반환값이 있는 함수 
// int ret = function_with_return();
// p(ret);

// 파라미터(전달값) 이 없는 함수 
// function_without_params();

// 파라미터(전달값) 이 있는 함수 
// function_with_params(1, 2, 3);

// 파라미터(전달값)도 받고, 반환값이 있는 함수 
int ret = apple(5, 2); //there are 5 apples, but ate 2
return 0;
}

// 정의
void function_without_return() {
	printf("no return value function\n");
}

int function_with_return() {
	printf("return value function\n");
	return 10;
}

void function_without_params() {
	printf("there is no return params");
}

void function_with_params(int num1, int num2, int num3) {
	printf("return value function, return value is %d, %d, %d\n", num1, num2, num3);
}

int apple(int total, int ate) {
	printf("return ")
	return 
}

// 반환형 함수이름(전달값)