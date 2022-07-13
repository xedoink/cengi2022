#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c;
	
	int *ptrA;
	int *ptrB;
	
	ptrA = &a;
	ptrB = &b;
	
	printf("Enter a value for A.");
	scanf("%d" , ptrA);
	
	printf("Enter a value for B.");
	scanf("%d" , ptrB);
	
	printf("The value of A is %d\n" , a);
	printf("The value of B is %d\n" , b);
	
	c = *ptrA + *ptrB;
	
	printf("The sum of A and B is %d" , c);
	
}