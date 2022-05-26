#include<stdio.h>

int ARRAY1[3], ARRAY2[3], MERGEDARRAY[100], A1LIM=3, A2LIM=3;

void push(number) {
	ARRAY1[A1LIM] = number;
	A1LIM++;
	printf("\nPushed %d to ARRAY1 successfully!", number);
	printf("\nARRAY1: ");
	for (int i = 0; i < A1LIM; i++) {
		printf("%d ", ARRAY1[i]);
	}
}

void pop() {
	printf("\nPopped %d from ARRAY1 successfully!", ARRAY1[A1LIM-1]);
	A1LIM--;
	printf("\nARRAY1: ");
	for (int i = 0; i < A1LIM; i++) {
		printf("%d ", ARRAY1[i]);
	}
}

void show() {
	printf("\nARRAY1: ");
	for (int i = 0; i < A1LIM; i++) {
		printf("%d ", ARRAY1[i]);
	}
	printf("\nARRAY2: ");
	for (int i = 0; i < A2LIM; i++) {
		printf("%d ", ARRAY2[i]);
	}
	printf("\nMERGEDARRAY: ");
	for (int i = 0; i < A1LIM + A2LIM; i++) {
		printf("%d ", MERGEDARRAY[i]);
	}
}

void merge() {
	int i = 0, j = 0, k = 0;
	printf("Enter the elements of ARRAY2: ");
	for (i = 0; i < A2LIM; i++) {
		scanf("%d", &ARRAY2[i]);
	}
	for (i = 0; i < A1LIM; i++) {
		MERGEDARRAY[i] = ARRAY1[i];
	}
	for (i = A1LIM; i < A1LIM + A2LIM; i++) {
		MERGEDARRAY[i] = ARRAY2[j];
		j++;
	}
	printf("Merged successfully!");
}

int main() {
	int i, flag = 0, option, number;
	printf("Enter the elements of the Array: ");
	for (i = 0; i < A1LIM; i++) {
		scanf("%d", & ARRAY1[i]);
	}
	while (flag == 0) {
		printf("\n\nEnter options from below\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Merge\n");
		printf("4. New Array\n");
		printf("5. Show Array\n");
		printf("6. Exit\n : ");
		scanf("%d", & option);
		switch (option) {
			case 1:
				printf("Enter the number to be pushed: ");
				scanf("%d", & number);
				push(number);
				break;
			case 2:
				pop();
				break;
			case 3:
				merge();
				break;
			case 4:
				printf("Enter the elements of the Array: ");
				for (i = 0; i < A1LIM; i++) {
					printf("%d : ", i+1);
					scanf("%d", & ARRAY1[i]);
				}
				break;
			case 5:
				show();
				break;
			case 6:
				printf("\n\nExiting...\n");
				flag = 1;
				break;
		}
	}
	return 0;
}