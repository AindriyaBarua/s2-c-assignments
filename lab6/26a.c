

#include <stdio.h>

int main(int argc, char **argv)
{
	int arr[5];
	arr++;
	printf("%u",arr);
	return 0;
}
/*
26a.c:30:5: error: lvalue required as increment operand
*   arr++;
* 26a.c:31:9: warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 2 has type ‘int *’ [-Wformat=]
*   printf("%u",arr);
* */
