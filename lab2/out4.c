/* sizeof operator
   author:Rahul Krishnan
   date:20jan2017*/
#include<stdio.h>
int main()
{
	printf("%d\t",sizeof(6.5));
	printf("%d\t",sizeof(90000));
	printf("%d\t",sizeof('A'));
	return 0;
}
/*
u4cse16151@11CPU0140L:~$ gcc out4.c
out4.c: In function ‘main’:
out4.c:7:9: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
  printf("%d\t",sizeof(6.5));
         ^
out4.c:8:9: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
  printf("%d\t",sizeof(90000));
         ^
out4.c:9:9: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
  printf("%d\t",sizeof('A'));
 
         ^
u4cse16151@11CPU0140L:~$ ./a.out
8	4	4	u4cse16151@11CPU0140L:~$ 



*/
