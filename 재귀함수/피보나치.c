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
	printf("3��° �Ǻ���ġ �� = %d\n", fibonacci(3));
	printf("5��° �Ǻ���ġ �� = %d\n", fibonacci(5));
	printf("10��° �Ǻ���ġ �� = %d", fibonacci(10));
}