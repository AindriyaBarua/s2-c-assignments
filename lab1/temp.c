/*Program to convert temperature
  */
#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter a temp in Fahrenheit\n");
	scanf("%f",&f);
	c=5*((f-32)/9);
	printf("celsius =%f",c);
	return 0;
}
