#include <stdio.h>

int BSearchRecursive(int ar[], int first, int last, int target) {
	int mid;
	if (first > last)
		return -1;  // Ž�� ����
	mid = (first + last) / 2;  //Ž������� �߾� ã��

	if (ar[mid] == target)
		return mid;
	else if (target < ar[mid])
		return BSearchRecursive(ar, first, mid - 1, target);
	else
		return BSearchRecursive(ar, mid+1, last, target);
}

int main() {
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearchRecursive(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1)
		printf("Ž�� ����.");
	else
		printf("Ž�� ����! Ÿ�� ���� �ε���: %d \n", idx);
}