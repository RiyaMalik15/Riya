#include<stdio.h>
#include<conio.h>
void main()
{
	int temp,i,a[100],n;
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	temp=a[0]^a[1];
	for(i=2;i<n;i++)
	{
	   temp=temp^a[i];
	}
	printf("%d",temp);
	getch();
}