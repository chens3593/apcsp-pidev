#include <stdio.h>
#include <string.h>

struct Student {
	char firstName[50];
	char lastName[100];
	int age;
	int studentid;
};

void printStudent(struct Student* student)
{
	printf("The student's name is %s %s\n", student->firstName, student->lastName);
	printf("The student's age is %d\n", student->age);
	printf("The student's id number is %d\n", student->studentid);
}

int main()
{
	int numStudents=0;
	char input[256];
	printf("Enter the number of students (between 1 and 10): \n");
	while(1)
	{
		fgets(input, 256, stdin);
		if(sscanf(input, "%d", &numStudents)==1 && numStudents>=1 && numStudents <=10) break;
		printf("Not a valid integer, try again!\n");
	}
	struct Student students[numStudents];
	char name[50];
	int numInput;
	for(int i=0; i<numStudents; i++)
	{
		printf("Enter the student's first name: \n");
		while(1)
		{
			fgets(input, 256, stdin);
			if(sscanf(input, "%s", name)==1) break;
			printf("Not a valid string, try again\n");
		}
		strcpy(students[i].firstName, name);
                printf("Enter the student's last name: \n");
                while(1)
                {
                        fgets(input, 256, stdin);
                        if(sscanf(input, "%s", name)==1) break;
                        printf("Not a valid string, try again\n");
                }
		strcpy(students[i].lastName, name);
                printf("Enter the student's age: \n");
                while(1)
                {
                        fgets(input, 256, stdin);
                        if(sscanf(input, "%d", &numInput)==1) break;
                        printf("Not a valid age, try again\n");
                }
		students[i].age=numInput;
                printf("Enter the student's id: \n");
                while(1)
                {
                        fgets(input, 256, stdin);
                        if(sscanf(input, "%d", &numInput)==1) break;
                        printf("Not a valid string, try again\n");
                }
		students[i].studentid=numInput;
	}
	for(int i=0; i<numStudents; i++)
	{
		printStudent(&students[i]);
	}
}
