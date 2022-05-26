#include <stdio.h>

int main() {
	int num, first = 0, second = 1, third;
	printf("Enter the Fibonacci Number Limit: ");
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		if (first >= num) {
			break;
		} else {
			printf("%d ", first);
			third = first;
			first = second;
			second = third + first;
		}
	}
	return 0;
}