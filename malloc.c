#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char *text;
	int n;
	
	printf("What would you like to say?");
	scanf("%s" , &n);
	
	text = (char*)malloc(n*sizeof(char));
	if (text == NULL) {
		printf("Memory could not be allocated.");
	exit(0); }
	
	else
	{
	
	printf("You entered %s" , text);
	
	free(text);
	}
}
	
