#include <stdio.h>

char *country [5] = {"USA" , "Canada" , "France" , "Italy" , "UK"};
char *capital [5] = {"Washington" , "Ottawa" , "Paris" , "Rome" , "London"};

int main() {
	FILE *fp;
	fp = fopen("Countries.txt" , "w");
	fprintf(fp , *country);
	fprintf(fp , *capital);
	
}
	