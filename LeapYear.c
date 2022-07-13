#include <stdio.h>

int main() {
	int year;
	printf("What year is it??");
	scanf("%d" , &year); 
	
	//check if year is divisible by 400, making it true regardless
	if(year % 400 == 0) {
		printf("%d is divisible by 400, making it a leap year." , year) ;
	}
	//check if year is not divisible by 100 but divisible by 4
	else if(year % 4 == 0) {
		printf("%d is divisible by 4 but not by 100, making it a leap year." , year);
	}
	//check if year is divisible by 100 but not by 400
	else if(year % 100 == 0) {
	printf("%d is divisible by 100 but not by 400, making it not a leap year." , year);
	//every other year is not a leap year
	}
	else {
		printf("%d is not a leap year in any way." , year);
	}
	return 0;
	
}

