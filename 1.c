#include <stdio.h>

void main() {
	int num = 10, first = 0, second = 1, third;
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
}