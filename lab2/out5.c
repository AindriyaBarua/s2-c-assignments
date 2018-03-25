/* sizeof operator
   author:Rahul Krishnan
   date:20jan2017*/
#include<stdio.h>
int main()
{
	double num=5.2;
	int var=5;
	printf("%ld\t",sizeof(!num));
	printf("%ld\t",sizeof(var=15/2));
	printf("%d\t",var);
	return 0;
}
/*
u4cse16151@11CPU0140L:~$ gcc out5.c
u4cse16151@11CPU0140L:~$ ./a.out
4	4	5	u4cse16151@11CPU0140L:~$ 
*/



