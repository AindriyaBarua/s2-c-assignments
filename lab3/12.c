/*program to find largest
  */
#include<stdio.h>
int main()
{
	int a,b,c,d,l;
	printf("Enter 4 no:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	l=a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
	printf ("largest is :%d\t",l);
	return 0;
}

