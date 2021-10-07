#include <stdio.h>

void RecursiveFunc(int num) {
	if (num > 10)
		return;
	printf("%d¹øÂ°\n", num);
	RecursiveFunc(num + 1);
}

int main() {
	int user_num;
	scanf("%d", &user_num);

	RecursiveFunc(user_num);
}