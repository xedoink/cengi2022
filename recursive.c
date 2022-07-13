#include <stdio.h>

int rangesum(int);

int main()

{
	int n;
	int sum;
	
	printf("Enter a number for N, creating the range.");
	scanf("%d" , &n);
	
	sum = rangesum(n);
	printf("The sum of the numbers from 1 to %d is %d" , n , sum);
	
}

int rangesum(int n)
{
	int res;
	if (n == 1)
	{
		return (1);
	}else
	{
		res = n + rangesum(n - 1);
	}
	return (res);
}

	
	