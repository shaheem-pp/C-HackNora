#include<stdio.h>

int prime(int n) {
	int i, flag = 0;
	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return 1;
	else
		return 0;
}

int factorialOfSum(int n) {
	int i, factorial = 1;
	for (i = 1; i <= n; i++) {
		factorial = factorial * i;
	}
	return factorial;
}

int main() {
	int i, j, n, sum = 0;
	printf("enter the number of elements in the array\n");
	scanf("%d", & n);
	int a[n];
	
	printf("enter the elements of the array\n");
	
	for (i = 0; i < n; i++) {
		scanf("%d", & a[i]);
	}
	
	printf("prime numbers are ");
	
	for (i = 0; i < n; i++) {
		if (prime(a[i]) == 1 && a[i] > 1) {
			sum = sum + a[i];
			printf("%d ", a[i]);
		}
	}

	printf("\n");
	printf("sum of prime numbers is %d\n", sum);

	int fact = factorialOfSum(sum);
	printf("Factorial of Sum of Prime number is %d\n", fact);

	return 0;
}