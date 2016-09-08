#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s=0,d,sum=0,a[100];
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	s=((n+2)*(n+1))/2;
	for(i=0;i<n;i++)
	{
	  sum=sum+a[i];
	}
	d=s-sum;
	printf("%d",d);
	getch();
}
