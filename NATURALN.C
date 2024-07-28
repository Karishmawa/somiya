#include<stdio.h>
#include<conio.h>
void sum1(void);
void sum2(int);
int sum3(void);
int sum4(int);
void main()
{     int k;
      clrscr();
      k=sum4(6);
      printf("Addition is: %d",k);
      getch();
}
/*TNRN*/
void sum1()
{
	int i,n,s=0;
	printf("Enter a natural number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("sum is: %d",s);
}
/*TSRN*/
void sum2(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("Sum is: %d",s);
}
/*TNRS*/
int sum3()
{
	int i,n,s=0;
	printf("Enter a natural number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	return (s);
}
/*TSRS*/
int sum4(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	return (s);
}

