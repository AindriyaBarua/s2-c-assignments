
#include <stdio.h>

int main(int argc, char **argv)
{
	int arr[5],i=0;
	while(i<5)
	arr[i]=++i;
	for(i=0;i<5;i++)
	printf("%d ,",arr[i]);
	
	return 0;
}
/*4195872,1,2,3,4,

------------------
(program exited with code: 0)
Press return to continue
*/
