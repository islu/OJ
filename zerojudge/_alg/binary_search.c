#include <stdio.h>

// 限制：必須為從小至大的陣列且數字僅出現 1 次
// 回傳：找到數字回傳該數字所處陣列的 index，否則回傳 -1
int SimpleBinarySearch(int[], int, int);

int main() {
	int ary[10] = {1, 2, 3, 4, 7, 8, 10, 11, 12, 30};
	printf("%d\n", SimpleBinarySearch(ary, 10, 5));
	printf("%d\n", SimpleBinarySearch(ary, 10, 1));
	printf("%d\n", SimpleBinarySearch(ary, 10, 12));
	return 0;
}

int SimpleBinarySearch(int array[], int size, int target) {
	int left = 0;
	int right = size - 1;
	while (left <= right ) {
		int middle = (left + right) / 2;
		if (array[middle] == target) {
			return middle;
		} else if (array[middle] > target) {
			right = middle - 1;
		} else if (array[middle] < target) {
			left = middle + 1;
		}
	}
	return -1;
}
