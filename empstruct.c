#include <stdio.h>

typedef struct Employee {
	char name [20];
	char address [100];
	int age;
	float salary;
} Employee;

float getAvg(Employee [], int);

int main() {
	
	const int empsize = 3;
	Employee emplist[empsize];
	for (int i = 0; i < empsize; i++)
	{
		printf("Enter the employee's %d name." , i+1);
		scanf("%s" , emplist[i].name);
		
		printf("Enter the employee's %d address" , i+1);
		scanf("%s" , emplist[i].address);
		
		printf("Enter the employee's %d age." , i+1);
		scanf("%d" , &emplist[i].age);
		
		printf("Enter the employee %d salary." , i+1);
		scanf("%f" , &emplist[i].salary);
	}
	
	printf("The average salary is");
	printf("salary = %.2f" , getAvg(emplist , empsize));
	
}

float getAvg(Employee emp[], int size)
{
	float avg = 0.0;
	for (int i = 0; i < size; i++)
		avg += emp[i].salary;
	return avg/size;
}
