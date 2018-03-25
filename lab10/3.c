

#include <stdio.h>
typedef struct banks
{
	int accno;
	char name[30];
	char type[10];
	int bal;
}bank;
void print(bank a)
{
	printf("Account no:%d\n",a.accno);
	printf("Name:%s\n",a.name);
	printf("Type:%s\n",a.type);
	printf("Balance:%d\n",a.bal);
}
void search(bank *a,int acc)
{
	int found=0,pos;
	for(int i=0;i<5;i++)
	{
		if(a[i].accno==acc)
		{
			found=1;
			pos=i;
			break;
		}
	}
	if(found)
	{
		print(a[pos]);
	}
	else
		printf("Account not found ");
}
void sort_balance(bank *a)
{
	bank temp;
	for(int i=0;i<5;i++)
	for(int j=0;j<4-i;j++)
	{ 
		if(a[j].bal>a[j+1].bal)
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	for(int i=0;i<5;i++)
	print(a[i]);
}
int main(int argc, char **argv)
{
	bank b[5];
	for(int i=0;i<5;i++)
		{printf("\nEnter the details\n");
	scanf("%d",&b[i].accno);
	scanf("%s",b[i].name);
	scanf("%s",b[i].type);
	scanf("%d",&b[i].bal);
	
	}int acc;
	printf("Enter account no:");
	scanf("%d",&acc);
	search(b,acc);
	sort_balance(b);
	return 0;
}

