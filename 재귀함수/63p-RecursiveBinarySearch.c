#include <stdio.h>

int BSearchRecursive(int ar[], int first, int last, int target) {
	int mid;
	if (first > last)
		return -1;  // Å½»ö ½ÇÆĞ
	mid = (first + last) / 2;  //Å½»ö´ë»óÀÇ Áß¾Ó Ã£±â

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
		printf("Å½»ö ½ÇÆĞ.");
	else
		printf("Å½»ö ¼º°ø! Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);
}