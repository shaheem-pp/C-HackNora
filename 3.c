#include <stdio.h>
int prime(num)
{
	int i, flag = 0;
	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int sumOfdigits(num)
{
	int sum = 0, temp;
	while (num != 0)
	{
		temp = num % 10;
		sum = sum + temp;
		num = num / 10;
	}
	return sum;
}
int find_factorial(num)
{
	int fact = 1, i;
	for (i = 1; i <= num; i++)
	{
		fact = fact * i;
	}
	return fact;
}
void main()
{
	int array[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sum_of_prime = 0, sum_of_digit = 0, factorial = 0;

	for (int i = 1; i < 50; i++)
	{
		if (prime(array[i]) == 1)
		{
			sum_of_prime = sum_of_prime + array[i];
		}
	}
	printf("Sum of Prime Numbers: %d\n", sum_of_prime);

	sum_of_digit = sumOfdigits(sum_of_prime);
	printf("Sum of Digits: %d\n", sum_of_digit);

	factorial = find_factorial(sum_of_digit);
	printf("Factorial: %d\n", factorial);
}