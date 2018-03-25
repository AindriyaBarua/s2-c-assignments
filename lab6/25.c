

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	char s1[100],s2[20];
	printf("Enter the string  ");
	scanf("%s",s1);
	printf("\nEnter the substring to be searched  ");
	scanf("%s",s2);
	printf("%s",strstr(s1,s2));
	return 0;
}

