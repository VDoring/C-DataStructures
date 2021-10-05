#include <stdio.h>

void RecursiveFunc() {
	printf("이것은 재귀함수입니다!\n");
	RecursiveFunc();
}

int main() {
	RecursiveFunc();
}