#include <stdio.h>

int main() {
	
	int start, sum = 0;
	
	for(start = 0 ; start <= 10 ; start++)
	{
		sum = sum + start;
	} 
	printf("The sum of the first 10 natural numbers is %d", sum);
	
}