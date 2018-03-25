

#include <stdio.h>
typedef struct student
{
	int roll;
	char name[20];
	int avg;
}stud;
int main(int argc, char **argv)
{
	stud std;
	printf("Enter the details:");
	scanf("%d",&std.roll);
	scanf("%s",std.name);
	scanf("%d",&std.avg);
	printf("\nRoll :%d\n",std.roll);
	printf("Name :%s\n",std.name);
	printf("Avg mark:%d\n",std.avg);
	return 0;
}

