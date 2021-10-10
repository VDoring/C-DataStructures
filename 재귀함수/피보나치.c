#include <stdio.h>

int fibonacci(int n) {
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int i;
	printf("3번째 피보나치 수 = %d\n", fibonacci(3));
	printf("5번째 피보나치 수 = %d\n", fibonacci(5));
	printf("10번째 피보나치 수 = %d", fibonacci(10));
}