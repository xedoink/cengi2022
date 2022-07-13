#include <stdio.h>

int main() {
	
	//starts with 2, the first even number
	int start = 2;
	printf("The even integers between 1 and 10 are\n");
	
	//add 2 until start is equal to ten
	while (start <= 10) {
	printf("%d" , start);
	start = start + 2;
	
	}
	
	return 0;
	
}

	