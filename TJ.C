#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[100],n,temp=0;
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
	  for(j=0;j<n-i-1;j++)
	  {
	     if(a[j]>a[j+1])
	     {
	       temp=a[j];
	       a[j]=a[j+1];
	       a[j+1]=temp;
	     }
	  }
	}
	for(i=0;i<n;i++)
	{
	  printf("%d",a[i]);
	}
	getch();
}

