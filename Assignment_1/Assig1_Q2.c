#include<stdio.h>
#include<string.h>

#define SIZE 5

struct employee
{
	int empid;
	char name[20];
};

int main()
{
	struct employee emp[SIZE] = {
		{11, "Abhishek"},
		{12, "Ritesh"},
		{13, "Nikhil"},
		{14, "Rushikesh"}, 
		{15, "Sahil"}
	};

	int i, choice, id, flag = 0;
	char name[20];

	printf("1. Search employee by empid\n");
	printf("2. Search employee by name\n");
	printf("Enter your choice : ");
	scanf("%d", &choice);

	if(choice == 1)
	{
		printf("\nEnter employee ID : ");
		scanf("%d", &id);

		for(i = 0; i < SIZE; i++)
		{
			if(emp[i].empid == id)
			{
				printf("\n");
				printf("Employee found.\n");
				printf("Employee ID : %d\n", emp[i].empid);
				printf("Employee Name : %s\n", emp[i].name);
				flag = 1;
				break;
			}
		}
	}
	else if(choice == 2)
	{
		printf("\nEnter employee name : ");
		scanf("%s", name);

		for(i = 0; i < SIZE; i++)
		{
			if(strcmp(emp[i].name, name) == 0)
			{
				printf("\n");
				printf("Employee found.\n");
				printf("Employee ID : %d\n", emp[i].empid);
				printf("Employee Name : %s\n", emp[i].name);
				flag = 1;
				break;
			}
		}
	}
	else
	{
		printf("\nInvalid choice.\n");
		return 0;
	}

	if(flag == 0)
		printf("\nEmployee not found.\n");

	return 0;
}










