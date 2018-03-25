
#include <stdio.h>

typedef struct patients
{
	int ipno;
	char name[40];
	struct date_admit
	{
		int day,month,year;
	}date;
}patient;
void print(patient p)
{
	printf("Patient no:%d\n",p.ipno);
	printf("Patient name:%s\n",p.name);
	printf("Date of admit:%d-%d-%d\n",p.date.day,p.date.month,p.date.year);
}
void details(patient p[],int n)
{
	int d1,d2,m1,m2,y1,y2;
	printf("Enter two dates:\n");
	scanf("%d%d%d",&d1,&m1,&y1);
	scanf("%d%d%d",&d2,&m2,&y2);
	for(int i=0;i<n;i++)
	{
		if(p[i].date.day>=d1&&p[i].date.day<=d2&&p[i].date.month>=m1&&p[i].date.month<=m2&&&p[i].date.year>=y1&&p[i].date.year<=y2)
		{
			print(p[i]);
		}
	}
}
int main(int argc, char **argv)
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	patient p[n];
	for(int i=0;i<n;i++)
	{
	printf("Enter details");
	scanf("%d",&p[i].ipno);
	scanf(" %[^\n]",p[i].name);
	scanf("%d%d%d",&p[i].date.day,&p[i].date.month,&p[i].date.year);
	}	
	details(p,n);
	return 0;
}

