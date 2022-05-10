#include<stdio.h>
int main() {
	int array1[5], array2[5], merged_array[10], choice = 0;
	for (int i = 0; i < 5; i++) {
		printf("Enter the value of array1[%d]: ", i);
		scanf("%d", & array1[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("Enter the value of array2[%d]: ", i);
		scanf("%d", & array2[i]);
	}
	printf("\n\n");
	for (int i = 0; i < 5; i++) {
		merged_array[i] = array1[i];
	}
	for (int i = 5; i < 10; i++) {
		merged_array[i] = array2[i - 5];
	}
	printf("The merged array is: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", merged_array[i]);
	}
	return 0;
}