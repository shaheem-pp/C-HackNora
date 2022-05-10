#include<stdio.h>
int search(int a[], int n, int x) {
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			return i;
		}
	}
	return -1;
}
void main() {
	int matrix[3][3], i, j, search_num;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Enter the value of matrix[%d][%d]: ", i, j);
			scanf("%d", & matrix[i][j]);
		}
	}
	printf("Enter the number to be searched: ");
	scanf("%d", & search_num);
	int index = search(matrix[0], 3, search_num);
	if (index != -1) {
		printf("The number is found at %dth position\n", index);
	} else {
		printf("The number is not found\n");
	}
}