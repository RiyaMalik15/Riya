#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[100],k,j,sum=0;
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the value of k");
	scanf("%d",&k);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	     sum=a[i]+a[j];
	     if(sum==k)
	     {
	     printf("%d%d",a[i],a[j]);
	     break;
	     }
	  }
	}
	getch();
}