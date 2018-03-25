/*unary operators
  auhtor:Rahul K
  date:20jan2017*/
#include<stdio.h>
int main()
{	
	int a =250;
	int expr;
	expr=a+!a+~a+++a;
	printf("%d",expr);
	return 0;
}
/*
u4cse16151@11CPU0140L:~$ gcc out6.c
u4cse16151@11CPU0140L:~$ ./a.out
250u4cse16151@11CPU0140L:~$ 


*/
