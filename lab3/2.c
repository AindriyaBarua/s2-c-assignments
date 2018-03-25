/*program to find quotient of an integer no
  */	
#include<stdio.h>
int main()
{
	int a,b,t,c=0;
	printf("enter 2 no:");
	scanf("%d%d",&a,&b);
	t=a;
	while(t>=0)
	{
		t=t-b;
		if(t>=0)		
			c=c+1;
	}
	printf("quotient is :%d\n",c);
	return 0;
}
		
