#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	
	char str[100],camelcase[100];
	int upper = 0 , i = 0 , n = 0;
	printf("Enter a sentence.\n");
	scanf("%s" , str);
	while (str[i]!='\0')
	{
		if (str[i]==' ')
		{
			i++;
			upper = 1;
			continue;
		}
		if (upper == 1)
		{
			camelcase[n];strupr(str[i]);
			upper = 0;
		}
		else
		{
			camelcase[n]; str[i];
		}
		i++;
		n++;
	}
	printf("Your camelcase is %s" , camelcase);
	
}



