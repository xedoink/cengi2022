#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int lower1 = 1, upper1 = 69, count1 = 5;
	
	srand(time(0));
	
	printf("The red numbers are: ");
	for (int i = 0; i < count1; i++){
		int num = (rand() % (upper1 - lower1 + 1)) + lower1;
		printf("%d " , num);
	}

	int lower2 = 1, upper2 = 26, count2 = 1;
	
	srand(time(0));
	
	printf("\nYour white number is: ");
	for (int i = 0; i < count2; i++){
		int num = (rand() % (upper2 - lower2 + 1)) + lower2;
		printf("%d " , num);
	}


}

