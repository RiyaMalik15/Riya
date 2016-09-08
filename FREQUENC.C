#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[100],max;
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]>n)
	   {
	      a[i]=a[i]/n;
	   }
	   a[a[i]]=a[a[i]]+n;
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
	   if(a[i]>max)
	   {
	      max=a[i];
	   }
	}
	for(i=0;i<n;i++)
	   if(a[i]==max)
	   {
	     printf("%d",i);
	   }
	getch();
}