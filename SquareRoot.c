#include <stdio.h>
#include <math.h>

int Square() {
	double number , squareroot;
	
	printf("Enter a number.");
	scanf("%lf , &number");
	
	squareroot = sqrt(number);
	
	printf("The square root of %.2lf = %.2lf" , number, squareroot);
	
	return 0;
	
}
int main(); 
	
	Square();
}