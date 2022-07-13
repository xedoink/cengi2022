#include <stdio.h>

typedef struct students {
	char name [20];
	char address [100];
	float cmarks;
	float ismarks;
	
} students;

float getavg(students [], int);

int main() {
	
	const int studsize = 3;
	students studlist[studsize];
	for (int i = 0; i < studsize; i++)
	{
	printf("Enter the student's name." , i+1);
	scanf("%s" , studlist[i].name);
	
	printf("Enter the student's address." , i+1);
	scanf("%s" , studlist[i].address);
	
	printf("Enter the student's C Programming grade." , i+1);
	scanf("%d" , studlist[i].cmarks);
	
	printf("Enter the student's Information Systems grade." , i+1);
	scanf("%d" , studlist[i].ismarks);
	
	}
	
	printf("The average C Programming grade is");
	printf("Average grade = %.2f" , getavg(studlist , studsize));
	
}

float getavg(students stu[], int size)
{
	float avg = 0.0;
	for (int i = 0; i < size; i++)
		avg += stu[i].cmarks;
	return avg/size;
}

